/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::Animal>::size;
folly::Range<::cpp2::Animal const*> const TEnumTraits<::cpp2::Animal>::values = folly::range(::cpp2::_AnimalEnumDataStorage::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::Animal>::names = folly::range(::cpp2::_AnimalEnumDataStorage::names);

char const* TEnumTraits<::cpp2::Animal>::findName(type value) {
  using factory = ::cpp2::_Animal_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::Animal>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_Animal_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {

const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES = _Animal_EnumMapFactory::makeValuesToNamesMap();
const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES = _Animal_EnumMapFactory::makeNamesToValuesMap();

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Color>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "red") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "green") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "blue") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "alpha") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
}
void TccStructTraits<::cpp2::Vehicle>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "color") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "licensePlate") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "description") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "name") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "hasAC") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
}
void TccStructTraits<::cpp2::Person>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "id") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "name") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "age") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I16;
  }
  else if (_fname == "address") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "favoriteColor") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "friends") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "bestFriend") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "petNames") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "afraidOfAnimal") {
    fid = 9;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "vehicles") {
    fid = 10;
    _ftype = apache::thrift::protocol::T_LIST;
  }
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

Color::Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg) :
    red(std::move(red__arg)),
    green(std::move(green__arg)),
    blue(std::move(blue__arg)),
    alpha(std::move(alpha__arg)) {}

void Color::__clear() {
  // clear all fields
  red = 0;
  green = 0;
  blue = 0;
  alpha = 0;
}

bool Color::operator==(const Color& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.red == rhs.red)) {
    return false;
  }
  if (!(lhs.green == rhs.green)) {
    return false;
  }
  if (!(lhs.blue == rhs.blue)) {
    return false;
  }
  if (!(lhs.alpha == rhs.alpha)) {
    return false;
  }
  return true;
}

bool Color::operator<(const Color& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.red == rhs.red)) {
    return lhs.red < rhs.red;
  }
  if (!(lhs.green == rhs.green)) {
    return lhs.green < rhs.green;
  }
  if (!(lhs.blue == rhs.blue)) {
    return lhs.blue < rhs.blue;
  }
  if (!(lhs.alpha == rhs.alpha)) {
    return lhs.alpha < rhs.alpha;
  }
  return false;
}


void swap(Color& a, Color& b) {
  using ::std::swap;
  swap(a.red, b.red);
  swap(a.green, b.green);
  swap(a.blue, b.blue);
  swap(a.alpha, b.alpha);
}

template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

Vehicle::Vehicle() {}


Vehicle::~Vehicle() {}

Vehicle::Vehicle(apache::thrift::FragileConstructor,  ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg) :
    color(std::move(color__arg)),
    licensePlate(std::move(licensePlate__arg)),
    description(std::move(description__arg)),
    name(std::move(name__arg)),
    hasAC(std::move(hasAC__arg)) {}

void Vehicle::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::clear(&color);
  licensePlate.clear();
  description.clear();
  name.clear();
  hasAC.clear();
}

bool Vehicle::operator==(const Vehicle& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.color == rhs.color)) {
    return false;
  }
  if (!(lhs.licensePlate == rhs.licensePlate)) {
    return false;
  }
  if (!(lhs.description == rhs.description)) {
    return false;
  }
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  if (!(lhs.hasAC == rhs.hasAC)) {
    return false;
  }
  return true;
}

bool Vehicle::operator<(const Vehicle& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.color == rhs.color)) {
    return lhs.color < rhs.color;
  }
  if (!(lhs.licensePlate == rhs.licensePlate)) {
    return lhs.licensePlate < rhs.licensePlate;
  }
  if (!(lhs.description == rhs.description)) {
    return lhs.description < rhs.description;
  }
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  if (!(lhs.hasAC == rhs.hasAC)) {
    return lhs.hasAC < rhs.hasAC;
  }
  return false;
}


void swap(Vehicle& a, Vehicle& b) {
  using ::std::swap;
  swap(a.color, b.color);
  swap(a.licensePlate, b.licensePlate);
  swap(a.description, b.description);
  swap(a.name, b.name);
  swap(a.hasAC, b.hasAC);
}

