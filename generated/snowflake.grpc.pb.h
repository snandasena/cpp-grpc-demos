// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: snowflake.proto
#ifndef GRPC_snowflake_2eproto__INCLUDED
#define GRPC_snowflake_2eproto__INCLUDED

#include "snowflake.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class SnowflakeServer final {
 public:
  static constexpr char const* service_full_name() {
    return "SnowflakeServer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>> NextId(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>>(NextIdRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>> AsyncNextId(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>>(AsyncNextIdRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>> PrepareAsyncNextId(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>>(PrepareAsyncNextIdRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void NextId(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::NextIdRequest,::NextIdResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>* NextIdRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>* AsyncNextIdRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::NextIdRequest, ::NextIdResponse>* PrepareAsyncNextIdRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::NextIdRequest, ::NextIdResponse>> NextId(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::NextIdRequest, ::NextIdResponse>>(NextIdRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>> AsyncNextId(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>>(AsyncNextIdRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>> PrepareAsyncNextId(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>>(PrepareAsyncNextIdRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void NextId(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::NextIdRequest,::NextIdResponse>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::NextIdRequest, ::NextIdResponse>* NextIdRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>* AsyncNextIdRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::NextIdRequest, ::NextIdResponse>* PrepareAsyncNextIdRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_NextId_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status NextId(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_NextId : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_NextId() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_NextId() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NextId(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestNextId(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::NextIdResponse, ::NextIdRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_NextId<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_NextId : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_NextId() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::NextIdRequest, ::NextIdResponse>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->NextId(context); }));
    }
    ~WithCallbackMethod_NextId() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NextId(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::NextIdRequest, ::NextIdResponse>* NextId(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_NextId<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_NextId : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_NextId() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_NextId() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NextId(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_NextId : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_NextId() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_NextId() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NextId(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestNextId(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_NextId : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_NextId() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->NextId(context); }));
    }
    ~WithRawCallbackMethod_NextId() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NextId(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::NextIdResponse, ::NextIdRequest>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* NextId(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};


#endif  // GRPC_snowflake_2eproto__INCLUDED