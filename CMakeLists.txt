cmake_minimum_required(VERSION 3.22)
project(grpc_demos)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        gRPC
        GIT_REPOSITORY https://github.com/grpc/grpc
        GIT_TAG v1.50.1  # e.g v1.28.0
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

# Hello world example
set(sources generated/hello.grpc.pb.cc
        generated/hello.grpc.pb.h
        generated/hello.pb.h
        generated/hello.pb.cc)

add_executable(grpc-server
        hello-world/hello_server.cpp
        ${sources})
target_link_libraries(grpc-server grpc++)


add_executable(grpc-client
        hello-world/hello_client.cpp
        ${sources})
target_link_libraries(grpc-client grpc++)


# End Hello world example

# Streaming example

set(sources_streaming
        generated/number.grpc.pb.cc
        generated/number.grpc.pb.h
        generated/number.pb.h
        generated/number.pb.cc)

add_executable(grpc-streaming-server
        hello-world/streaming_server.cpp
        ${sources_streaming})

target_link_libraries(grpc-streaming-server grpc++)

# End Streaming example