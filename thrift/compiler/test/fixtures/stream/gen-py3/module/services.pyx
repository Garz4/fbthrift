#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

from thrift.py3.std_libcpp cimport optional
from thrift.py3.stream cimport cServerStream, cServerStreamPublisher, cResponseAndServerStream, createResponseAndServerStream, createAsyncIteratorFromPyIterator, pythonFuncToCppFunc, ServerStream, ServerPublisher
cimport module.types as _module_types
import module.types as _module_types

cimport module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cPubSubStreamingServiceInterface
cdef class ServerPublisher_cint32_t(ServerPublisher):
    cdef unique_ptr[cServerStreamPublisher[cint32_t]] cPublisher

    def complete(ServerPublisher self):
        cmove(deref(self.cPublisher)).complete()

    # Calling this send instead of the wrapped method name of next because next is
    # a python keyword and makes the linter complain
    def send(ServerPublisher self, cint32_t item):
        deref(self.cPublisher).next(<cint32_t?>item)

    @staticmethod
    cdef _fbthrift_create(cServerStreamPublisher[cint32_t] cPublisher):
        cdef ServerPublisher_cint32_t inst = ServerPublisher_cint32_t.__new__(ServerPublisher_cint32_t)
        inst.cPublisher = make_unique[cServerStreamPublisher[cint32_t]](cmove(cPublisher))
        return inst

cdef class ServerStream_cint32_t(ServerStream):
    cdef unique_ptr[cServerStream[cint32_t]] cStream

    @staticmethod
    cdef _fbthrift_create(cServerStream[cint32_t] cStream):
        cdef ServerStream_cint32_t inst = ServerStream_cint32_t.__new__(ServerStream_cint32_t)
        inst.cStream = make_unique[cServerStream[cint32_t]](cmove(cStream))
        return inst

async def runGenerator_PubSubStreamingService_returnstream(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in returnstream:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler returnstream:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_PubSubStreamingService_returnstream(object generator, cFollyPromise[optional[cint32_t]] cPromise):
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_PubSubStreamingService_returnstream(
            generator,
            __promise
        )
    )
