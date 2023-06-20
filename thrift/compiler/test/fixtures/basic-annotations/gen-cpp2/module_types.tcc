/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::MyStructNestedAnnotation> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::detail::YourUnion> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::detail::YourException> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::detail::YourStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::SecretStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void MyStructNestedAnnotation::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_name, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStructNestedAnnotation>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStructNestedAnnotation::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStructNestedAnnotation");
  {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_name);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStructNestedAnnotation::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStructNestedAnnotation");
  {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_name);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStructNestedAnnotation::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStructNestedAnnotation");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "name", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_name);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

namespace detail {

template <class Protocol_>
void YourUnion::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;
  _readState.fieldId = 0;

  _readState.readStructBegin(iprot);

  _readState.readFieldBegin(iprot);
  if (_readState.atStop()) {
    apache::thrift::clear(*this);
  } else {
    if (iprot->kUsesFieldNames()) {
      _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<YourUnion>>();
    }
    switch (_readState.fieldId) {
      default:
      {
        _readState.skip(iprot);
        break;
      }
    }
    _readState.readFieldEnd(iprot);
    _readState.readFieldBegin(iprot);
    if (UNLIKELY(!_readState.atStop())) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  _readState.readStructEnd(iprot);
}
template <class Protocol_>
uint32_t YourUnion::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case YourUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourUnion::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case YourUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyUnion");
  switch(this->getType()) {
    case YourUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void YourUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t YourUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t YourUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t YourUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void YourUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t YourUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t YourUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t YourUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
} // namespace detail

namespace detail {

template <class Protocol_>
void YourException::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<YourException>>();
  }

