//
// Created by sajith on 11/14/22.
//

#ifndef GRPC_DEMOS_SNOWFLAKE_H
#define GRPC_DEMOS_SNOWFLAKE_H

#include <cstdint>
#include <chrono>
#include <stdexcept>


template<int64_t Epoch = 1420070400000L>
class Snowflake
{
public:
    static constexpr int64_t WORKER_ID_BITS = 5L;
    static constexpr int64_t DATACENTER_ID_BITS = 5L;
    static constexpr int64_t MAX_WORKER_ID = (1 << WORKER_ID_BITS) - 1;
    static constexpr int64_t MAX_DATACENTER_ID = (1 << DATACENTER_ID_BITS) - 1;
    static constexpr int64_t SEQUENCE_BITS = 12L;

    Snowflake(int64_t workerid, int64_t datacenterid)
    {
        if (workerid > MAX_WORKER_ID || workerid < 0)
        {
            throw std::runtime_error{"worker id can't be greater than 31 or less than 0"};
        }

        if (datacenterid > MAX_DATACENTER_ID || datacenterid < 0)
        {
            throw std::runtime_error{"datacenter id can't "};
        }

        m_worker_id = workerid;
        m_datacenter_id = datacenterid;
    }

    int64_t next_id()
    {
        auto timestamp = milliseconds();
        if (m_last_timestamp == timestamp)
        {
            m_sequence = (m_sequence + 1) & SEQUENCE_MASK;
            if (m_sequence == 0)
            {
                timestamp = wait_next_milliseconds(m_last_timestamp);
            }
        }
        else
        {
            m_sequence = 0;
        }
        m_last_timestamp = timestamp;
        return (timestamp << TIMESTAMP_LEFT_SHIFT)
               | (m_datacenter_id << DATACENTER_ID_SHIFT)
               | (m_worker_id << WORKER_ID_SHIFT)
               | m_sequence;

    }

private:

    [[nodiscard]] int64_t milliseconds() const noexcept
    {
        auto diff =
                std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() -
                                                                      m_start_time_steady);
        return m_start_time + diff.count();
    }

    int64_t wait_next_milliseconds(int64_t last) const noexcept
    {
        auto timestamp = milliseconds();
        if (timestamp <= last)
        {
            timestamp = milliseconds();
        }
        return timestamp;
    }

    static constexpr int64_t WORKER_ID_SHIFT = SEQUENCE_BITS;
    static constexpr int64_t DATACENTER_ID_SHIFT = SEQUENCE_BITS + WORKER_ID_BITS;
    static constexpr int64_t TIMESTAMP_LEFT_SHIFT = SEQUENCE_BITS + WORKER_ID_BITS + DATACENTER_ID_BITS;
    static constexpr int64_t SEQUENCE_MASK = (1 << SEQUENCE_BITS) - 1;

    using time_point = std::chrono::time_point<std::chrono::steady_clock>;
    time_point m_start_time_steady = std::chrono::steady_clock::now();

    int64_t m_start_time = std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count() - Epoch;

    int64_t m_last_timestamp = -1;
    int64_t m_worker_id = 0;
    int64_t m_datacenter_id = 0;
    int64_t m_sequence = 0;


};


#endif //GRPC_DEMOS_SNOWFLAKE_H