template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

Person::Person() :
      id(0) {}


Person::~Person() {}

Person::Person(apache::thrift::FragileConstructor,  ::cpp2::PersonID id__arg, ::std::string name__arg, int16_t age__arg, ::std::string address__arg,  ::cpp2::Color favoriteColor__arg, ::std::set< ::cpp2::PersonID> friends__arg,  ::cpp2::PersonID bestFriend__arg, ::std::map< ::cpp2::Animal, ::std::string> petNames__arg,  ::cpp2::Animal afraidOfAnimal__arg, ::std::vector< ::cpp2::Vehicle> vehicles__arg) :
    id(std::move(id__arg)),
    name(std::move(name__arg)),
    age(std::move(age__arg)),
    address(std::move(address__arg)),
    favoriteColor(std::move(favoriteColor__arg)),
    friends(std::move(friends__arg)),
    bestFriend(std::move(bestFriend__arg)),
    petNames(std::move(petNames__arg)),
    afraidOfAnimal(std::move(afraidOfAnimal__arg)),
    vehicles(std::move(vehicles__arg)) {}

void Person::__clear() {
  // clear all fields
  id = 0;
  name = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  age.clear();
  address.clear();
  favoriteColor.clear();
  friends.clear();
  bestFriend.clear();
  petNames.clear();
  afraidOfAnimal.clear();
  vehicles.clear();
}

bool Person::operator==(const Person& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id == rhs.id)) {
    return false;
  }
  if (!(lhs.name == rhs.name)) {
    return false;
  }
  if (!(lhs.age == rhs.age)) {
    return false;
  }
  if (!(lhs.address == rhs.address)) {
    return false;
  }
  if (!(lhs.favoriteColor == rhs.favoriteColor)) {
    return false;
  }
  if (!(lhs.friends == rhs.friends)) {
    return false;
  }
  if (!(lhs.bestFriend == rhs.bestFriend)) {
    return false;
  }
  if (!(lhs.petNames == rhs.petNames)) {
    return false;
  }
  if (!(lhs.afraidOfAnimal == rhs.afraidOfAnimal)) {
    return false;
  }
  if (!(lhs.vehicles == rhs.vehicles)) {
    return false;
  }
  return true;
}

bool Person::operator<(const Person& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id == rhs.id)) {
    return lhs.id < rhs.id;
  }
  if (!(lhs.name == rhs.name)) {
    return lhs.name < rhs.name;
  }
  if (!(lhs.age == rhs.age)) {
    return lhs.age < rhs.age;
  }
  if (!(lhs.address == rhs.address)) {
    return lhs.address < rhs.address;
  }
  if (!(lhs.favoriteColor == rhs.favoriteColor)) {
    return lhs.favoriteColor < rhs.favoriteColor;
  }
  if (!(lhs.friends == rhs.friends)) {
    return lhs.friends < rhs.friends;
  }
  if (!(lhs.bestFriend == rhs.bestFriend)) {
    return lhs.bestFriend < rhs.bestFriend;
  }
  if (!(lhs.petNames == rhs.petNames)) {
    return lhs.petNames < rhs.petNames;
  }
  if (!(lhs.afraidOfAnimal == rhs.afraidOfAnimal)) {
    return lhs.afraidOfAnimal < rhs.afraidOfAnimal;
  }
  if (!(lhs.vehicles == rhs.vehicles)) {
    return lhs.vehicles < rhs.vehicles;
  }
  return false;
}


void swap(Person& a, Person& b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.name, b.name);
  swap(a.age, b.age);
  swap(a.address, b.address);
  swap(a.favoriteColor, b.favoriteColor);
  swap(a.friends, b.friends);
  swap(a.bestFriend, b.bestFriend);
  swap(a.petNames, b.petNames);
  swap(a.afraidOfAnimal, b.afraidOfAnimal);
  swap(a.vehicles, b.vehicles);
}

template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
