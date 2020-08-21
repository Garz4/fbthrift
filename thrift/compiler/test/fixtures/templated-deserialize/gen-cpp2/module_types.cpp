/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnumA>::size;
folly::Range<::cpp2::MyEnumA const*> const TEnumTraits<::cpp2::MyEnumA>::values = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnumA>::names = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::names);

char const* TEnumTraits<::cpp2::MyEnumA>::findName(type value) {
  using factory = ::cpp2::_MyEnumA_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyEnumA>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_MyEnumA_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnumA_EnumMapFactory::ValuesToNamesMapType _MyEnumA_VALUES_TO_NAMES = _MyEnumA_EnumMapFactory::makeValuesToNamesMap();
const _MyEnumA_EnumMapFactory::NamesToValuesMapType _MyEnumA_NAMES_TO_VALUES = _MyEnumA_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SmallStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "small_A") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "small_B") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}
void TccStructTraits<::cpp2::containerStruct>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "fieldA") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "fieldB") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldC") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "fieldD") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "fieldE") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "fieldF") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldG") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldH") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldI") {
    fid = 9;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "fieldJ") {
    fid = 10;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldK") {
    fid = 11;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldL") {
    fid = 12;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "fieldM") {
    fid = 13;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldN") {
    fid = 14;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldO") {
    fid = 15;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldP") {
    fid = 16;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldQ") {
    fid = 17;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "fieldR") {
    fid = 18;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldS") {
    fid = 19;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldT") {
    fid = 20;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldU") {
    fid = 21;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "fieldX") {
    fid = 23;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SmallStruct::SmallStruct(apache::thrift::FragileConstructor, bool small_A__arg, int32_t small_B__arg) :
    small_A(std::move(small_A__arg)),
    small_B(std::move(small_B__arg)) {
  __isset.small_A = true;
  __isset.small_B = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void SmallStruct::__clear() {
  // clear all fields
  small_A = 0;
  small_B = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SmallStruct::operator==(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A == rhs.small_A)) {
    return false;
  }
  if (!(lhs.small_B == rhs.small_B)) {
    return false;
  }
  return true;
}

bool SmallStruct::operator<(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A == rhs.small_A)) {
    return lhs.small_A < rhs.small_A;
  }
  if (!(lhs.small_B == rhs.small_B)) {
    return lhs.small_B < rhs.small_B;
  }
  return false;
}


void swap(SmallStruct& a, SmallStruct& b) {
  using ::std::swap;
  swap(a.small_A, b.small_A);
  swap(a.small_B, b.small_B);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SmallStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SmallStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

containerStruct::containerStruct(const containerStruct& srcObj) {
  fieldA = srcObj.fieldA;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldA = srcObj.__isset.fieldA;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldB = srcObj.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldB = srcObj.__isset.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldC = srcObj.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldC = srcObj.__isset.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldD = srcObj.fieldD;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldD = srcObj.__isset.fieldD;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldE = srcObj.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldE = srcObj.__isset.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldF = srcObj.fieldF;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldF = srcObj.__isset.fieldF;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldG = srcObj.fieldG;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldG = srcObj.__isset.fieldG;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldH = srcObj.fieldH;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldH = srcObj.__isset.fieldH;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldI = srcObj.fieldI;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldI = srcObj.__isset.fieldI;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldJ = srcObj.fieldJ;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldJ = srcObj.__isset.fieldJ;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldK = srcObj.fieldK;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldK = srcObj.__isset.fieldK;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldL = srcObj.fieldL;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldL = srcObj.__isset.fieldL;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldM = srcObj.fieldM;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldM = srcObj.__isset.fieldM;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldN = srcObj.fieldN;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldN = srcObj.__isset.fieldN;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldO = srcObj.fieldO;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldO = srcObj.__isset.fieldO;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldP = srcObj.fieldP;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldP = srcObj.__isset.fieldP;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldQ = srcObj.fieldQ;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldQ = srcObj.__isset.fieldQ;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  if (srcObj.fieldR) fieldR.reset(new ::std::map<::std::string, bool>(*srcObj.fieldR));
  if (srcObj.fieldS) fieldS.reset(new  ::cpp2::SmallStruct(*srcObj.fieldS));
  fieldT = srcObj.fieldT;
  fieldU = srcObj.fieldU;
  if (srcObj.fieldX) fieldX.reset(new  ::cpp2::SmallStruct(*srcObj.fieldX));
}

containerStruct& containerStruct::operator=(const containerStruct& src) {
  containerStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct::containerStruct() :
      fieldA(0),
      fieldC(std::initializer_list<int32_t>{1,
  2,
  3,
  4}),
      fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")),
      fieldI(true),
      fieldJ(std::initializer_list<std::pair<const ::std::string, ::std::vector<int32_t>>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldA"), std::initializer_list<int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldB"), std::initializer_list<int32_t>{2,
  5,
  9,
  13}}}),
      fieldQ(static_cast< ::cpp2::MyEnumA>(0)),
      fieldR(std::make_unique<::std::map<::std::string, bool>>()),
      fieldS(std::make_unique< ::cpp2::SmallStruct>()),
      fieldT(std::make_shared< ::cpp2::SmallStruct>()),
      fieldU(std::make_shared< ::cpp2::SmallStruct>()),
      fieldX(std::make_unique< ::cpp2::SmallStruct>()) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


