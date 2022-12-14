cmake_minimum_required(VERSION 3.22)
project(grpc_demos)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        gRPC
        GIT_REPOSITORY https://github.com/grpc/grpc
        GIT_TAG v1.50.1  # e.g v1.28.0
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Hello world example
set(sources generated/hello.grpc.pb.cc
        generated/hello.grpc.pb.h
        generated/hello.pb.h
        generated/hello.pb.cc)

add_executable(grpc-server
        grpc-demos/hello_server.cpp
        ${sources})
target_link_libraries(grpc-server grpc++)


add_executable(grpc-client
        grpc-demos/hello_client.cpp
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
        grpc-demos/streaming_server.cpp
        ${sources_streaming})

target_link_libraries(grpc-streaming-server grpc++)


add_executable(tests grpc-demos/streaming_tests.cpp grpc-demos/streaming_client.cpp ${sources_streaming})
target_link_libraries(tests
        grpc++
        gtest
        gmock)

# End Streaming example


# Snowflake example
set(sources generated/snowflake.grpc.pb.cc
        generated/snowflake.grpc.pb.h
        generated/snowflake.pb.h
        generated/snowflake.pb.cc)

add_executable(snowflake-server
        grpc-demos/snowflake_server.cpp
        grpc-demos/snowflake.h
        ${sources})
target_link_libraries(snowflake-server grpc++)