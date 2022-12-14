//
// Created by sajith on 11/8/22.
//

#include <grpcpp/create_channel.h>
#include "../generated/hello.grpc.pb.h"

int main()
{
    auto channel = grpc::CreateChannel("localhost:50051",
                                       grpc::InsecureChannelCredentials());

    auto stub = HelloService::NewStub(std::move(channel));
    grpc::ClientContext ctx;

    HelloRequest request;
    request.set_name("Sajith");

    HelloResponse response;
    if (const auto status = stub->SayHello(&ctx, request, &response); status.ok())
    {
        std::cout << response.message() << '\n';
    }
    else
    {
        std::cout << "Error\n";
        return status.error_code();
    }
}