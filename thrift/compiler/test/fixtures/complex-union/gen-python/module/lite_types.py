#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions



class ComplexUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intValue",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "stringValue",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intListValue",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i64),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "stringListValue",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "typedefValue",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            14,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "stringRef",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ComplexUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_ComplexUnion()



class ListUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intListValue",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i64),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "stringListValue",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ListUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_ListUnion()



class DataUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "binaryData",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "stringData",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.DataUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_DataUnion()



class Val(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "strVal",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "intVal",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            9,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "typedefValue",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Val"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Val()



class ValUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "v1",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Val),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "v2",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(Val),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ValUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_ValUnion()



class VirtualComplexUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "thingOne",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "thingTwo",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.VirtualComplexUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_VirtualComplexUnion()



class NonCopyableStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "num",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.NonCopyableStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_NonCopyableStruct()



class NonCopyableUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(NonCopyableStruct),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.NonCopyableUnion"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_NonCopyableUnion()


# This unfortunately has to be down here to prevent circular imports
import module.lite_metadata


def _fbthrift_metadata__struct_ComplexUnion():
    return module.lite_metadata.gen_metadata_struct_ComplexUnion()
def _fbthrift_metadata__struct_ListUnion():
    return module.lite_metadata.gen_metadata_struct_ListUnion()
def _fbthrift_metadata__struct_DataUnion():
    return module.lite_metadata.gen_metadata_struct_DataUnion()
def _fbthrift_metadata__struct_Val():
    return module.lite_metadata.gen_metadata_struct_Val()
def _fbthrift_metadata__struct_ValUnion():
    return module.lite_metadata.gen_metadata_struct_ValUnion()
def _fbthrift_metadata__struct_VirtualComplexUnion():
    return module.lite_metadata.gen_metadata_struct_VirtualComplexUnion()
def _fbthrift_metadata__struct_NonCopyableStruct():
    return module.lite_metadata.gen_metadata_struct_NonCopyableStruct()
def _fbthrift_metadata__struct_NonCopyableUnion():
    return module.lite_metadata.gen_metadata_struct_NonCopyableUnion()

_fbthrift_all_structs = [
    ComplexUnion,
    ListUnion,
    DataUnion,
    Val,
    ValUnion,
    VirtualComplexUnion,
    NonCopyableStruct,
    NonCopyableUnion,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)

containerTypedef = _fbthrift_py3lite_types.MapTypeFactory(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string)
