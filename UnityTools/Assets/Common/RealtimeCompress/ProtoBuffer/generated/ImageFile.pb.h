// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ImageFile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ImageFile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ImageFile_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ImageFile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ImageFile_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ImageFile_2eproto;
namespace UnityTools {
namespace ImageFile {
class FileData;
class FileDataDefaultTypeInternal;
extern FileDataDefaultTypeInternal _FileData_default_instance_;
class Parameter;
class ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
}  // namespace ImageFile
}  // namespace UnityTools
PROTOBUF_NAMESPACE_OPEN
template<> ::UnityTools::ImageFile::FileData* Arena::CreateMaybeMessage<::UnityTools::ImageFile::FileData>(Arena*);
template<> ::UnityTools::ImageFile::Parameter* Arena::CreateMaybeMessage<::UnityTools::ImageFile::Parameter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace UnityTools {
namespace ImageFile {

// ===================================================================

class Parameter :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:UnityTools.ImageFile.Parameter) */ {
 public:
  Parameter();
  virtual ~Parameter();

  Parameter(const Parameter& from);
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Parameter& operator=(Parameter&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Parameter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }
  inline void Swap(Parameter* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Parameter* New() const final {
    return CreateMaybeMessage<Parameter>(nullptr);
  }

  Parameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Parameter* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "UnityTools.ImageFile.Parameter";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ImageFile_2eproto);
    return ::descriptor_table_ImageFile_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 3,
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
  };
  // string id = 3;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // int32 width = 1;
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 height = 2;
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:UnityTools.ImageFile.Parameter)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ImageFile_2eproto;
};
// -------------------------------------------------------------------

class FileData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:UnityTools.ImageFile.FileData) */ {
 public:
  FileData();
  virtual ~FileData();

  FileData(const FileData& from);
  FileData(FileData&& from) noexcept
    : FileData() {
    *this = ::std::move(from);
  }

  inline FileData& operator=(const FileData& from) {
    CopyFrom(from);
    return *this;
  }
  inline FileData& operator=(FileData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const FileData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FileData* internal_default_instance() {
    return reinterpret_cast<const FileData*>(
               &_FileData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FileData& a, FileData& b) {
    a.Swap(&b);
  }
  inline void Swap(FileData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FileData* New() const final {
    return CreateMaybeMessage<FileData>(nullptr);
  }

  FileData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FileData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FileData& from);
  void MergeFrom(const FileData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FileData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "UnityTools.ImageFile.FileData";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ImageFile_2eproto);
    return ::descriptor_table_ImageFile_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kParameterFieldNumber = 1,
  };
  // bytes data = 2;
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // .UnityTools.ImageFile.Parameter parameter = 1;
  bool has_parameter() const;
  private:
  bool _internal_has_parameter() const;
  public:
  void clear_parameter();
  const ::UnityTools::ImageFile::Parameter& parameter() const;
  ::UnityTools::ImageFile::Parameter* release_parameter();
  ::UnityTools::ImageFile::Parameter* mutable_parameter();
  void set_allocated_parameter(::UnityTools::ImageFile::Parameter* parameter);
  private:
  const ::UnityTools::ImageFile::Parameter& _internal_parameter() const;
  ::UnityTools::ImageFile::Parameter* _internal_mutable_parameter();
  public:

  // @@protoc_insertion_point(class_scope:UnityTools.ImageFile.FileData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::UnityTools::ImageFile::Parameter* parameter_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ImageFile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// int32 width = 1;
inline void Parameter::clear_width() {
  width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Parameter::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Parameter::width() const {
  // @@protoc_insertion_point(field_get:UnityTools.ImageFile.Parameter.width)
  return _internal_width();
}
inline void Parameter::_internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  width_ = value;
}
inline void Parameter::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:UnityTools.ImageFile.Parameter.width)
}

// int32 height = 2;
inline void Parameter::clear_height() {
  height_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Parameter::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Parameter::height() const {
  // @@protoc_insertion_point(field_get:UnityTools.ImageFile.Parameter.height)
  return _internal_height();
}
inline void Parameter::_internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  height_ = value;
}
inline void Parameter::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:UnityTools.ImageFile.Parameter.height)
}

