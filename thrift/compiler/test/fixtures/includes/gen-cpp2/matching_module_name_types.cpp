/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/matching_module_name_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::matching_module_name::MyStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "OtherStructField") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace matching_module_name {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor,  ::matching_module_name::OtherStruct OtherStructField__arg) :
    OtherStructField(std::move(OtherStructField__arg)) {
  __isset.OtherStructField = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyStruct::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::matching_module_name::OtherStruct>::clear(&OtherStructField);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.OtherStructField == rhs.OtherStructField)) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.OtherStructField == rhs.OtherStructField)) {
    return lhs.OtherStructField < rhs.OtherStructField;
  }
  return false;
}

const  ::matching_module_name::OtherStruct& MyStruct::get_OtherStructField() const& {
  return OtherStructField;
}

 ::matching_module_name::OtherStruct MyStruct::get_OtherStructField() && {
  return std::move(OtherStructField);
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.OtherStructField, b.OtherStructField);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // matching_module_name

namespace matching_module_name {
//  enforce that if this thrift file is generated with extern template instances
//  for simple-json protocol then all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
         ::matching_module_name::OtherStruct>,
    "inconsistent use of json option");

//  if this struct is generated with extern template instances for nimble
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyStruct,
        ::apache::thrift::type_class::structure,
         ::matching_module_name::OtherStruct>,
    "inconsistent use of nimble option");

} // matching_module_name