containerStruct::~containerStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct::containerStruct(apache::thrift::FragileConstructor, bool fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::set<int32_t> fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::vector<::std::vector<::std::vector<int32_t>>> fieldF__arg, ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, int32_t>>> fieldG__arg, ::std::vector<::std::set<int32_t>> fieldH__arg, bool fieldI__arg, ::std::map<::std::string, ::std::vector<int32_t>> fieldJ__arg, ::std::vector<::std::vector<::std::vector<::std::vector<int32_t>>>> fieldK__arg, ::std::set<::std::set<::std::set<bool>>> fieldL__arg, ::std::map<::std::set<::std::vector<int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> fieldM__arg, ::std::vector< ::cpp2::IndirectionA> fieldN__arg, ::std::vector< ::cpp2::IndirectionB> fieldO__arg, ::std::vector< ::cpp2::IndirectionC> fieldP__arg,  ::cpp2::MyEnumA fieldQ__arg, std::unique_ptr<::std::map<::std::string, bool>> fieldR__arg, std::unique_ptr< ::cpp2::SmallStruct> fieldS__arg, std::shared_ptr< ::cpp2::SmallStruct> fieldT__arg, std::shared_ptr<const  ::cpp2::SmallStruct> fieldU__arg, std::unique_ptr< ::cpp2::SmallStruct> fieldX__arg) :
    fieldA(std::move(fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)),
    fieldF(std::move(fieldF__arg)),
    fieldG(std::move(fieldG__arg)),
    fieldH(std::move(fieldH__arg)),
    fieldI(std::move(fieldI__arg)),
    fieldJ(std::move(fieldJ__arg)),
    fieldK(std::move(fieldK__arg)),
    fieldL(std::move(fieldL__arg)),
    fieldM(std::move(fieldM__arg)),
    fieldN(std::move(fieldN__arg)),
    fieldO(std::move(fieldO__arg)),
    fieldP(std::move(fieldP__arg)),
    fieldQ(std::move(fieldQ__arg)),
    fieldR(std::move(fieldR__arg)),
    fieldS(std::move(fieldS__arg)),
    fieldT(std::move(fieldT__arg)),
    fieldU(std::move(fieldU__arg)),
    fieldX(std::move(fieldX__arg)) {
  __isset.fieldA = true;
  __isset.fieldB = true;
  __isset.fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
  __isset.fieldF = true;
  __isset.fieldG = true;
  __isset.fieldH = true;
  __isset.fieldI = true;
  __isset.fieldJ = true;
  __isset.fieldK = true;
  __isset.fieldL = true;
  __isset.fieldM = true;
  __isset.fieldN = true;
  __isset.fieldO = true;
  __isset.fieldP = true;
  __isset.fieldQ = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void containerStruct::__clear() {
  // clear all fields
  fieldA = 0;
  fieldB.clear();
  fieldC.clear();
  fieldD = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
  fieldF.clear();
  fieldG.clear();
  fieldH.clear();
  fieldI = true;
  fieldJ.clear();
  fieldK.clear();
  fieldL.clear();
  fieldM.clear();
  fieldN.clear();
  fieldO.clear();
  fieldP.clear();
  fieldQ = static_cast< ::cpp2::MyEnumA>(0);
  fieldR.reset(new typename decltype(fieldR)::element_type());
  if (fieldS) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldS.get());
  if (fieldT) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldT.get());
  if (fieldU) fieldU.reset(new typename decltype(fieldU)::element_type());
  if (fieldX) ::apache::thrift::Cpp2Ops<  ::cpp2::SmallStruct>::clear(fieldX.get());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return false;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return false;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return false;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return false;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return false;
  }
  if (!(lhs.fieldF == rhs.fieldF)) {
    return false;
  }
  if (!(lhs.fieldG == rhs.fieldG)) {
    return false;
  }
  if (!(lhs.fieldH == rhs.fieldH)) {
    return false;
  }
  if (!(lhs.fieldI == rhs.fieldI)) {
    return false;
  }
  if (!(lhs.fieldJ == rhs.fieldJ)) {
    return false;
  }
  if (!(lhs.fieldK == rhs.fieldK)) {
    return false;
  }
  if (!(lhs.fieldL == rhs.fieldL)) {
    return false;
  }
  if (!(lhs.fieldM == rhs.fieldM)) {
    return false;
  }
  if (!(lhs.fieldN == rhs.fieldN)) {
    return false;
  }
  if (!(lhs.fieldO == rhs.fieldO)) {
    return false;
  }
  if (!(lhs.fieldP == rhs.fieldP)) {
    return false;
  }
  if (!(lhs.fieldQ == rhs.fieldQ)) {
    return false;
  }
  if (!!lhs.fieldR != !!rhs.fieldR) {
    return false;
  }
  if (!!lhs.fieldR) {
    if (lhs.fieldR != rhs.fieldR && !(*lhs.fieldR == *rhs.fieldR)) {
      return false;
    }
  }
  if (!!lhs.fieldS != !!rhs.fieldS) {
    return false;
  }
  if (!!lhs.fieldS) {
    if (lhs.fieldS != rhs.fieldS && !(*lhs.fieldS == *rhs.fieldS)) {
      return false;
    }
  }
  if (!!lhs.fieldT != !!rhs.fieldT) {
    return false;
  }
  if (!!lhs.fieldT) {
    if (lhs.fieldT != rhs.fieldT && !(*lhs.fieldT == *rhs.fieldT)) {
      return false;
    }
  }
  if (!!lhs.fieldU != !!rhs.fieldU) {
    return false;
  }
  if (!!lhs.fieldU) {
    if (lhs.fieldU != rhs.fieldU && !(*lhs.fieldU == *rhs.fieldU)) {
      return false;
    }
  }
  if (!!lhs.fieldX != !!rhs.fieldX) {
    return false;
  }
  if (!!lhs.fieldX) {
    if (lhs.fieldX != rhs.fieldX && !(*lhs.fieldX == *rhs.fieldX)) {
      return false;
    }
  }
  return true;
}