// string id = 3;
inline void Parameter::clear_id() {
  id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Parameter::id() const {
  // @@protoc_insertion_point(field_get:UnityTools.ImageFile.Parameter.id)
  return _internal_id();
}
inline void Parameter::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:UnityTools.ImageFile.Parameter.id)
}
inline std::string* Parameter::mutable_id() {
  // @@protoc_insertion_point(field_mutable:UnityTools.ImageFile.Parameter.id)
  return _internal_mutable_id();
}
inline const std::string& Parameter::_internal_id() const {
  return id_.GetNoArena();
}
inline void Parameter::_internal_set_id(const std::string& value) {
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Parameter::set_id(std::string&& value) {
  
  id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:UnityTools.ImageFile.Parameter.id)
}
inline void Parameter::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:UnityTools.ImageFile.Parameter.id)
}
inline void Parameter::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:UnityTools.ImageFile.Parameter.id)
}
inline std::string* Parameter::_internal_mutable_id() {
  
  return id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Parameter::release_id() {
  // @@protoc_insertion_point(field_release:UnityTools.ImageFile.Parameter.id)
  
  return id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Parameter::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:UnityTools.ImageFile.Parameter.id)
}

// -------------------------------------------------------------------

// FileData

// .UnityTools.ImageFile.Parameter parameter = 1;
inline bool FileData::_internal_has_parameter() const {
  return this != internal_default_instance() && parameter_ != nullptr;
}
inline bool FileData::has_parameter() const {
  return _internal_has_parameter();
}
inline void FileData::clear_parameter() {
  if (GetArenaNoVirtual() == nullptr && parameter_ != nullptr) {
    delete parameter_;
  }
  parameter_ = nullptr;
}
inline const ::UnityTools::ImageFile::Parameter& FileData::_internal_parameter() const {
  const ::UnityTools::ImageFile::Parameter* p = parameter_;
  return p != nullptr ? *p : *reinterpret_cast<const ::UnityTools::ImageFile::Parameter*>(
      &::UnityTools::ImageFile::_Parameter_default_instance_);
}
inline const ::UnityTools::ImageFile::Parameter& FileData::parameter() const {
  // @@protoc_insertion_point(field_get:UnityTools.ImageFile.FileData.parameter)
  return _internal_parameter();
}
inline ::UnityTools::ImageFile::Parameter* FileData::release_parameter() {
  // @@protoc_insertion_point(field_release:UnityTools.ImageFile.FileData.parameter)
  
  ::UnityTools::ImageFile::Parameter* temp = parameter_;
  parameter_ = nullptr;
  return temp;
}
inline ::UnityTools::ImageFile::Parameter* FileData::_internal_mutable_parameter() {
  
  if (parameter_ == nullptr) {
    auto* p = CreateMaybeMessage<::UnityTools::ImageFile::Parameter>(GetArenaNoVirtual());
    parameter_ = p;
  }
  return parameter_;
}
inline ::UnityTools::ImageFile::Parameter* FileData::mutable_parameter() {
  // @@protoc_insertion_point(field_mutable:UnityTools.ImageFile.FileData.parameter)
  return _internal_mutable_parameter();
}
inline void FileData::set_allocated_parameter(::UnityTools::ImageFile::Parameter* parameter) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete parameter_;
  }
  if (parameter) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      parameter = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, parameter, submessage_arena);
    }
    
  } else {
    
  }
  parameter_ = parameter;
  // @@protoc_insertion_point(field_set_allocated:UnityTools.ImageFile.FileData.parameter)
}

// bytes data = 2;
inline void FileData::clear_data() {
  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& FileData::data() const {
  // @@protoc_insertion_point(field_get:UnityTools.ImageFile.FileData.data)
  return _internal_data();
}
inline void FileData::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:UnityTools.ImageFile.FileData.data)
}
inline std::string* FileData::mutable_data() {
  // @@protoc_insertion_point(field_mutable:UnityTools.ImageFile.FileData.data)
  return _internal_mutable_data();
}
inline const std::string& FileData::_internal_data() const {
  return data_.GetNoArena();
}
inline void FileData::_internal_set_data(const std::string& value) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void FileData::set_data(std::string&& value) {
  
  data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:UnityTools.ImageFile.FileData.data)
}
inline void FileData::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:UnityTools.ImageFile.FileData.data)
}
inline void FileData::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:UnityTools.ImageFile.FileData.data)
}
inline std::string* FileData::_internal_mutable_data() {
  
  return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* FileData::release_data() {
  // @@protoc_insertion_point(field_release:UnityTools.ImageFile.FileData.data)
  
  return data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void FileData::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:UnityTools.ImageFile.FileData.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ImageFile
}  // namespace UnityTools

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ImageFile_2eproto
