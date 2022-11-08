# Hello world app
protoc -I protos --grpc_out=generated --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` protos/hello.proto
protoc -I protos --cpp_out=generated  protos/hello.proto

# Streaming app
