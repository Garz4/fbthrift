#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.py3lite.types as _fbthrift_py3lite_types
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions


class MyEnum(enum.Enum):
    MyValue1 = 0
    MyValue2 = 1
    MyValue3 = 3
    MyValue4 = 4
    MyValue5 = 5


class MyStructFloatFieldThrowExp(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myLongField",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "MyByteField",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "myStringField",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "myFloatField",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
        ),
    )


class MyStructMapFloatThrowExp(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myLongField",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "mapListOfFloats",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_float))),  # typeinfo
            None,  # default value
        ),
    )


class MyStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "MyIntField",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "MyStringField",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "MyDataField",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "myEnum",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "MyBoolField",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "MyByteField",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "MyShortField",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "MyLongField",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "MyDoubleField",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
        ),
        (
            10,  # id
            True,  # isUnqualified
            "lDouble",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_double),  # typeinfo
            None,  # default value
        ),
        (
            11,  # id
            True,  # isUnqualified
            "lShort",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
        ),
        (
            12,  # id
            True,  # isUnqualified
            "lInteger",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i32),  # typeinfo
            None,  # default value
        ),
        (
            13,  # id
            True,  # isUnqualified
            "lLong",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i64),  # typeinfo
            None,  # default value
        ),
        (
            14,  # id
            True,  # isUnqualified
            "lString",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            15,  # id
            True,  # isUnqualified
            "lBool",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_bool),  # typeinfo
            None,  # default value
        ),
        (
            16,  # id
            True,  # isUnqualified
            "lByte",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_byte),  # typeinfo
            None,  # default value
        ),
        (
            17,  # id
            True,  # isUnqualified
            "mShortString",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            18,  # id
            True,  # isUnqualified
            "mIntegerString",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            19,  # id
            True,  # isUnqualified
            "mStringMyStruct",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.StructTypeInfo(MyStruct)),  # typeinfo
            None,  # default value
        ),
        (
            20,  # id
            True,  # isUnqualified
            "mStringBool",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.typeinfo_bool),  # typeinfo
            None,  # default value
        ),
        (
            21,  # id
            True,  # isUnqualified
            "mIntegerInteger",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_i32),  # typeinfo
            None,  # default value
        ),
        (
            22,  # id
            True,  # isUnqualified
            "mIntegerBool",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_bool),  # typeinfo
            None,  # default value
        ),
        (
            23,  # id
            True,  # isUnqualified
            "sShort",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i16),  # typeinfo
            None,  # default value
        ),
        (
            24,  # id
            True,  # isUnqualified
            "sMyStruct",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct)),  # typeinfo
            None,  # default value
        ),
        (
            25,  # id
            True,  # isUnqualified
            "sLong",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i64),  # typeinfo
            None,  # default value
        ),
        (
            26,  # id
            True,  # isUnqualified
            "sString",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            27,  # id
            True,  # isUnqualified
            "sByte",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_byte),  # typeinfo
            None,  # default value
        ),
        (
            28,  # id
            True,  # isUnqualified
            "mListList",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i32), _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i32)),  # typeinfo
            None,  # default value
        ),
    )


class SimpleStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "age",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            60,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "name",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            "Batman",  # default value
        ),
    )


class defaultStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myLongDFset",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            10,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "myLongDF",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "portDFset",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            3456,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "portNum",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "myBinaryDFset",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            b"abc",  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "myBinary",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "myByteDFSet",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            17,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "myByte",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "myDoubleDFset",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            float(99.7678),  # default value
        ),
        (
            10,  # id
            True,  # isUnqualified
            "myDoubleDFZero",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            float(0),  # default value
        ),
        (
            12,  # id
            True,  # isUnqualified
            "myDouble",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
        ),
        (
            13,  # id
            True,  # isUnqualified
            "field3",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            lambda: _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string, {15: "a_value", 2: "b_value"}),  # default value
        ),
        (
            14,  # id
            True,  # isUnqualified
            "myList",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.EnumTypeInfo(MyEnum)),  # typeinfo
            lambda: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.EnumTypeInfo(MyEnum), (MyEnum.MyValue1, MyEnum.MyValue1, MyEnum.MyValue2, )),  # default value
        ),
        (
            15,  # id
            True,  # isUnqualified
            "mySet",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            lambda: _fbthrift_py3lite_types.Set(_fbthrift_py3lite_types.typeinfo_string, ("house", "car", "dog", )),  # default value
        ),
        (
            16,  # id
            True,  # isUnqualified
            "simpleStruct",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(SimpleStruct),  # typeinfo
            lambda: SimpleStruct(age=40, name="John"),  # default value
        ),
        (
            17,  # id
            True,  # isUnqualified
            "listStructDFset",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct)),  # typeinfo
            lambda: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct), (SimpleStruct(age=40, name="IronMan"), SimpleStruct(age=999, name="Thanos"), )),  # default value
        ),
        (
            18,  # id
            True,  # isUnqualified
            "myUnion",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyUnion),  # typeinfo
            lambda: MyUnion(myEnum=MyEnum.MyValue2),  # default value
        ),
        (
            19,  # id
            True,  # isUnqualified
            "listUnionDFset",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyUnion)),  # typeinfo
            lambda: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.StructTypeInfo(MyUnion), (MyUnion(myEnum=MyEnum.MyValue2), MyUnion(intValue=123), )),  # default value
        ),
        (
            20,  # id
            True,  # isUnqualified
            "mapNestlistStructDfSet",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct))),  # typeinfo
            lambda: _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct)), {1: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct), (SimpleStruct(age=40, name="IronMan"), SimpleStruct(age=999, name="Thanos"), )), 2: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct), (SimpleStruct(age=28, name="BatMan"), SimpleStruct(age=12, name="Robin"), )), 5: _fbthrift_py3lite_types.List(_fbthrift_py3lite_types.StructTypeInfo(SimpleStruct), (SimpleStruct(age=12, name="RatMan"), SimpleStruct(age=6, name="Catman"), ))}),  # default value
        ),
        (
            21,  # id
            True,  # isUnqualified
            "mapJavaTypeDFset",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            lambda: _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_string, {15: "a_value", 2: "b_value"}),  # default value
        ),
        (
            22,  # id
            True,  # isUnqualified
            "emptyMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_i32),  # typeinfo
            lambda: _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_i32, {}),  # default value
        ),
        (
            23,  # id
            True,  # isUnqualified
            "enumMapDFset",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.EnumTypeInfo(MyEnum))),  # typeinfo
            lambda: _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.EnumTypeInfo(MyEnum)), {"SANDY BRIDGE": _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.EnumTypeInfo(MyEnum), {16: MyEnum.MyValue1, 144: MyEnum.MyValue1}), "IVY BRIDGE": _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.EnumTypeInfo(MyEnum), {32: MyEnum.MyValue2, 144: MyEnum.MyValue2}), "HASWELL": _fbthrift_py3lite_types.Map(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.EnumTypeInfo(MyEnum), {32: MyEnum.MyValue3, 128: MyEnum.MyValue3, 256: MyEnum.MyValue3})}),  # default value
        ),
    )


class MyStructTypeDef(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myLongField",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "myLongTypeDef",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "myStringField",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "myStringTypedef",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "myMapField",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "myMapTypedef",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "myListField",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_double),  # typeinfo
            None,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "myListTypedef",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_double),  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "myMapListOfTypeDef",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_double))),  # typeinfo
            None,  # default value
        ),
    )


class MyDataItem(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )


class MyUnion(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myEnum",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "myStruct",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "myDataItem",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "complexNestedStruct",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(ComplexNestedStruct),  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "longValue",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "intValue",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
    )


class MyUnionFloatFieldThrowExp(metaclass=_fbthrift_py3lite_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "myEnum",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "setFloat",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_float)),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "myDataItem",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "complexNestedStruct",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(ComplexNestedStruct),  # typeinfo
            None,  # default value
        ),
    )


class ComplexNestedStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "setOfSetOfInt",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i32)),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "listofListOfListOfListOfEnum",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.EnumTypeInfo(MyEnum))))),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "listOfListOfMyStruct",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct))),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "setOfListOfListOfLong",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i64))),  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "setOfSetOfsetOfLong",  # name
            lambda: _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i64))),  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "mapStructListOfListOfLong",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct)))),  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "mKeyStructValInt",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct), _fbthrift_py3lite_types.typeinfo_i32),  # typeinfo
            None,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "listOfMapKeyIntValInt",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_i32)),  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "listOfMapKeyStrValList",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_string, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct)))),  # typeinfo
            None,  # default value
        ),
        (
            10,  # id
            True,  # isUnqualified
            "mapKeySetValLong",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_i32), _fbthrift_py3lite_types.typeinfo_i64),  # typeinfo
            None,  # default value
        ),
        (
            11,  # id
            True,  # isUnqualified
            "mapKeyListValLong",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string), _fbthrift_py3lite_types.typeinfo_i32),  # typeinfo
            None,  # default value
        ),
        (
            12,  # id
            True,  # isUnqualified
            "mapKeyMapValMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string), _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
        ),
        (
            13,  # id
            True,  # isUnqualified
            "mapKeySetValMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i32)), _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_string)), _fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
        ),
        (
            14,  # id
            True,  # isUnqualified
            "NestedMaps",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string), _fbthrift_py3lite_types.typeinfo_string), _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_string)),  # typeinfo
            None,  # default value
        ),
        (
            15,  # id
            True,  # isUnqualified
            "mapKeyIntValList",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.StructTypeInfo(MyStruct))),  # typeinfo
            None,  # default value
        ),
        (
            16,  # id
            True,  # isUnqualified
            "mapKeyIntValSet",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_bool)),  # typeinfo
            None,  # default value
        ),
        (
            17,  # id
            True,  # isUnqualified
            "mapKeySetValInt",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.typeinfo_bool), _fbthrift_py3lite_types.EnumTypeInfo(MyEnum)),  # typeinfo
            None,  # default value
        ),
        (
            18,  # id
            True,  # isUnqualified
            "mapKeyListValSet",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_i32), _fbthrift_py3lite_types.SetTypeInfo(_fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_double, _fbthrift_py3lite_types.typeinfo_string))),  # typeinfo
            None,  # default value
        ),
    )


class TypeRemapped(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "lsMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "ioMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_i64)),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "BigInteger",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "binaryTestBuffer",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
        ),
    )


class emptyXcep(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
    )


class reqXcep(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            False,  # isUnqualified
            "message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            False,  # isUnqualified
            "errorCode",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
    )


class optXcep(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            False,  # isUnqualified
            "message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            False,  # isUnqualified
            "errorCode",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
    )


class complexException(metaclass=_fbthrift_py3lite_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "message",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "listStrings",  # name
            lambda: _fbthrift_py3lite_types.ListTypeInfo(_fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "errorEnum",  # name
            lambda: _fbthrift_py3lite_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            False,  # isUnqualified
            "unionError",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyUnion),  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "structError",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "lsMap",  # name
            lambda: _fbthrift_py3lite_types.MapTypeInfo(_fbthrift_py3lite_types.typeinfo_i64, _fbthrift_py3lite_types.typeinfo_string),  # typeinfo
            None,  # default value
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    MyStructFloatFieldThrowExp,
    MyStructMapFloatThrowExp,
    MyStruct,
    SimpleStruct,
    defaultStruct,
    MyStructTypeDef,
    MyDataItem,
    MyUnion,
    MyUnionFloatFieldThrowExp,
    ComplexNestedStruct,
    TypeRemapped,
    emptyXcep,
    reqXcep,
    optXcep,
    complexException,
)


DEFAULT_PORT_NUM = 3456

constEnumUnion = MyUnion(myEnum=MyEnum.MyValue2)

stringTypedef = str
longTypeDef = int
mapTypedef = _fbthrift_py3lite_types.MapTypeFactory(_fbthrift_py3lite_types.typeinfo_i16, _fbthrift_py3lite_types.typeinfo_string)
listTypedef = _fbthrift_py3lite_types.ListTypeFactory(_fbthrift_py3lite_types.typeinfo_double)
floatTypedef = float
FMap = _fbthrift_py3lite_types.MapTypeFactory(_fbthrift_py3lite_types.typeinfo_i32, _fbthrift_py3lite_types.typeinfo_i64)
