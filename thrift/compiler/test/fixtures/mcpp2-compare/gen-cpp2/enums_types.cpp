/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::facebook::ns::qwerty::AnEnumA>::size;
folly::Range<::facebook::ns::qwerty::AnEnumA const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumA>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumA>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumA>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumA>::names);

char const* TEnumTraits<::facebook::ns::qwerty::AnEnumA>::findName(type value) {
  using factory = ::facebook::ns::qwerty::_AnEnumA_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumA>::findValue(char const* name, type* out) {
  using factory = ::facebook::ns::qwerty::_AnEnumA_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace facebook { namespace ns { namespace qwerty {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnumA_EnumMapFactory::ValuesToNamesMapType _AnEnumA_VALUES_TO_NAMES = _AnEnumA_EnumMapFactory::makeValuesToNamesMap();
const _AnEnumA_EnumMapFactory::NamesToValuesMapType _AnEnumA_NAMES_TO_VALUES = _AnEnumA_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // facebook::ns::qwerty

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::facebook::ns::qwerty::AnEnumB>::size;
folly::Range<::facebook::ns::qwerty::AnEnumB const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumB>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumB>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumB>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumB>::names);

char const* TEnumTraits<::facebook::ns::qwerty::AnEnumB>::findName(type value) {
  using factory = ::facebook::ns::qwerty::_AnEnumB_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumB>::findValue(char const* name, type* out) {
  using factory = ::facebook::ns::qwerty::_AnEnumB_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace facebook { namespace ns { namespace qwerty {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnumB_EnumMapFactory::ValuesToNamesMapType _AnEnumB_VALUES_TO_NAMES = _AnEnumB_EnumMapFactory::makeValuesToNamesMap();
const _AnEnumB_EnumMapFactory::NamesToValuesMapType _AnEnumB_NAMES_TO_VALUES = _AnEnumB_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // facebook::ns::qwerty

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::facebook::ns::qwerty::AnEnumC>::size;
folly::Range<::facebook::ns::qwerty::AnEnumC const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumC>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumC>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumC>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumC>::names);

char const* TEnumTraits<::facebook::ns::qwerty::AnEnumC>::findName(type value) {
  using factory = ::facebook::ns::qwerty::_AnEnumC_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumC>::findValue(char const* name, type* out) {
  using factory = ::facebook::ns::qwerty::_AnEnumC_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace facebook { namespace ns { namespace qwerty {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnumC_EnumMapFactory::ValuesToNamesMapType _AnEnumC_VALUES_TO_NAMES = _AnEnumC_EnumMapFactory::makeValuesToNamesMap();
const _AnEnumC_EnumMapFactory::NamesToValuesMapType _AnEnumC_NAMES_TO_VALUES = _AnEnumC_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // facebook::ns::qwerty

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::facebook::ns::qwerty::AnEnumD>::size;
folly::Range<::facebook::ns::qwerty::AnEnumD const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumD>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumD>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumD>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumD>::names);

char const* TEnumTraits<::facebook::ns::qwerty::AnEnumD>::findName(type value) {
  using factory = ::facebook::ns::qwerty::_AnEnumD_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumD>::findValue(char const* name, type* out) {
  using factory = ::facebook::ns::qwerty::_AnEnumD_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace facebook { namespace ns { namespace qwerty {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnumD_EnumMapFactory::ValuesToNamesMapType _AnEnumD_VALUES_TO_NAMES = _AnEnumD_EnumMapFactory::makeValuesToNamesMap();
const _AnEnumD_EnumMapFactory::NamesToValuesMapType _AnEnumD_NAMES_TO_VALUES = _AnEnumD_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // facebook::ns::qwerty

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::facebook::ns::qwerty::AnEnumE>::size;
folly::Range<::facebook::ns::qwerty::AnEnumE const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumE>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumE>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumE>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumE>::names);

char const* TEnumTraits<::facebook::ns::qwerty::AnEnumE>::findName(type value) {
  using factory = ::facebook::ns::qwerty::_AnEnumE_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumE>::findValue(char const* name, type* out) {
  using factory = ::facebook::ns::qwerty::_AnEnumE_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace facebook { namespace ns { namespace qwerty {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnumE_EnumMapFactory::ValuesToNamesMapType _AnEnumE_VALUES_TO_NAMES = _AnEnumE_EnumMapFactory::makeValuesToNamesMap();
const _AnEnumE_EnumMapFactory::NamesToValuesMapType _AnEnumE_NAMES_TO_VALUES = _AnEnumE_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // facebook::ns::qwerty

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::ns::qwerty::SomeStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::ns::qwerty::SomeStruct>;
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

namespace facebook { namespace ns { namespace qwerty {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SomeStruct::SomeStruct(apache::thrift::FragileConstructor, ::std::int32_t fieldA__arg) :
    fieldA(std::move(fieldA__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void SomeStruct::__clear() {
  // clear all fields
  this->fieldA = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SomeStruct::operator==(const SomeStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return false;
  }
  return true;
}

bool SomeStruct::operator<(const SomeStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  return false;
}


void swap(SomeStruct& a, SomeStruct& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SomeStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SomeStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void SomeStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;



}}} // facebook::ns::qwerty
