/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }

  virtual void ping(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  void pingImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
  virtual void sync_ping();
  virtual void sync_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_ping();
  virtual folly::SemiFuture<folly::Unit> semifuture_ping();
  virtual folly::Future<folly::Unit> future_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_ping(apache::thrift::RpcOptions& rpcOptions);
  virtual void ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_ping(::apache::thrift::ClientReceiveState& state);
  static void recv_ping(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_ping(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void pingT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
  virtual void getRandomData(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void getRandomData(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  void getRandomDataImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
  virtual void sync_getRandomData(::std::string& _return);
  virtual void sync_getRandomData(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return);
  virtual folly::Future<::std::string> future_getRandomData();
  virtual folly::SemiFuture<::std::string> semifuture_getRandomData();
  virtual folly::Future<::std::string> future_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::std::string> semifuture_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_getRandomData(apache::thrift::RpcOptions& rpcOptions);
  virtual void getRandomData(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_getRandomData(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getRandomData(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getRandomData(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getRandomData(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getRandomDataT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
  virtual void hasDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void hasDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 private:
  void hasDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id);
 public:
  virtual bool sync_hasDataById(int64_t id);
  virtual bool sync_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<bool> future_hasDataById(int64_t id);
  virtual folly::SemiFuture<bool> semifuture_hasDataById(int64_t id);
  virtual folly::Future<bool> future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::SemiFuture<bool> semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_hasDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void hasDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_hasDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_hasDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_hasDataById(bool& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void hasDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id);
 public:
  virtual void getDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
  virtual void getDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id);
 private:
  void getDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id);
 public:
  virtual void sync_getDataById(::std::string& _return, int64_t id);
  virtual void sync_getDataById(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, int64_t id);
  virtual folly::Future<::std::string> future_getDataById(int64_t id);
  virtual folly::SemiFuture<::std::string> semifuture_getDataById(int64_t id);
  virtual folly::Future<::std::string> future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::SemiFuture<::std::string> semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_getDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id);
  virtual void getDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id);
  static folly::exception_wrapper recv_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_getDataById(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void getDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id);
 public:
  virtual void putDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data);
  virtual void putDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data);
 private:
  void putDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data);
 public:
  virtual void sync_putDataById(int64_t id, const ::std::string& data);
  virtual void sync_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(int64_t id, const ::std::string& data);
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(int64_t id, const ::std::string& data);
  virtual folly::Future<folly::Unit> future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::SemiFuture<folly::Unit> semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_putDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual void putDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const ::std::string& data);
  static folly::exception_wrapper recv_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
  static void recv_putDataById(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_putDataById(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_putDataById(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void putDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data);
 public:
  virtual void lobDataById(std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data);
  virtual void lobDataById(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int64_t id, const ::std::string& data);
 private:
  void lobDataByIdImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data);
 public:
  virtual void sync_lobDataById(int64_t id, const ::std::string& data);
  virtual void sync_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(int64_t id, const ::std::string& data);
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(int64_t id, const ::std::string& data);
  virtual folly::Future<folly::Unit> future_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual folly::SemiFuture<folly::Unit> semifuture_lobDataById(apache::thrift::RpcOptions& rpcOptions, int64_t id, const ::std::string& data);
  virtual void lobDataById(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int64_t id, const ::std::string& data);
 private:
  template <typename Protocol_>
  void lobDataByIdT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, int64_t id, const ::std::string& data);
 public:
  virtual void cppDoNothing(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void cppDoNothing(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  void cppDoNothingImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
  virtual void sync_cppDoNothing();
  virtual void sync_cppDoNothing(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_cppDoNothing();
  virtual folly::SemiFuture<folly::Unit> semifuture_cppDoNothing();
  virtual folly::Future<folly::Unit> future_cppDoNothing(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_cppDoNothing(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_cppDoNothing(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_cppDoNothing(apache::thrift::RpcOptions& rpcOptions);
  virtual void cppDoNothing(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_cppDoNothing(::apache::thrift::ClientReceiveState& state);
  static void recv_cppDoNothing(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_cppDoNothing(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_cppDoNothing(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void cppDoNothingT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:
};

} // cpp2
