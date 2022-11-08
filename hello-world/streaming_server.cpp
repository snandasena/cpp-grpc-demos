//
// Created by sajith on 11/8/22.
//

#include <grpc++/server_builder.h>
#include "../generated/number.grpc.pb.h"

using namespace grpc;

class MagicNumberService final : public NumberService::Service
{
public:
    Status Next(ServerContext *context, const NumberRequest *request, NumberResponse *response) override
    {
        response->set_value(m_incremental++);
        return Status::OK;
    }
    Status Range(ServerContext *context, const RangeRequest *request,
                 ServerWriter<RangeResponse> *writer) override
    {

    }
    Status SUm(ServerContext *context, ServerReader<SumRequest> *reader, SumResponse *response) override
    {

    }

private:
    std::atomic<uint64_t> m_incremental = 0;
};