  switch (_readState.fieldId) {
    default:
    {
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t YourException::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyException");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourException::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyException");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourException::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyException");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void YourException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t YourException::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t YourException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t YourException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void YourException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t YourException::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t YourException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t YourException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
} // namespace detail

namespace detail {

template <class Protocol_>
void YourStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          2,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_majorVer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::readWithContext(*iprot, this->__fbthrift_field_majorVer, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_package:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_package, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          3,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_annotation_with_quote:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_annotation_with_quote, _readState);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_class_:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_class_, _readState);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_annotation_with_trailing_comma:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_annotation_with_trailing_comma, _readState);
    
  }
 this->__isset.set(4, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_empty_annotations:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_empty_annotations, _readState);
    
  }
 this->__isset.set(5, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          7,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_my_enum:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::cpp2::YourEnum>::readWithContext(*iprot, this->__fbthrift_field_my_enum, _readState);
    
  }
 this->__isset.set(6, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          7,
          8,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_cpp_type_annotation:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_cpp_type_annotation = std::deque<std::string>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::string>, std::deque<std::string>>::readWithContext(*iprot, this->__fbthrift_field_cpp_type_annotation, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(7, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          8,
          9,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_my_union:
  {
    _readState.beforeSubobject(iprot);
    if constexpr(::apache::thrift::adapt_detail::has_inplace_toThrift<::StaticCast, ::cpp2::YourUnion>::value) {
      ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::variant, ::cpp2::detail::YourUnion>::readWithContext(*iprot, ::StaticCast::toThrift(this->__fbthrift_field_my_union), _readState);
    } else {
      ::cpp2::detail::YourUnion tvalue;
      ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::variant, ::cpp2::detail::YourUnion>::readWithContext(*iprot, tvalue, _readState);
      this->__fbthrift_field_my_union = ::apache::thrift::adapt_detail::fromThriftField<::StaticCast, 9>(::std::move(tvalue), *this);
    }
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(8, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          9,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<YourStruct>>();
  }

  switch (_readState.fieldId) {
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_majorVer;
      } else {
        goto _skip;
      }
    }
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_package;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_annotation_with_quote;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_class_;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_annotation_with_trailing_comma;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_empty_annotations;
      } else {
        goto _skip;
      }
    }
    case 7:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_my_enum;
      } else {
        goto _skip;
      }
    }
    case 8:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_cpp_type_annotation;
      } else {
        goto _skip;
      }
    }
    case 9:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_my_union;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t YourStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("major", apache::thrift::protocol::T_I64, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_majorVer);
  }
  {
    xfer += prot_->serializedFieldSize("package", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_package);
  }
  {
    xfer += prot_->serializedFieldSize("annotation_with_quote", apache::thrift::protocol::T_STRING, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_annotation_with_quote);
  }
  {
    xfer += prot_->serializedFieldSize("class_", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_class_);
  }
  {
    xfer += prot_->serializedFieldSize("annotation_with_trailing_comma", apache::thrift::protocol::T_STRING, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_annotation_with_trailing_comma);
  }
  {
    xfer += prot_->serializedFieldSize("empty_annotations", apache::thrift::protocol::T_STRING, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_empty_annotations);
  }
  {
    xfer += prot_->serializedFieldSize("my_enum", apache::thrift::protocol::T_I32, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::cpp2::YourEnum>::serializedSize<false>(*prot_, this->__fbthrift_field_my_enum);
  }
  {
    xfer += prot_->serializedFieldSize("cpp_type_annotation", apache::thrift::protocol::T_LIST, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::string>, std::deque<std::string>>::serializedSize<false>(*prot_, this->__fbthrift_field_cpp_type_annotation);
  }
  {
    xfer += prot_->serializedFieldSize("my_union", apache::thrift::protocol::T_STRUCT, 9);
    xfer += ::apache::thrift::adapt_detail::serializedSize<false, ::StaticCast>(*prot_, this->__fbthrift_field_my_union, [&] {return ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::variant, ::cpp2::detail::YourUnion>::serializedSize<false>(*prot_, ::StaticCast::toThrift(this->__fbthrift_field_my_union));});
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("major", apache::thrift::protocol::T_I64, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_majorVer);
  }
  {
    xfer += prot_->serializedFieldSize("package", apache::thrift::protocol::T_STRING, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_package);
  }
  {
    xfer += prot_->serializedFieldSize("annotation_with_quote", apache::thrift::protocol::T_STRING, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_annotation_with_quote);
  }
  {
    xfer += prot_->serializedFieldSize("class_", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_class_);
  }
  {
    xfer += prot_->serializedFieldSize("annotation_with_trailing_comma", apache::thrift::protocol::T_STRING, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_annotation_with_trailing_comma);
  }
  {
    xfer += prot_->serializedFieldSize("empty_annotations", apache::thrift::protocol::T_STRING, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_empty_annotations);
  }
  {
    xfer += prot_->serializedFieldSize("my_enum", apache::thrift::protocol::T_I32, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::cpp2::YourEnum>::serializedSize<false>(*prot_, this->__fbthrift_field_my_enum);
  }
  {
    xfer += prot_->serializedFieldSize("cpp_type_annotation", apache::thrift::protocol::T_LIST, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::string>, std::deque<std::string>>::serializedSize<false>(*prot_, this->__fbthrift_field_cpp_type_annotation);
  }
  {
    xfer += prot_->serializedFieldSize("my_union", apache::thrift::protocol::T_STRUCT, 9);
    xfer += ::apache::thrift::adapt_detail::serializedSize<true, ::StaticCast>(*prot_, this->__fbthrift_field_my_union, [&] {return ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::variant, ::cpp2::detail::YourUnion>::serializedSize<true>(*prot_, ::StaticCast::toThrift(this->__fbthrift_field_my_union));});
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t YourStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I64, 2, kPrevFieldId>(*prot_, "major", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::write(*prot_, this->__fbthrift_field_majorVer);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 1, kPrevFieldId>(*prot_, "package", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_package);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 3, kPrevFieldId>(*prot_, "annotation_with_quote", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_annotation_with_quote);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 4, kPrevFieldId>(*prot_, "class_", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_class_);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 5, kPrevFieldId>(*prot_, "annotation_with_trailing_comma", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_annotation_with_trailing_comma);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 6, kPrevFieldId>(*prot_, "empty_annotations", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_empty_annotations);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 6;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 7, kPrevFieldId>(*prot_, "my_enum", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::cpp2::YourEnum>::write(*prot_, this->__fbthrift_field_my_enum);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 7;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_LIST, 8, kPrevFieldId>(*prot_, "cpp_type_annotation", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::string>, std::deque<std::string>>::write(*prot_, this->__fbthrift_field_cpp_type_annotation);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 8;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 9, kPrevFieldId>(*prot_, "my_union", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::variant, ::cpp2::detail::YourUnion>::write(*prot_, ::StaticCast::toThrift(this->__fbthrift_field_my_union));
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void YourStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t YourStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t YourStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t YourStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void YourStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t YourStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t YourStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t YourStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
} // namespace detail


template <class Protocol_>
void SecretStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_id:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::readWithContext(*iprot, this->__fbthrift_field_id, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_password:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_password, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<SecretStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_id;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_password;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t SecretStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SecretStruct");
  {
    xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_id);
  }
  {
    xfer += prot_->serializedFieldSize("password", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_password);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SecretStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SecretStruct");
  {
    xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_id);
  }
  {
    xfer += prot_->serializedFieldSize("password", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_password);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SecretStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SecretStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I64, 1, kPrevFieldId>(*prot_, "id", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::write(*prot_, this->__fbthrift_field_id);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "password", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_password);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void SecretStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t SecretStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t SecretStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void SecretStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t SecretStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t SecretStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2
