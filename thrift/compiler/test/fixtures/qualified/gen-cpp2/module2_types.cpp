/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::module2::Struct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::module2::Struct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace module2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Struct::Struct(const Struct&) = default;
Struct& Struct::operator=(const Struct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Struct::Struct(Struct&& other) noexcept  :
    first(std::move(other.first)),
    second(std::move(other.second)),
    __isset(other.__isset) {}
Struct& Struct::operator=(FOLLY_MAYBE_UNUSED Struct&& other) noexcept {
    this->first = std::move(other.first);
    this->second = std::move(other.second);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Struct::Struct(apache::thrift::FragileConstructor, ::module0::Struct first__arg, ::module1::Struct second__arg) :
    first(std::move(first__arg)),
    second(std::move(second__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void Struct::__clear() {
  // clear all fields
  this->first.__clear();
  this->second.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Struct::operator==(const Struct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first_ref() == rhs.first_ref())) {
    return false;
  }
  if (!(lhs.second_ref() == rhs.second_ref())) {
    return false;
  }
  return true;
}

bool Struct::operator<(const Struct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first_ref() == rhs.first_ref())) {
    return lhs.first_ref() < rhs.first_ref();
  }
  if (!(lhs.second_ref() == rhs.second_ref())) {
    return lhs.second_ref() < rhs.second_ref();
  }
  return false;
}

const ::module0::Struct& Struct::get_first() const& {
  return first;
}

::module0::Struct Struct::get_first() && {
  return std::move(first);
}

const ::module1::Struct& Struct::get_second() const& {
  return second;
}

::module1::Struct Struct::get_second() && {
  return std::move(second);
}


void swap(Struct& a, Struct& b) {
  using ::std::swap;
  swap(a.first_ref().value(), b.first_ref().value());
  swap(a.second_ref().value(), b.second_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Struct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Struct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Struct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Struct,
        ::apache::thrift::type_class::structure,
        ::module0::Struct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Struct,
        ::apache::thrift::type_class::structure,
        ::module1::Struct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Struct,
        ::apache::thrift::type_class::structure,
        ::module0::Struct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Struct,
        ::apache::thrift::type_class::structure,
        ::module1::Struct>,
    "inconsistent use of nimble option");

} // module2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::module2::BigStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::module2::BigStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace module2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
BigStruct::BigStruct(const BigStruct&) = default;
BigStruct& BigStruct::operator=(const BigStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
BigStruct::BigStruct(BigStruct&& other) noexcept  :
    s(std::move(other.s)),
    id(std::move(other.id)),
    __isset(other.__isset) {}
BigStruct& BigStruct::operator=(FOLLY_MAYBE_UNUSED BigStruct&& other) noexcept {
    this->s = std::move(other.s);
    this->id = std::move(other.id);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
BigStruct::BigStruct(apache::thrift::FragileConstructor, ::module2::Struct s__arg, ::std::int32_t id__arg) :
    s(std::move(s__arg)),
    id(std::move(id__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void BigStruct::__clear() {
  // clear all fields
  this->s.__clear();
  this->id = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool BigStruct::operator==(const BigStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.s_ref() == rhs.s_ref())) {
    return false;
  }
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return false;
  }
  return true;
}

bool BigStruct::operator<(const BigStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.s_ref() == rhs.s_ref())) {
    return lhs.s_ref() < rhs.s_ref();
  }
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return lhs.id_ref() < rhs.id_ref();
  }
  return false;
}

const ::module2::Struct& BigStruct::get_s() const& {
  return s;
}

::module2::Struct BigStruct::get_s() && {
  return std::move(s);
}


void swap(BigStruct& a, BigStruct& b) {
  using ::std::swap;
  swap(a.s_ref().value(), b.s_ref().value());
  swap(a.id_ref().value(), b.id_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void BigStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BigStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BigStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BigStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BigStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BigStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BigStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        BigStruct,
        ::apache::thrift::type_class::structure,
        ::module2::Struct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        BigStruct,
        ::apache::thrift::type_class::structure,
        ::module2::Struct>,
    "inconsistent use of nimble option");

} // module2
