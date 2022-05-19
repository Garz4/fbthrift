#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


import facebook.thrift.annotation.cpp.lite_types

import facebook.thrift.annotation.hack.lite_types

import facebook.thrift.annotation.python.lite_types

import facebook.thrift.annotation.thrift.lite_types
import my.another.module
import my.module
import my


class Foo(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intField",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalIntField",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intFieldWithDefault",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            13,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "setField",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalSetField",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "mapField",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            7,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalMapField",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "binaryField",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "longField",  # name
            _fbthrift_py3lite_types.AdaptedTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, my.module.Adapter2),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            10,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "adaptedLongField",  # name
            _fbthrift_py3lite_types.AdaptedTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, my.module.Adapter2),  # typeinfo
            None,  # default value
            my.Adapter3,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Foo"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/compiler/test/fixtures/adapter/src/module/Foo"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Foo()



class Baz(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intField",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "setField",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "mapField",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            8,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "binaryField",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "longField",  # name
            _fbthrift_py3lite_types.AdaptedTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, my.module.Adapter2),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Baz"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Baz()



class Bar(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "structField",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Foo),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalStructField",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Foo),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "structListField",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(Foo)),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalStructListField",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(Foo)),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "unionField",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Baz),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            6,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "optionalUnionField",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Baz),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Bar"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Bar()



class StructWithFieldAdapter(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            my.Adapter1,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "shared_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "opt_shared_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "opt_boxed_field",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.StructWithFieldAdapter"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_StructWithFieldAdapter()


# This unfortunately has to be down here to prevent circular imports
import module.lite_metadata


def _fbthrift_metadata__struct_Foo():
    return module.lite_metadata.gen_metadata_struct_Foo()
def _fbthrift_metadata__struct_Baz():
    return module.lite_metadata.gen_metadata_struct_Baz()
def _fbthrift_metadata__struct_Bar():
    return module.lite_metadata.gen_metadata_struct_Bar()
def _fbthrift_metadata__struct_StructWithFieldAdapter():
    return module.lite_metadata.gen_metadata_struct_StructWithFieldAdapter()

_fbthrift_all_structs = [
    Foo,
    Baz,
    Bar,
    StructWithFieldAdapter,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)

SetWithAdapter = _fbthrift_py3lite_types.SetTypeFactory(_fbthrift_py3lite_types.typeinfo_string)
StringWithAdapter = str
ListWithElemAdapter = _fbthrift_py3lite_types.ListTypeFactory(_fbthrift_py3lite_types.typeinfo_string)
ListWithElemAdapter_withAdapter = _fbthrift_py3lite_types.ListTypeFactory(_fbthrift_py3lite_types.typeinfo_string)
MyI64 = my.another.module.AdaptedType2
MyI32 = int
FooWithAdapter = Foo
StructWithAdapter = Bar
UnionWithAdapter = Baz


class _fbthrift_Service_func_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "arg1",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "arg2",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "arg3",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Foo),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

class _fbthrift_Service_func_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_Service_func_args,
    _fbthrift_Service_func_result,
)
