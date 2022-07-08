/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/annotation/gen-py3/thrift/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
::apache::thrift::metadata::ThriftMetadata thrift_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<Beta>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Experimental>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Testing>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Deprecated>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ReserveIds>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Legacy>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<RequiresBackwardCompatibility>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoExperimental>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoBeta>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoLegacy>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoDeprecated>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TerseWrite>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Box>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Mixin>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<SerializeInFieldIdOrder>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<GenDefaultEnumValue>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<v1>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<v1beta>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<v1alpha>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<v1test>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<NoLegacyAPIs>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
