// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bugu_packer.proto
#ifndef GRPC_bugu_5fpacker_2eproto__INCLUDED
#define GRPC_bugu_5fpacker_2eproto__INCLUDED

#include "bugu_packer.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
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

namespace bugu_packer {
namespace service {
namespace v1 {

class BuguPacker final {
 public:
  static constexpr char const* service_full_name() {
    return "bugu_packer.service.v1.BuguPacker";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::bugu_packer::service::v1::PackerReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>> AsyncPacker(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>>(AsyncPackerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>> PrepareAsyncPacker(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>>(PrepareAsyncPackerRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>* AsyncPackerRaw(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bugu_packer::service::v1::PackerReply>* PrepareAsyncPackerRaw(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::bugu_packer::service::v1::PackerReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>> AsyncPacker(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>>(AsyncPackerRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>> PrepareAsyncPacker(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>>(PrepareAsyncPackerRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response, std::function<void(::grpc::Status)>) override;
      void Packer(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>* AsyncPackerRaw(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bugu_packer::service::v1::PackerReply>* PrepareAsyncPackerRaw(::grpc::ClientContext* context, const ::bugu_packer::service::v1::PackerRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Packer_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Packer(::grpc::ServerContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Packer() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPacker(::grpc::ServerContext* context, ::bugu_packer::service::v1::PackerRequest* request, ::grpc::ServerAsyncResponseWriter< ::bugu_packer::service::v1::PackerReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Packer<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Packer() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::bugu_packer::service::v1::PackerRequest, ::bugu_packer::service::v1::PackerReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::bugu_packer::service::v1::PackerRequest* request, ::bugu_packer::service::v1::PackerReply* response) { return this->Packer(context, request, response); }));}
    void SetMessageAllocatorFor_Packer(
        ::grpc::MessageAllocator< ::bugu_packer::service::v1::PackerRequest, ::bugu_packer::service::v1::PackerReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::bugu_packer::service::v1::PackerRequest, ::bugu_packer::service::v1::PackerReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Packer(
      ::grpc::CallbackServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Packer<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Packer() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Packer() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPacker(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Packer() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Packer(context, request, response); }));
    }
    ~WithRawCallbackMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Packer(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Packer : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Packer() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::bugu_packer::service::v1::PackerRequest, ::bugu_packer::service::v1::PackerReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::bugu_packer::service::v1::PackerRequest, ::bugu_packer::service::v1::PackerReply>* streamer) {
                       return this->StreamedPacker(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Packer() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Packer(::grpc::ServerContext* /*context*/, const ::bugu_packer::service::v1::PackerRequest* /*request*/, ::bugu_packer::service::v1::PackerReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPacker(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::bugu_packer::service::v1::PackerRequest,::bugu_packer::service::v1::PackerReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Packer<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Packer<Service > StreamedService;
};

}  // namespace v1
}  // namespace service
}  // namespace bugu_packer


#endif  // GRPC_bugu_5fpacker_2eproto__INCLUDED
