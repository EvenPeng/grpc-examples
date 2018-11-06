// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: utils.proto

#include "utils.pb.h"
#include "utils.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace utils {

static const char* UtilsServer_method_names[] = {
  "/utils.UtilsServer/Sort",
  "/utils.UtilsServer/FindMin",
  "/utils.UtilsServer/FindMax",
};

std::unique_ptr< UtilsServer::Stub> UtilsServer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< UtilsServer::Stub> stub(new UtilsServer::Stub(channel));
  return stub;
}

UtilsServer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Sort_(UtilsServer_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FindMin_(UtilsServer_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FindMax_(UtilsServer_method_names[2], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  {}

::grpc::Status UtilsServer::Stub::Sort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::DoubleArray* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Sort_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>* UtilsServer::Stub::AsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::utils::DoubleArray>::Create(channel_.get(), cq, rpcmethod_Sort_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>* UtilsServer::Stub::PrepareAsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::utils::DoubleArray>::Create(channel_.get(), cq, rpcmethod_Sort_, context, request, false);
}

::grpc::Status UtilsServer::Stub::FindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::Double* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_FindMin_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::utils::Double>* UtilsServer::Stub::AsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::utils::Double>::Create(channel_.get(), cq, rpcmethod_FindMin_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::utils::Double>* UtilsServer::Stub::PrepareAsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::utils::Double>::Create(channel_.get(), cq, rpcmethod_FindMin_, context, request, false);
}

::grpc::ClientWriter< ::utils::Double>* UtilsServer::Stub::FindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response) {
  return ::grpc::internal::ClientWriterFactory< ::utils::Double>::Create(channel_.get(), rpcmethod_FindMax_, context, response);
}

::grpc::ClientAsyncWriter< ::utils::Double>* UtilsServer::Stub::AsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::utils::Double>::Create(channel_.get(), cq, rpcmethod_FindMax_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::utils::Double>* UtilsServer::Stub::PrepareAsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::utils::Double>::Create(channel_.get(), cq, rpcmethod_FindMax_, context, response, false, nullptr);
}

UtilsServer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UtilsServer_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< UtilsServer::Service, ::utils::DoubleArray, ::utils::DoubleArray>(
          std::mem_fn(&UtilsServer::Service::Sort), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UtilsServer_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< UtilsServer::Service, ::utils::DoubleArray, ::utils::Double>(
          std::mem_fn(&UtilsServer::Service::FindMin), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UtilsServer_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< UtilsServer::Service, ::utils::Double, ::utils::Double>(
          std::mem_fn(&UtilsServer::Service::FindMax), this)));
}

UtilsServer::Service::~Service() {
}

::grpc::Status UtilsServer::Service::Sort(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::DoubleArray* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status UtilsServer::Service::FindMin(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::Double* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status UtilsServer::Service::FindMax(::grpc::ServerContext* context, ::grpc::ServerReader< ::utils::Double>* reader, ::utils::Double* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace utils

