/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/MyServiceFastAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceFastSvAsyncIf {
 public:
  virtual ~MyServiceFastSvAsyncIf() {}
  virtual void async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) = 0;
  virtual folly::Future<bool> future_hasDataById(int64_t id) = 0;
  virtual folly::SemiFuture<bool> semifuture_hasDataById(int64_t id) = 0;
  virtual void async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, int64_t id) = 0;
  virtual folly::Future<::std::string> future_getDataById(int64_t id) = 0;
  virtual folly::SemiFuture<::std::string> semifuture_getDataById(int64_t id) = 0;
  virtual void async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, const ::std::string& data) = 0;
  virtual folly::Future<folly::Unit> future_putDataById(int64_t id, const ::std::string& data) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(int64_t id, const ::std::string& data) = 0;
  virtual void async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, const ::std::string& data) = 0;
  virtual folly::Future<folly::Unit> future_lobDataById(int64_t id, const ::std::string& data) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(int64_t id, const ::std::string& data) = 0;
};

class MyServiceFastAsyncProcessor;

class MyServiceFastSvIf : public MyServiceFastSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceFastAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual bool hasDataById(int64_t /*id*/);
  folly::Future<bool> future_hasDataById(int64_t id) override;
  folly::SemiFuture<bool> semifuture_hasDataById(int64_t id) override;
  void async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) override;
  virtual void getDataById(::std::string& /*_return*/, int64_t /*id*/);
  folly::Future<::std::string> future_getDataById(int64_t id) override;
  folly::SemiFuture<::std::string> semifuture_getDataById(int64_t id) override;
  void async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, int64_t id) override;
  virtual void putDataById(int64_t /*id*/, const ::std::string& /*data*/);
  folly::Future<folly::Unit> future_putDataById(int64_t id, const ::std::string& data) override;
  folly::SemiFuture<folly::Unit> semifuture_putDataById(int64_t id, const ::std::string& data) override;
  void async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, const ::std::string& data) override;
  virtual void lobDataById(int64_t /*id*/, const ::std::string& /*data*/);
  folly::Future<folly::Unit> future_lobDataById(int64_t id, const ::std::string& data) override;
  folly::SemiFuture<folly::Unit> semifuture_lobDataById(int64_t id, const ::std::string& data) override;
  void async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, const ::std::string& data) override;
};

class MyServiceFastSvNull : public MyServiceFastSvIf {
 public:
};

class MyServiceFastAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceFastSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<MyServiceFastAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const MyServiceFastAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const MyServiceFastAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const MyServiceFastAsyncProcessor::ProcessMap binaryProcessMap_;
   static const MyServiceFastAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_hasDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_hasDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_hasDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_getDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_getDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_putDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_putDataById(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_putDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_lobDataById(std::unique_ptr<apache::thrift::ResponseChannelRequest> req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
 public:
  MyServiceFastAsyncProcessor(MyServiceFastSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceFastAsyncProcessor() {}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
