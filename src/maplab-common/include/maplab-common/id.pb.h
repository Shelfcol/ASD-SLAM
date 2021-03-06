// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: maplab-common/id.proto

#ifndef PROTOBUF_INCLUDED_maplab_2dcommon_2fid_2eproto
#define PROTOBUF_INCLUDED_maplab_2dcommon_2fid_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_maplab_2dcommon_2fid_2eproto 

namespace protobuf_maplab_2dcommon_2fid_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_maplab_2dcommon_2fid_2eproto
namespace common {
namespace proto {
class Id;
class IdDefaultTypeInternal;
extern IdDefaultTypeInternal _Id_default_instance_;
}  // namespace proto
}  // namespace common
namespace google {
namespace protobuf {
template<> ::common::proto::Id* Arena::CreateMaybeMessage<::common::proto::Id>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace common {
namespace proto {

// ===================================================================

class Id : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:common.proto.Id) */ {
 public:
  Id();
  virtual ~Id();

  Id(const Id& from);

  inline Id& operator=(const Id& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Id(Id&& from) noexcept
    : Id() {
    *this = ::std::move(from);
  }

  inline Id& operator=(Id&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Id& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Id* internal_default_instance() {
    return reinterpret_cast<const Id*>(
               &_Id_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Id* other);
  friend void swap(Id& a, Id& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Id* New() const final {
    return CreateMaybeMessage<Id>(NULL);
  }

  Id* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Id>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Id& from);
  void MergeFrom(const Id& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Id* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 uint = 1;
  int uint_size() const;
  void clear_uint();
  static const int kUintFieldNumber = 1;
  ::google::protobuf::uint64 uint(int index) const;
  void set_uint(int index, ::google::protobuf::uint64 value);
  void add_uint(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      uint() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_uint();

  // @@protoc_insertion_point(class_scope:common.proto.Id)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > uint_;
  mutable int _uint_cached_byte_size_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_maplab_2dcommon_2fid_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Id

// repeated uint64 uint = 1;
inline int Id::uint_size() const {
  return uint_.size();
}
inline void Id::clear_uint() {
  uint_.Clear();
}
inline ::google::protobuf::uint64 Id::uint(int index) const {
  // @@protoc_insertion_point(field_get:common.proto.Id.uint)
  return uint_.Get(index);
}
inline void Id::set_uint(int index, ::google::protobuf::uint64 value) {
  uint_.Set(index, value);
  // @@protoc_insertion_point(field_set:common.proto.Id.uint)
}
inline void Id::add_uint(::google::protobuf::uint64 value) {
  uint_.Add(value);
  // @@protoc_insertion_point(field_add:common.proto.Id.uint)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Id::uint() const {
  // @@protoc_insertion_point(field_list:common.proto.Id.uint)
  return uint_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Id::mutable_uint() {
  // @@protoc_insertion_point(field_mutable_list:common.proto.Id.uint)
  return &uint_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace common

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_maplab_2dcommon_2fid_2eproto