bool containerStruct::operator<(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return lhs.fieldA < rhs.fieldA;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return lhs.fieldB < rhs.fieldB;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return lhs.fieldC < rhs.fieldC;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return lhs.fieldD < rhs.fieldD;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return lhs.fieldE < rhs.fieldE;
  }
  if (!(lhs.fieldF == rhs.fieldF)) {
    return lhs.fieldF < rhs.fieldF;
  }
  if (!(lhs.fieldG == rhs.fieldG)) {
    return lhs.fieldG < rhs.fieldG;
  }
  if (!(lhs.fieldH == rhs.fieldH)) {
    return lhs.fieldH < rhs.fieldH;
  }
  if (!(lhs.fieldI == rhs.fieldI)) {
    return lhs.fieldI < rhs.fieldI;
  }
  if (!(lhs.fieldJ == rhs.fieldJ)) {
    return lhs.fieldJ < rhs.fieldJ;
  }
  if (!(lhs.fieldK == rhs.fieldK)) {
    return lhs.fieldK < rhs.fieldK;
  }
  if (!(lhs.fieldL == rhs.fieldL)) {
    return lhs.fieldL < rhs.fieldL;
  }
  if (!(lhs.fieldM == rhs.fieldM)) {
    return lhs.fieldM < rhs.fieldM;
  }
  if (!(lhs.fieldN == rhs.fieldN)) {
    return lhs.fieldN < rhs.fieldN;
  }
  if (!(lhs.fieldO == rhs.fieldO)) {
    return lhs.fieldO < rhs.fieldO;
  }
  if (!(lhs.fieldP == rhs.fieldP)) {
    return lhs.fieldP < rhs.fieldP;
  }
  if (!(lhs.fieldQ == rhs.fieldQ)) {
    return lhs.fieldQ < rhs.fieldQ;
  }
  if (!!lhs.fieldR != !!rhs.fieldR) {
    return !!lhs.fieldR < !!rhs.fieldR;
  }
  if (!!lhs.fieldR) {
    if (lhs.fieldR != rhs.fieldR && !(*lhs.fieldR == *rhs.fieldR)) {
      return *lhs.fieldR < *rhs.fieldR;
    }
  }
  if (!!lhs.fieldS != !!rhs.fieldS) {
    return !!lhs.fieldS < !!rhs.fieldS;
  }
  if (!!lhs.fieldS) {
    if (lhs.fieldS != rhs.fieldS && !(*lhs.fieldS == *rhs.fieldS)) {
      return *lhs.fieldS < *rhs.fieldS;
    }
  }
  if (!!lhs.fieldT != !!rhs.fieldT) {
    return !!lhs.fieldT < !!rhs.fieldT;
  }
  if (!!lhs.fieldT) {
    if (lhs.fieldT != rhs.fieldT && !(*lhs.fieldT == *rhs.fieldT)) {
      return *lhs.fieldT < *rhs.fieldT;
    }
  }
  if (!!lhs.fieldU != !!rhs.fieldU) {
    return !!lhs.fieldU < !!rhs.fieldU;
  }
  if (!!lhs.fieldU) {
    if (lhs.fieldU != rhs.fieldU && !(*lhs.fieldU == *rhs.fieldU)) {
      return *lhs.fieldU < *rhs.fieldU;
    }
  }
  if (!!lhs.fieldX != !!rhs.fieldX) {
    return !!lhs.fieldX < !!rhs.fieldX;
  }
  if (!!lhs.fieldX) {
    if (lhs.fieldX != rhs.fieldX && !(*lhs.fieldX == *rhs.fieldX)) {
      return *lhs.fieldX < *rhs.fieldX;
    }
  }
  return false;
}

