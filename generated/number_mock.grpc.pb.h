// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: number.proto

#include "number.pb.h"
#include "number.grpc.pb.h"

#include <grpcpp/support/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>

class MockNumberServiceStub : public NumberService::StubInterface {
 public:
  MOCK_METHOD3(Next, ::grpc::Status(::grpc::ClientContext* context, const ::NumberRequest& request, ::NumberResponse* response));
  MOCK_METHOD3(AsyncNextRaw, ::grpc::ClientAsyncResponseReaderInterface< ::NumberResponse>*(::grpc::ClientContext* context, const ::NumberRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncNextRaw, ::grpc::ClientAsyncResponseReaderInterface< ::NumberResponse>*(::grpc::ClientContext* context, const ::NumberRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD2(RangeRaw, ::grpc::ClientReaderInterface< ::RangeResponse>*(::grpc::ClientContext* context, const ::RangeRequest& request));
  MOCK_METHOD4(AsyncRangeRaw, ::grpc::ClientAsyncReaderInterface< ::RangeResponse>*(::grpc::ClientContext* context, const ::RangeRequest& request, ::grpc::CompletionQueue* cq, void* tag));
  MOCK_METHOD3(PrepareAsyncRangeRaw, ::grpc::ClientAsyncReaderInterface< ::RangeResponse>*(::grpc::ClientContext* context, const ::RangeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD2(SumRaw, ::grpc::ClientWriterInterface< ::SumRequest>*(::grpc::ClientContext* context, ::SumResponse* response));
  MOCK_METHOD4(AsyncSumRaw, ::grpc::ClientAsyncWriterInterface< ::SumRequest>*(::grpc::ClientContext* context, ::SumResponse* response, ::grpc::CompletionQueue* cq, void* tag));
  MOCK_METHOD3(PrepareAsyncSumRaw, ::grpc::ClientAsyncWriterInterface< ::SumRequest>*(::grpc::ClientContext* context, ::SumResponse* response, ::grpc::CompletionQueue* cq));
};

