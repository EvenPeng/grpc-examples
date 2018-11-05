// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: utils.proto
#ifndef GRPC_utils_2eproto__INCLUDED
#define GRPC_utils_2eproto__INCLUDED

#include "utils.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace utils {

class UtilServer final {
 public:
  static constexpr char const* service_full_name() {
    return "utils.UtilServer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Sort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::DoubleArray* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>> AsyncSort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>>(AsyncSortRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>> PrepareAsyncSort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>>(PrepareAsyncSortRaw(context, request, cq));
    }
    virtual ::grpc::Status FindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::Double* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>> AsyncFindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>>(AsyncFindMinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>> PrepareAsyncFindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>>(PrepareAsyncFindMinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriterInterface< ::utils::Double>> FindMax(::grpc::ClientContext* context, ::utils::Double* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::utils::Double>>(FindMaxRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::utils::Double>> AsyncFindMax(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::utils::Double>>(AsyncFindMaxRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::utils::Double>> PrepareAsyncFindMax(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::utils::Double>>(PrepareAsyncFindMaxRaw(context, response, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>* AsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::utils::DoubleArray>* PrepareAsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>* AsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::utils::Double>* PrepareAsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::utils::Double>* FindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::utils::Double>* AsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::utils::Double>* PrepareAsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Sort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::DoubleArray* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>> AsyncSort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>>(AsyncSortRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>> PrepareAsyncSort(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>>(PrepareAsyncSortRaw(context, request, cq));
    }
    ::grpc::Status FindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::utils::Double* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::Double>> AsyncFindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::Double>>(AsyncFindMinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::Double>> PrepareAsyncFindMin(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::utils::Double>>(PrepareAsyncFindMinRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::utils::Double>> FindMax(::grpc::ClientContext* context, ::utils::Double* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::utils::Double>>(FindMaxRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::utils::Double>> AsyncFindMax(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::utils::Double>>(AsyncFindMaxRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::utils::Double>> PrepareAsyncFindMax(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::utils::Double>>(PrepareAsyncFindMaxRaw(context, response, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>* AsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::utils::DoubleArray>* PrepareAsyncSortRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::utils::Double>* AsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::utils::Double>* PrepareAsyncFindMinRaw(::grpc::ClientContext* context, const ::utils::DoubleArray& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::utils::Double>* FindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response) override;
    ::grpc::ClientAsyncWriter< ::utils::Double>* AsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::utils::Double>* PrepareAsyncFindMaxRaw(::grpc::ClientContext* context, ::utils::Double* response, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Sort_;
    const ::grpc::internal::RpcMethod rpcmethod_FindMin_;
    const ::grpc::internal::RpcMethod rpcmethod_FindMax_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Sort(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::DoubleArray* response);
    virtual ::grpc::Status FindMin(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::Double* response);
    virtual ::grpc::Status FindMax(::grpc::ServerContext* context, ::grpc::ServerReader< ::utils::Double>* reader, ::utils::Double* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Sort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Sort() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Sort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sort(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::DoubleArray* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSort(::grpc::ServerContext* context, ::utils::DoubleArray* request, ::grpc::ServerAsyncResponseWriter< ::utils::DoubleArray>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_FindMin : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_FindMin() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_FindMin() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FindMin(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::Double* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFindMin(::grpc::ServerContext* context, ::utils::DoubleArray* request, ::grpc::ServerAsyncResponseWriter< ::utils::Double>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_FindMax : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_FindMax() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_FindMax() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FindMax(::grpc::ServerContext* context, ::grpc::ServerReader< ::utils::Double>* reader, ::utils::Double* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFindMax(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::utils::Double, ::utils::Double>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(2, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Sort<WithAsyncMethod_FindMin<WithAsyncMethod_FindMax<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Sort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Sort() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Sort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Sort(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::DoubleArray* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_FindMin : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_FindMin() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_FindMin() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FindMin(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::Double* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_FindMax : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_FindMax() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_FindMax() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status FindMax(::grpc::ServerContext* context, ::grpc::ServerReader< ::utils::Double>* reader, ::utils::Double* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Sort : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Sort() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::utils::DoubleArray, ::utils::DoubleArray>(std::bind(&WithStreamedUnaryMethod_Sort<BaseClass>::StreamedSort, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Sort() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Sort(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::DoubleArray* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSort(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::utils::DoubleArray,::utils::DoubleArray>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_FindMin : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_FindMin() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::utils::DoubleArray, ::utils::Double>(std::bind(&WithStreamedUnaryMethod_FindMin<BaseClass>::StreamedFindMin, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_FindMin() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status FindMin(::grpc::ServerContext* context, const ::utils::DoubleArray* request, ::utils::Double* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedFindMin(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::utils::DoubleArray,::utils::Double>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Sort<WithStreamedUnaryMethod_FindMin<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Sort<WithStreamedUnaryMethod_FindMin<Service > > StreamedService;
};

}  // namespace utils


#endif  // GRPC_utils_2eproto__INCLUDED