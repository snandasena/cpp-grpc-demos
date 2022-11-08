//
// Created by sajith on 11/8/22.
//

#ifndef GRPC_DEMOS_STREAMING_CLIENT_H
#define GRPC_DEMOS_STREAMING_CLIENT_H

#include "../generated/number.grpc.pb.h"
#include <span>

class StreamingClient
{
public:

    explicit StreamingClient(std::unique_ptr<NumberService::StubInterface> stub);

    std::string Next() const;

    void Range(uint64_t min, uint64_t max, std::function<void(uint64_t)> onValue) const;

    uint64_t Sum(std::span<uint64_t> values) const;

private:

    std::unique_ptr<NumberService::StubInterface> m_stub;
};

#endif //GRPC_DEMOS_STREAMING_CLIENT_H