const ::std::map<::std::string, bool>& containerStruct::get_fieldB() const& {
  return fieldB;
}

::std::map<::std::string, bool> containerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const ::std::set<int32_t>& containerStruct::get_fieldC() const& {
  return fieldC;
}

::std::set<int32_t> containerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const ::std::vector<::std::vector<::std::vector<int32_t>>>& containerStruct::get_fieldF() const& {
  return fieldF;
}

::std::vector<::std::vector<::std::vector<int32_t>>> containerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, int32_t>>>& containerStruct::get_fieldG() const& {
  return fieldG;
}

::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, int32_t>>> containerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const ::std::vector<::std::set<int32_t>>& containerStruct::get_fieldH() const& {
  return fieldH;
}

::std::vector<::std::set<int32_t>> containerStruct::get_fieldH() && {
  return std::move(fieldH);
}

const ::std::map<::std::string, ::std::vector<int32_t>>& containerStruct::get_fieldJ() const& {
  return fieldJ;
}

::std::map<::std::string, ::std::vector<int32_t>> containerStruct::get_fieldJ() && {
  return std::move(fieldJ);
}

const ::std::vector<::std::vector<::std::vector<::std::vector<int32_t>>>>& containerStruct::get_fieldK() const& {
  return fieldK;
}

::std::vector<::std::vector<::std::vector<::std::vector<int32_t>>>> containerStruct::get_fieldK() && {
  return std::move(fieldK);
}

const ::std::set<::std::set<::std::set<bool>>>& containerStruct::get_fieldL() const& {
  return fieldL;
}

::std::set<::std::set<::std::set<bool>>> containerStruct::get_fieldL() && {
  return std::move(fieldL);
}

const ::std::map<::std::set<::std::vector<int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>>& containerStruct::get_fieldM() const& {
  return fieldM;
}

::std::map<::std::set<::std::vector<int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> containerStruct::get_fieldM() && {
  return std::move(fieldM);
}

const ::std::vector< ::cpp2::IndirectionA>& containerStruct::get_fieldN() const& {
  return fieldN;
}

::std::vector< ::cpp2::IndirectionA> containerStruct::get_fieldN() && {
  return std::move(fieldN);
}

const ::std::vector< ::cpp2::IndirectionB>& containerStruct::get_fieldO() const& {
  return fieldO;
}

::std::vector< ::cpp2::IndirectionB> containerStruct::get_fieldO() && {
  return std::move(fieldO);
}

const ::std::vector< ::cpp2::IndirectionC>& containerStruct::get_fieldP() const& {
  return fieldP;
}

::std::vector< ::cpp2::IndirectionC> containerStruct::get_fieldP() && {
  return std::move(fieldP);
}


void swap(containerStruct& a, containerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.fieldD, b.fieldD);
  swap(a.fieldE, b.fieldE);
  swap(a.fieldF, b.fieldF);
  swap(a.fieldG, b.fieldG);
  swap(a.fieldH, b.fieldH);
  swap(a.fieldI, b.fieldI);
  swap(a.fieldJ, b.fieldJ);
  swap(a.fieldK, b.fieldK);
  swap(a.fieldL, b.fieldL);
  swap(a.fieldM, b.fieldM);
  swap(a.fieldN, b.fieldN);
  swap(a.fieldO, b.fieldO);
  swap(a.fieldP, b.fieldP);
  swap(a.fieldQ, b.fieldQ);
  swap(a.fieldR, b.fieldR);
  swap(a.fieldS, b.fieldS);
  swap(a.fieldT, b.fieldT);
  swap(a.fieldU, b.fieldU);
  swap(a.fieldX, b.fieldX);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void containerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2

namespace cpp2 {
//  enforce that if this thrift file is generated with extern template instances
//  for simple-json protocol then all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of json option");

//  if this struct is generated with extern template instances for nimble
//  protocol, enforce that all its dependencies are too
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
         ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");

} // cpp2
