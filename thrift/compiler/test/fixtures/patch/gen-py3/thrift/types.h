/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/annotation/gen-cpp2/thrift_data.h"
#include "thrift/annotation/gen-cpp2/thrift_types.h"
#include "thrift/annotation/gen-cpp2/thrift_metadata.h"
namespace thrift {
namespace py3 {



template<>
void reset_field<::facebook::thrift::annotation::thrift::RequiresBackwardCompatibility>(
    ::facebook::thrift::annotation::thrift::RequiresBackwardCompatibility& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.field_name_ref().copy_from(default_inst<::facebook::thrift::annotation::thrift::RequiresBackwardCompatibility>().field_name_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::Experimental>(
    ::facebook::thrift::annotation::thrift::Experimental& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::Deprecated>(
    ::facebook::thrift::annotation::thrift::Deprecated& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::TerseWrite>(
    ::facebook::thrift::annotation::thrift::TerseWrite& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::Box>(
    ::facebook::thrift::annotation::thrift::Box& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::SerializeInFieldIdOrder>(
    ::facebook::thrift::annotation::thrift::SerializeInFieldIdOrder& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::NoLegacyAPIs>(
    ::facebook::thrift::annotation::thrift::NoLegacyAPIs& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::thrift::v1>(
    ::facebook::thrift::annotation::thrift::v1& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::RequiresBackwardCompatibility>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::Experimental>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::Deprecated>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::TerseWrite>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::Box>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::SerializeInFieldIdOrder>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::NoLegacyAPIs>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::thrift::v1>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
