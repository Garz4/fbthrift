/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class ComplexUnion;
class VirtualComplexUnion;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef std::map<int16_t, std::string> containerTypedef;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class ComplexUnion final : private apache::thrift::detail::st::ComparisonOperators<ComplexUnion> {
 public:
  enum Type {
    __EMPTY__ = 0,
    intValue = 1,
    stringValue = 5,
    intListValue = 2,
    stringListValue = 3,
    typedefValue = 9,
    stringRef = 14,
  } ;

  ComplexUnion()
      : type_(Type::__EMPTY__) {}

  ComplexUnion(ComplexUnion&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::intValue:
      {
        set_intValue(std::move(rhs.value_.intValue));
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(std::move(rhs.value_.stringValue));
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(std::move(rhs.value_.intListValue));
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(std::move(rhs.value_.stringListValue));
        break;
      }
      case Type::typedefValue:
      {
        set_typedefValue(std::move(rhs.value_.typedefValue));
        break;
      }
      case Type::stringRef:
      {
        set_stringRef(std::move(*rhs.value_.stringRef));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  ComplexUnion(const ComplexUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::intValue:
      {
        set_intValue(rhs.value_.intValue);
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(rhs.value_.stringValue);
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(rhs.value_.intListValue);
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(rhs.value_.stringListValue);
        break;
      }
      case Type::typedefValue:
      {
        set_typedefValue(rhs.value_.typedefValue);
        break;
      }
      case Type::stringRef:
      {
        set_stringRef(*rhs.value_.stringRef);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  ComplexUnion& operator=(ComplexUnion&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::intValue:
      {
        set_intValue(std::move(rhs.value_.intValue));
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(std::move(rhs.value_.stringValue));
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(std::move(rhs.value_.intListValue));
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(std::move(rhs.value_.stringListValue));
        break;
      }
      case Type::typedefValue:
      {
        set_typedefValue(std::move(rhs.value_.typedefValue));
        break;
      }
      case Type::stringRef:
      {
        set_stringRef(std::move(*rhs.value_.stringRef));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  ComplexUnion& operator=(const ComplexUnion& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::intValue:
      {
        set_intValue(rhs.value_.intValue);
        break;
      }
      case Type::stringValue:
      {
        set_stringValue(rhs.value_.stringValue);
        break;
      }
      case Type::intListValue:
      {
        set_intListValue(rhs.value_.intListValue);
        break;
      }
      case Type::stringListValue:
      {
        set_stringListValue(rhs.value_.stringListValue);
        break;
      }
      case Type::typedefValue:
      {
        set_typedefValue(rhs.value_.typedefValue);
        break;
      }
      case Type::stringRef:
      {
        set_stringRef(*rhs.value_.stringRef);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    set_intValue(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<5, _T> arg) {
    set_stringValue(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    set_intListValue(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    set_stringListValue(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<9, _T> arg) {
    set_typedefValue(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<14, _T> arg) {
    set_stringRef(arg.extract());
  }
  void __clear();

  ~ComplexUnion() {
    __clear();
  }
  union storage_type {
    int64_t intValue;
    std::string stringValue;
    std::vector<int64_t> intListValue;
    std::vector<std::string> stringListValue;
     ::cpp2::containerTypedef typedefValue;
    std::unique_ptr<std::string> stringRef;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const ComplexUnion& rhs) const;
  bool operator<(const ComplexUnion& rhs) const;

  int64_t& set_intValue(int64_t t = int64_t()) {
    __clear();
    type_ = Type::intValue;
    ::new (std::addressof(value_.intValue)) int64_t(t);
    return value_.intValue;
  }

  std::string& set_stringValue(std::string const &t) {
    __clear();
    type_ = Type::stringValue;
    ::new (std::addressof(value_.stringValue)) std::string(t);
    return value_.stringValue;
  }

  std::string& set_stringValue(std::string&& t) {
    __clear();
    type_ = Type::stringValue;
    ::new (std::addressof(value_.stringValue)) std::string(std::move(t));
    return value_.stringValue;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::string, T...>> std::string& set_stringValue(T&&... t) {
    __clear();
    type_ = Type::stringValue;
    ::new (std::addressof(value_.stringValue)) std::string(std::forward<T>(t)...);
    return value_.stringValue;
  }

  std::vector<int64_t>& set_intListValue(std::vector<int64_t> const &t) {
    __clear();
    type_ = Type::intListValue;
    ::new (std::addressof(value_.intListValue)) std::vector<int64_t>(t);
    return value_.intListValue;
  }

  std::vector<int64_t>& set_intListValue(std::vector<int64_t>&& t) {
    __clear();
    type_ = Type::intListValue;
    ::new (std::addressof(value_.intListValue)) std::vector<int64_t>(std::move(t));
    return value_.intListValue;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::vector<int64_t>, T...>> std::vector<int64_t>& set_intListValue(T&&... t) {
    __clear();
    type_ = Type::intListValue;
    ::new (std::addressof(value_.intListValue)) std::vector<int64_t>(std::forward<T>(t)...);
    return value_.intListValue;
  }

  std::vector<std::string>& set_stringListValue(std::vector<std::string> const &t) {
    __clear();
    type_ = Type::stringListValue;
    ::new (std::addressof(value_.stringListValue)) std::vector<std::string>(t);
    return value_.stringListValue;
  }

  std::vector<std::string>& set_stringListValue(std::vector<std::string>&& t) {
    __clear();
    type_ = Type::stringListValue;
    ::new (std::addressof(value_.stringListValue)) std::vector<std::string>(std::move(t));
    return value_.stringListValue;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::vector<std::string>, T...>> std::vector<std::string>& set_stringListValue(T&&... t) {
    __clear();
    type_ = Type::stringListValue;
    ::new (std::addressof(value_.stringListValue)) std::vector<std::string>(std::forward<T>(t)...);
    return value_.stringListValue;
  }

   ::cpp2::containerTypedef& set_typedefValue( ::cpp2::containerTypedef const &t) {
    __clear();
    type_ = Type::typedefValue;
    ::new (std::addressof(value_.typedefValue))  ::cpp2::containerTypedef(t);
    return value_.typedefValue;
  }

   ::cpp2::containerTypedef& set_typedefValue( ::cpp2::containerTypedef&& t) {
    __clear();
    type_ = Type::typedefValue;
    ::new (std::addressof(value_.typedefValue))  ::cpp2::containerTypedef(std::move(t));
    return value_.typedefValue;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t< ::cpp2::containerTypedef, T...>>  ::cpp2::containerTypedef& set_typedefValue(T&&... t) {
    __clear();
    type_ = Type::typedefValue;
    ::new (std::addressof(value_.typedefValue))  ::cpp2::containerTypedef(std::forward<T>(t)...);
    return value_.typedefValue;
  }

  std::unique_ptr<std::string>& set_stringRef(std::string const &t) {
    __clear();
    type_ = Type::stringRef;
    ::new (std::addressof(value_.stringRef)) std::unique_ptr<std::string>(new std::unique_ptr<std::string>::element_type(t));
    return value_.stringRef;
  }

  std::unique_ptr<std::string>& set_stringRef(std::string&& t) {
    __clear();
    type_ = Type::stringRef;
    ::new (std::addressof(value_.stringRef)) std::unique_ptr<std::string>(new std::unique_ptr<std::string>::element_type(std::move(t)));
    return value_.stringRef;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::string, T...>> std::unique_ptr<std::string>& set_stringRef(T&&... t) {
    __clear();
    type_ = Type::stringRef;
    ::new (std::addressof(value_.stringRef)) std::unique_ptr<std::string>(new std::unique_ptr<std::string>::element_type(std::forward<T>(t)...));
    return value_.stringRef;
  }

  int64_t const & get_intValue() const {
    assert(type_ == Type::intValue);
    return value_.intValue;
  }

  std::string const & get_stringValue() const {
    assert(type_ == Type::stringValue);
    return value_.stringValue;
  }

  std::vector<int64_t> const & get_intListValue() const {
    assert(type_ == Type::intListValue);
    return value_.intListValue;
  }

  std::vector<std::string> const & get_stringListValue() const {
    assert(type_ == Type::stringListValue);
    return value_.stringListValue;
  }

   ::cpp2::containerTypedef const & get_typedefValue() const {
    assert(type_ == Type::typedefValue);
    return value_.typedefValue;
  }

  std::unique_ptr<std::string> const & get_stringRef() const {
    assert(type_ == Type::stringRef);
    return value_.stringRef;
  }

  int64_t & mutable_intValue() {
    assert(type_ == Type::intValue);
    return value_.intValue;
  }

  std::string & mutable_stringValue() {
    assert(type_ == Type::stringValue);
    return value_.stringValue;
  }

  std::vector<int64_t> & mutable_intListValue() {
    assert(type_ == Type::intListValue);
    return value_.intListValue;
  }

  std::vector<std::string> & mutable_stringListValue() {
    assert(type_ == Type::stringListValue);
    return value_.stringListValue;
  }

   ::cpp2::containerTypedef & mutable_typedefValue() {
    assert(type_ == Type::typedefValue);
    return value_.typedefValue;
  }

  std::unique_ptr<std::string> & mutable_stringRef() {
    assert(type_ == Type::stringRef);
    return value_.stringRef;
  }

  int64_t move_intValue() {
    assert(type_ == Type::intValue);
    return std::move(value_.intValue);
  }

  std::string move_stringValue() {
    assert(type_ == Type::stringValue);
    return std::move(value_.stringValue);
  }

  std::vector<int64_t> move_intListValue() {
    assert(type_ == Type::intListValue);
    return std::move(value_.intListValue);
  }

  std::vector<std::string> move_stringListValue() {
    assert(type_ == Type::stringListValue);
    return std::move(value_.stringListValue);
  }

   ::cpp2::containerTypedef move_typedefValue() {
    assert(type_ == Type::typedefValue);
    return std::move(value_.typedefValue);
  }

  std::unique_ptr<std::string> move_stringRef() {
    assert(type_ == Type::stringRef);
    return std::move(value_.stringRef);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< ComplexUnion >;
};

void swap(ComplexUnion& a, ComplexUnion& b);
extern template void ComplexUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ComplexUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ComplexUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ComplexUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void ComplexUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ComplexUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ComplexUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ComplexUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t ComplexUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::ComplexUnion>::clear( ::cpp2::ComplexUnion* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::ComplexUnion>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::write(Protocol* proto,  ::cpp2::ComplexUnion const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::ComplexUnion>::read(Protocol* proto,  ::cpp2::ComplexUnion* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::serializedSize(Protocol const* proto,  ::cpp2::ComplexUnion const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::ComplexUnion>::serializedSizeZC(Protocol const* proto,  ::cpp2::ComplexUnion const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {
class VirtualComplexUnion : private apache::thrift::detail::st::ComparisonOperators<VirtualComplexUnion> {
 public:
  enum Type {
    __EMPTY__ = 0,
    thingOne = 1,
    thingTwo = 2,
  } ;

  VirtualComplexUnion()
      : type_(Type::__EMPTY__) {}

  VirtualComplexUnion(VirtualComplexUnion&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::thingOne:
      {
        set_thingOne(std::move(rhs.value_.thingOne));
        break;
      }
      case Type::thingTwo:
      {
        set_thingTwo(std::move(rhs.value_.thingTwo));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  VirtualComplexUnion(const VirtualComplexUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::thingOne:
      {
        set_thingOne(rhs.value_.thingOne);
        break;
      }
      case Type::thingTwo:
      {
        set_thingTwo(rhs.value_.thingTwo);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  VirtualComplexUnion& operator=(VirtualComplexUnion&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::thingOne:
      {
        set_thingOne(std::move(rhs.value_.thingOne));
        break;
      }
      case Type::thingTwo:
      {
        set_thingTwo(std::move(rhs.value_.thingTwo));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  VirtualComplexUnion& operator=(const VirtualComplexUnion& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::thingOne:
      {
        set_thingOne(rhs.value_.thingOne);
        break;
      }
      case Type::thingTwo:
      {
        set_thingTwo(rhs.value_.thingTwo);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    set_thingOne(arg.extract());
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    set_thingTwo(arg.extract());
  }
  void __clear();

  virtual ~VirtualComplexUnion() {
    __clear();
  }

  union storage_type {
    std::string thingOne;
    std::string thingTwo;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const VirtualComplexUnion& rhs) const;
  bool operator<(const VirtualComplexUnion& rhs) const;

  std::string& set_thingOne(std::string const &t) {
    __clear();
    type_ = Type::thingOne;
    ::new (std::addressof(value_.thingOne)) std::string(t);
    return value_.thingOne;
  }

  std::string& set_thingOne(std::string&& t) {
    __clear();
    type_ = Type::thingOne;
    ::new (std::addressof(value_.thingOne)) std::string(std::move(t));
    return value_.thingOne;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::string, T...>> std::string& set_thingOne(T&&... t) {
    __clear();
    type_ = Type::thingOne;
    ::new (std::addressof(value_.thingOne)) std::string(std::forward<T>(t)...);
    return value_.thingOne;
  }

  std::string& set_thingTwo(std::string const &t) {
    __clear();
    type_ = Type::thingTwo;
    ::new (std::addressof(value_.thingTwo)) std::string(t);
    return value_.thingTwo;
  }

  std::string& set_thingTwo(std::string&& t) {
    __clear();
    type_ = Type::thingTwo;
    ::new (std::addressof(value_.thingTwo)) std::string(std::move(t));
    return value_.thingTwo;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::string, T...>> std::string& set_thingTwo(T&&... t) {
    __clear();
    type_ = Type::thingTwo;
    ::new (std::addressof(value_.thingTwo)) std::string(std::forward<T>(t)...);
    return value_.thingTwo;
  }

  std::string const & get_thingOne() const {
    assert(type_ == Type::thingOne);
    return value_.thingOne;
  }

  std::string const & get_thingTwo() const {
    assert(type_ == Type::thingTwo);
    return value_.thingTwo;
  }

  std::string & mutable_thingOne() {
    assert(type_ == Type::thingOne);
    return value_.thingOne;
  }

  std::string & mutable_thingTwo() {
    assert(type_ == Type::thingTwo);
    return value_.thingTwo;
  }

  std::string move_thingOne() {
    assert(type_ == Type::thingOne);
    return std::move(value_.thingOne);
  }

  std::string move_thingTwo() {
    assert(type_ == Type::thingTwo);
    return std::move(value_.thingTwo);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< VirtualComplexUnion >;
};

void swap(VirtualComplexUnion& a, VirtualComplexUnion& b);
extern template void VirtualComplexUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t VirtualComplexUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t VirtualComplexUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t VirtualComplexUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void VirtualComplexUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t VirtualComplexUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t VirtualComplexUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t VirtualComplexUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t VirtualComplexUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::VirtualComplexUnion>::clear( ::cpp2::VirtualComplexUnion* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::VirtualComplexUnion>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::VirtualComplexUnion>::write(Protocol* proto,  ::cpp2::VirtualComplexUnion const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::VirtualComplexUnion>::read(Protocol* proto,  ::cpp2::VirtualComplexUnion* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::VirtualComplexUnion>::serializedSize(Protocol const* proto,  ::cpp2::VirtualComplexUnion const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::VirtualComplexUnion>::serializedSizeZC(Protocol const* proto,  ::cpp2::VirtualComplexUnion const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
