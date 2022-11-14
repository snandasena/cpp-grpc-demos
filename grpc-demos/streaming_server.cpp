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
    Status Range(ServerContext *context, const RangeRequest *request, ServerWriter<RangeResponse> *writer) override
    {
        RangeResponse response;
        for (auto i = request->min(); i <= request->max(); ++i)
        {
            response.set_value(i);
            writer->Write(response);
            std::cout << "[MagicalNumberService.Range] wrote: " << i << '\n';
        }

        return Status::OK;

    }
    Status Sum(ServerContext *context, ServerReader<SumRequest> *reader, SumResponse *response) override
    {
        uint64_t sum = 0;
        SumRequest request;
        while (reader->Read(&request))
        {
            std::cout << "[MagicalNumberService] read: " << request.value() << '\n';
            sum += request.value();
        }
        return Status::OK;
    }

private:
    std::atomic<uint64_t> m_incremental = 0;
};

int main()
{
    MagicNumberService service;
    ServerBuilder builder;
    builder.AddListeningPort("localhost:50051", InsecureServerCredentials());
    builder.RegisterService(&service);

    auto server = builder.BuildAndStart();
    std::cout << "The server is listening! Press enter to shutdown\n";

    std::cin.get();
    server->Shutdown();
    server->Wait();
}