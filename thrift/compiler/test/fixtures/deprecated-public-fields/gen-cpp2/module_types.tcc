/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/deprecated-public-fields/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::Foo> {
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
void Foo::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_bar:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->bar, _readState);
    
  }
 this->__isset.__fbthrift_set(folly::index_constant<0>(), true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }
  THRIFT_IGNORE_ISSET_USE_WARNING_END

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_bar;
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
uint32_t Foo::serializedSize(Protocol_ const* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  if (this->__isset.__fbthrift_get(folly::index_constant<0>())) {
    xfer += prot_->serializedFieldSize("bar", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->bar);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template <class Protocol_>
uint32_t Foo::serializedSizeZC(Protocol_ const* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  if (this->__isset.__fbthrift_get(folly::index_constant<0>())) {
    xfer += prot_->serializedFieldSize("bar", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->bar);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template <class Protocol_>
uint32_t Foo::write(Protocol_* prot_) const {
  THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo");
  bool previousFieldHasValue = true;
  if (this->__isset.__fbthrift_get(folly::index_constant<0>())) {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "bar", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->bar);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
  THRIFT_IGNORE_ISSET_USE_WARNING_END
}

extern template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
