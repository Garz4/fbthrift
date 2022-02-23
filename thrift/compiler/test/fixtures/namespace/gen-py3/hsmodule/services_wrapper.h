/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <gen-cpp2/HsTestService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class HsTestServiceWrapper : virtual public HsTestServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit HsTestServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_init(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback
        , int64_t int1
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> HsTestServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