async def runGenerator_PubSubStreamingService_streamthrows(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except _module_types.FooEx as ex:
        promise.cPromise.setException(deref((<_module_types.FooEx> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in streamthrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler streamthrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_PubSubStreamingService_streamthrows(object generator, cFollyPromise[optional[cint32_t]] cPromise):
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_PubSubStreamingService_streamthrows(
            generator,
            __promise
        )
    )
async def runGenerator_PubSubStreamingService_boththrows(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except _module_types.FooEx as ex:
        promise.cPromise.setException(deref((<_module_types.FooEx> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in boththrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler boththrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_PubSubStreamingService_boththrows(object generator, cFollyPromise[optional[cint32_t]] cPromise):
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_PubSubStreamingService_boththrows(
            generator,
            __promise
        )
    )
async def runGenerator_PubSubStreamingService_responseandstreamthrows(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except _module_types.FooEx as ex:
        promise.cPromise.setException(deref((<_module_types.FooEx> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in responseandstreamthrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler responseandstreamthrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_PubSubStreamingService_responseandstreamthrows(object generator, cFollyPromise[optional[cint32_t]] cPromise):
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_PubSubStreamingService_responseandstreamthrows(
            generator,
            __promise
        )
    )
async def runGenerator_PubSubStreamingService_returnstreamFast(object generator, Promise_cint32_t_Stream promise):
    try:
        item = await generator.asend(None)
    except StopAsyncIteration:
        promise.cPromise.setValue(optional[cint32_t]())
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in returnstreamFast:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler returnstreamFast:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(optional[cint32_t](<cint32_t?>item))

cdef void getNextGenerator_PubSubStreamingService_returnstreamFast(object generator, cFollyPromise[optional[cint32_t]] cPromise):
    cdef Promise_cint32_t_Stream __promise = Promise_cint32_t_Stream._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        runGenerator_PubSubStreamingService_returnstreamFast(
            generator,
            __promise
        )
    )


@cython.auto_pickle(False)
cdef class Promise_cResponseAndServerStream__cint32_t_cint32_t:
    cdef cFollyPromise[cResponseAndServerStream[cint32_t,cint32_t]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cResponseAndServerStream[cint32_t,cint32_t]](cFollyPromise[cResponseAndServerStream[cint32_t,cint32_t]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cResponseAndServerStream[cint32_t,cint32_t]] cPromise):
        cdef Promise_cResponseAndServerStream__cint32_t_cint32_t inst = Promise_cResponseAndServerStream__cint32_t_cint32_t.__new__(Promise_cResponseAndServerStream__cint32_t_cint32_t)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cServerStream__cint32_t:
    cdef cFollyPromise[cServerStream[cint32_t]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cServerStream[cint32_t]](cFollyPromise[cServerStream[cint32_t]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cServerStream[cint32_t]] cPromise):
        cdef Promise_cServerStream__cint32_t inst = Promise_cServerStream__cint32_t.__new__(Promise_cServerStream__cint32_t)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cint32_t_Stream:
    cdef cFollyPromise[optional[cint32_t]] cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[optional[cint32_t]] cPromise):
        cdef Promise_cint32_t_Stream inst = Promise_cint32_t_Stream.__new__(Promise_cint32_t_Stream)
        inst.cPromise = cmove(cPromise)
        return inst

cdef object _PubSubStreamingService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class PubSubStreamingServiceInterface(
    ServiceInterface
):
    annotations = _PubSubStreamingService_annotations

    def __cinit__(self):
        self._cpp_obj = cPubSubStreamingServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    async def returnstream(
            self,
            i32_from,
            i32_to):
        raise NotImplementedError("async def returnstream is not implemented")

    @staticmethod
    def createPublisher_returnstream(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    async def streamthrows(
            self,
            foo):
        raise NotImplementedError("async def streamthrows is not implemented")

    @staticmethod
    def createPublisher_streamthrows(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    async def boththrows(
            self,
            foo):
        raise NotImplementedError("async def boththrows is not implemented")

    @staticmethod
    def createPublisher_boththrows(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    async def responseandstreamthrows(
            self,
            foo):
        raise NotImplementedError("async def responseandstreamthrows is not implemented")

    @staticmethod
    def createPublisher_responseandstreamthrows(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    async def returnstreamFast(
            self,
            i32_from,
            i32_to):
        raise NotImplementedError("async def returnstreamFast is not implemented")

    @staticmethod
    def createPublisher_returnstreamFast(callback=None):
        cdef unique_ptr[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]] streams = make_unique[pair[cServerStream[cint32_t], cServerStreamPublisher[cint32_t]]](cServerStream[cint32_t].createPublisher(pythonFuncToCppFunc(callback)))

        return (ServerStream_cint32_t._fbthrift_create(cmove(deref(streams).first)), ServerPublisher_cint32_t._fbthrift_create(cmove(deref(streams).second)))

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__PubSubStreamingService(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cPubSubStreamingServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.PubSubStreamingService"



cdef api void call_cy_PubSubStreamingService_returnstream(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cServerStream[cint32_t]] cPromise,
    cint32_t i32_from,
    cint32_t i32_to
):
    cdef Promise_cServerStream__cint32_t __promise = Promise_cServerStream__cint32_t._fbthrift_create(cmove(cPromise))
    arg_i32_from = i32_from
    arg_i32_to = i32_to
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_returnstream_coro(
            self,
            __promise,
            arg_i32_from,
            arg_i32_to
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_PubSubStreamingService_streamthrows(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cServerStream[cint32_t]] cPromise,
    cint32_t foo
):
    cdef Promise_cServerStream__cint32_t __promise = Promise_cServerStream__cint32_t._fbthrift_create(cmove(cPromise))
    arg_foo = foo
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_streamthrows_coro(
            self,
            __promise,
            arg_foo
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_PubSubStreamingService_boththrows(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cServerStream[cint32_t]] cPromise,
    cint32_t foo
):
    cdef Promise_cServerStream__cint32_t __promise = Promise_cServerStream__cint32_t._fbthrift_create(cmove(cPromise))
    arg_foo = foo
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_boththrows_coro(
            self,
            __promise,
            arg_foo
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_PubSubStreamingService_responseandstreamthrows(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cResponseAndServerStream[cint32_t,cint32_t]] cPromise,
    cint32_t foo
):
    cdef Promise_cResponseAndServerStream__cint32_t_cint32_t __promise = Promise_cResponseAndServerStream__cint32_t_cint32_t._fbthrift_create(cmove(cPromise))
    arg_foo = foo
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_responseandstreamthrows_coro(
            self,
            __promise,
            arg_foo
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_PubSubStreamingService_returnstreamFast(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cServerStream[cint32_t]] cPromise,
    cint32_t i32_from,
    cint32_t i32_to
):
    cdef Promise_cServerStream__cint32_t __promise = Promise_cServerStream__cint32_t._fbthrift_create(cmove(cPromise))
    arg_i32_from = i32_from
    arg_i32_to = i32_to
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_returnstreamFast_coro(
            self,
            __promise,
            arg_i32_from,
            arg_i32_to
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_PubSubStreamingService_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_PubSubStreamingService_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        PubSubStreamingService_onStopRequested_coro(
            self,
            __promise
        )
    )
async def PubSubStreamingService_returnstream_coro(
    object self,
    Promise_cServerStream__cint32_t promise,
    i32_from,
    i32_to
):
    try:
        result = self.returnstream(
                    i32_from,
                    i32_to)
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_PubSubStreamingService_returnstream)))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler returnstream:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler returnstream:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(cmove(deref((<ServerStream_cint32_t?>result).cStream)))

async def PubSubStreamingService_streamthrows_coro(
    object self,
    Promise_cServerStream__cint32_t promise,
    foo
):
    try:
        result = self.streamthrows(
                    foo)
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_PubSubStreamingService_streamthrows)))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler streamthrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler streamthrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(cmove(deref((<ServerStream_cint32_t?>result).cStream)))

async def PubSubStreamingService_boththrows_coro(
    object self,
    Promise_cServerStream__cint32_t promise,
    foo
):
    try:
        result = self.boththrows(
                    foo)
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_PubSubStreamingService_boththrows)))
    except _module_types.FooEx as ex:
        promise.cPromise.setException(deref((<_module_types.FooEx> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler boththrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler boththrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(cmove(deref((<ServerStream_cint32_t?>result).cStream)))

async def PubSubStreamingService_responseandstreamthrows_coro(
    object self,
    Promise_cResponseAndServerStream__cint32_t_cint32_t promise,
    foo
):
    try:
        result = self.responseandstreamthrows(
                    foo)
        result = await result
        item, result = result
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_PubSubStreamingService_responseandstreamthrows)))
    except _module_types.FooEx as ex:
        promise.cPromise.setException(deref((<_module_types.FooEx> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler responseandstreamthrows:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler responseandstreamthrows:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(createResponseAndServerStream[cint32_t,cint32_t]((<cint32_t?> item), cmove(deref((<ServerStream_cint32_t?>result).cStream))))

async def PubSubStreamingService_returnstreamFast_coro(
    object self,
    Promise_cServerStream__cint32_t promise,
    i32_from,
    i32_to
):
    try:
        result = self.returnstreamFast(
                    i32_from,
                    i32_to)
        if not isinstance(result, (ServerStream, AsyncIterator)):
            result = await result
        if isinstance(result, AsyncIterator):
            result = ServerStream_cint32_t._fbthrift_create(cmove(createAsyncIteratorFromPyIterator[cint32_t](result, get_executor(), &getNextGenerator_PubSubStreamingService_returnstreamFast)))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler returnstreamFast:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler returnstreamFast:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(cmove(deref((<ServerStream_cint32_t?>result).cStream)))

async def PubSubStreamingService_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def PubSubStreamingService_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

