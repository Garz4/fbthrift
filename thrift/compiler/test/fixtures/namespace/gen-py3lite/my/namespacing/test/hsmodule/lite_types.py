#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.py3lite.types as _fbthrift_py3lite_types
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions


class HsFoo(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "MyInt",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    HsFoo,
)


class _fbthrift_HsTestService_init_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "int1",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
    )

class _fbthrift_HsTestService_init_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            False,  # isUnqualified
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value

        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_HsTestService_init_args,
    _fbthrift_HsTestService_init_result,
)
