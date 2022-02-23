/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/PubSubStreamingService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class PubSubStreamingServiceWrapper : virtual public PubSubStreamingServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit PubSubStreamingServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_returnstream(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>> callback
        , int32_t i32_from
        , int32_t i32_to
    ) override;
    void async_tm_streamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>> callback
        , int32_t foo
    ) override;
    void async_tm_boththrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>> callback
        , int32_t foo
    ) override;
    void async_tm_responseandstreamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ResponseAndServerStream<int32_t,int32_t>>> callback
        , int32_t foo
    ) override;
    void async_eb_returnstreamFast(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ServerStream<int32_t>>> callback
        , int32_t i32_from
        , int32_t i32_to
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> PubSubStreamingServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
