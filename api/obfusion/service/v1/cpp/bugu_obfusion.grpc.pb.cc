// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bugu_obfusion.proto

#include "bugu_obfusion.pb.h"
#include "bugu_obfusion.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace bugu_obfusion {
namespace service {
namespace v1 {

static const char* BuguObfusion_method_names[] = {
  "/bugu_obfusion.service.v1.BuguObfusion/Obfusion",
};

std::unique_ptr< BuguObfusion::Stub> BuguObfusion::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< BuguObfusion::Stub> stub(new BuguObfusion::Stub(channel, options));
  return stub;
}

BuguObfusion::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Obfusion_(BuguObfusion_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BuguObfusion::Stub::Obfusion(::grpc::ClientContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest& request, ::bugu_obfusion::service::v1::ObfusionReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::bugu_obfusion::service::v1::ObfusionRequest, ::bugu_obfusion::service::v1::ObfusionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Obfusion_, context, request, response);
}

void BuguObfusion::Stub::async::Obfusion(::grpc::ClientContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest* request, ::bugu_obfusion::service::v1::ObfusionReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::bugu_obfusion::service::v1::ObfusionRequest, ::bugu_obfusion::service::v1::ObfusionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Obfusion_, context, request, response, std::move(f));
}

void BuguObfusion::Stub::async::Obfusion(::grpc::ClientContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest* request, ::bugu_obfusion::service::v1::ObfusionReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Obfusion_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bugu_obfusion::service::v1::ObfusionReply>* BuguObfusion::Stub::PrepareAsyncObfusionRaw(::grpc::ClientContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::bugu_obfusion::service::v1::ObfusionReply, ::bugu_obfusion::service::v1::ObfusionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Obfusion_, context, request);
}

::grpc::ClientAsyncResponseReader< ::bugu_obfusion::service::v1::ObfusionReply>* BuguObfusion::Stub::AsyncObfusionRaw(::grpc::ClientContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncObfusionRaw(context, request, cq);
  result->StartCall();
  return result;
}

BuguObfusion::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      BuguObfusion_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< BuguObfusion::Service, ::bugu_obfusion::service::v1::ObfusionRequest, ::bugu_obfusion::service::v1::ObfusionReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](BuguObfusion::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bugu_obfusion::service::v1::ObfusionRequest* req,
             ::bugu_obfusion::service::v1::ObfusionReply* resp) {
               return service->Obfusion(ctx, req, resp);
             }, this)));
}

BuguObfusion::Service::~Service() {
}

::grpc::Status BuguObfusion::Service::Obfusion(::grpc::ServerContext* context, const ::bugu_obfusion::service::v1::ObfusionRequest* request, ::bugu_obfusion::service::v1::ObfusionReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace bugu_obfusion
}  // namespace service
}  // namespace v1

