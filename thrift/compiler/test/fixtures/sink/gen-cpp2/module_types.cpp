/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::InitialResponse>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "content") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::FinalResponse>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "content") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::SinkPayload>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "content") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::CompatibleWithKeywordSink>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "sink") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::InitialException>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "reason") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::SinkException1>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "reason") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}
void TccStructTraits<::cpp2::SinkException2>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "reason") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I64;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
InitialResponse::InitialResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.content = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void InitialResponse::__clear() {
  // clear all fields
  content = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool InitialResponse::operator==(const InitialResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return false;
  }
  return true;
}

bool InitialResponse::operator<(const InitialResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return lhs.content < rhs.content;
  }
  return false;
}


void swap(InitialResponse& a, InitialResponse& b) {
  using ::std::swap;
  swap(a.content, b.content);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void InitialResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
FinalResponse::FinalResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.content = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void FinalResponse::__clear() {
  // clear all fields
  content = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool FinalResponse::operator==(const FinalResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return false;
  }
  return true;
}

bool FinalResponse::operator<(const FinalResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return lhs.content < rhs.content;
  }
  return false;
}


void swap(FinalResponse& a, FinalResponse& b) {
  using ::std::swap;
  swap(a.content, b.content);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void FinalResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FinalResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SinkPayload::SinkPayload(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.content = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void SinkPayload::__clear() {
  // clear all fields
  content = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SinkPayload::operator==(const SinkPayload& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return false;
  }
  return true;
}

bool SinkPayload::operator<(const SinkPayload& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content == rhs.content)) {
    return lhs.content < rhs.content;
  }
  return false;
}


void swap(SinkPayload& a, SinkPayload& b) {
  using ::std::swap;
  swap(a.content, b.content);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SinkPayload::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkPayload::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
CompatibleWithKeywordSink::CompatibleWithKeywordSink(apache::thrift::FragileConstructor, ::std::string sink__arg) :
    sink(std::move(sink__arg)) {
  __isset.sink = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void CompatibleWithKeywordSink::__clear() {
  // clear all fields
  sink = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool CompatibleWithKeywordSink::operator==(const CompatibleWithKeywordSink& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.sink == rhs.sink)) {
    return false;
  }
  return true;
}

bool CompatibleWithKeywordSink::operator<(const CompatibleWithKeywordSink& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.sink == rhs.sink)) {
    return lhs.sink < rhs.sink;
  }
  return false;
}


void swap(CompatibleWithKeywordSink& a, CompatibleWithKeywordSink& b) {
  using ::std::swap;
  swap(a.sink, b.sink);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
InitialException::InitialException(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.reason = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void InitialException::__clear() {
  // clear all fields
  reason = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool InitialException::operator==(const InitialException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return false;
  }
  return true;
}

bool InitialException::operator<(const InitialException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return lhs.reason < rhs.reason;
  }
  return false;
}


void swap(InitialException& a, InitialException& b) {
  using ::std::swap;
  swap(a.reason, b.reason);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void InitialException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SinkException1::SinkException1(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.reason = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void SinkException1::__clear() {
  // clear all fields
  reason = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SinkException1::operator==(const SinkException1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return false;
  }
  return true;
}

bool SinkException1::operator<(const SinkException1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return lhs.reason < rhs.reason;
  }
  return false;
}


void swap(SinkException1& a, SinkException1& b) {
  using ::std::swap;
  swap(a.reason, b.reason);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SinkException1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SinkException2::SinkException2(apache::thrift::FragileConstructor, int64_t reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.reason = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void SinkException2::__clear() {
  // clear all fields
  reason = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SinkException2::operator==(const SinkException2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return false;
  }
  return true;
}

bool SinkException2::operator<(const SinkException2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason == rhs.reason)) {
    return lhs.reason < rhs.reason;
  }
  return false;
}


void swap(SinkException2& a, SinkException2& b) {
  using ::std::swap;
  swap(a.reason, b.reason);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SinkException2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2

namespace cpp2 {
//  enforce that if this thrift file is generated with extern template instances
//  for simple-json protocol then all its dependencies are too

//  if this struct is generated with extern template instances for nimble
//  protocol, enforce that all its dependencies are too

} // cpp2
