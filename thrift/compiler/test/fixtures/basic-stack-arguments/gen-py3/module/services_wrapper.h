/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/MyService.h>
#include <src/gen-cpp2/MyServiceFast.h>
#include <src/gen-cpp2/DbMixedStackArguments.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class MyServiceWrapper : virtual public MyServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback
        , int64_t id
    ) override;
    void async_tm_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback
        , int64_t id
    ) override;
    void async_tm_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , int64_t id
        , const std::string& data
    ) override;
    void async_tm_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback
        , int64_t id
        , const std::string& data
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc);


class MyServiceFastWrapper : virtual public MyServiceFastSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceFastWrapper(PyObject *if_object, folly::Executor *exc);
    void async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback
        , int64_t id
    ) override;
    void async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback
        , int64_t id
    ) override;
    void async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
        , int64_t id
        , const std::string& data
    ) override;
    void async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback
        , int64_t id
        , const std::string& data
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceFastInterface(PyObject *if_object, folly::Executor *exc);


class DbMixedStackArgumentsWrapper : virtual public DbMixedStackArgumentsSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit DbMixedStackArgumentsWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback
        , std::unique_ptr<std::string> key
    ) override;
    void async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<std::string>> callback
        , const std::string& key
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> DbMixedStackArgumentsInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
