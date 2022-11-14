//
// Created by sajith on 11/7/22.
//
#include <grpcpp/impl/codegen/server_context.h>
#include <grpc++/server_builder.h>
#include "../generated/hello.grpc.pb.h"

class HelloServiceImpl final : public HelloService::Service
{
    grpc::Status SayHello(grpc::ServerContext *, const HelloRequest *request, HelloResponse *reply) override
    {
        std::cout << "Got a request!\n";
        reply->set_message("Hello " + request->name());
        return grpc::Status::OK;
    }
};

int main()
{

    HelloServiceImpl service;
    grpc::ServerBuilder builder;

    builder.AddListeningPort("localhost:50051", grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    auto server = builder.BuildAndStart();
    std::cout << "The service is listening! Press enter to stop\n";
    std::cin.get();
    server->Shutdown();
    server->Wait();

}