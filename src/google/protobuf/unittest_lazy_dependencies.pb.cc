// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies.proto

#include "google/protobuf/unittest_lazy_dependencies.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace protobuf_unittest {
namespace lazy_imports {
constexpr ImportedMessage::ImportedMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : lazy_message_(nullptr){}
struct ImportedMessageDefaultTypeInternal {
  constexpr ImportedMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ImportedMessageDefaultTypeInternal() {}
  union {
    ImportedMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ImportedMessageDefaultTypeInternal _ImportedMessage_default_instance_;
constexpr MessageCustomOption::MessageCustomOption(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct MessageCustomOptionDefaultTypeInternal {
  constexpr MessageCustomOptionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MessageCustomOptionDefaultTypeInternal() {}
  union {
    MessageCustomOption _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MessageCustomOptionDefaultTypeInternal _MessageCustomOption_default_instance_;
constexpr MessageCustomOption2::MessageCustomOption2(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct MessageCustomOption2DefaultTypeInternal {
  constexpr MessageCustomOption2DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MessageCustomOption2DefaultTypeInternal() {}
  union {
    MessageCustomOption2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MessageCustomOption2DefaultTypeInternal _MessageCustomOption2_default_instance_;
}  // namespace lazy_imports
}  // namespace protobuf_unittest
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, lazy_message_),
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::protobuf_unittest::lazy_imports::ImportedMessage)},
  { 7, -1, sizeof(::protobuf_unittest::lazy_imports::MessageCustomOption)},
  { 12, -1, sizeof(::protobuf_unittest::lazy_imports::MessageCustomOption2)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::lazy_imports::_ImportedMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::lazy_imports::_MessageCustomOption_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::lazy_imports::_MessageCustomOption2_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n0google/protobuf/unittest_lazy_dependen"
  "cies.proto\022\036protobuf_unittest.lazy_impor"
  "ts\032>google/protobuf/unittest_lazy_depend"
  "encies_custom_option.proto\"T\n\017ImportedMe"
  "ssage\022A\n\014lazy_message\030\001 \001(\0132+.protobuf_u"
  "nittest.lazy_imports.LazyMessage\"\025\n\023Mess"
  "ageCustomOption\"\036\n\024MessageCustomOption2:"
  "\006\370\376\331\220\004\000B(B\030UnittestLazyImportsProtoH\001\200\001\001"
  "\210\001\001\220\001\001\370\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto = {
  false, false, 329, descriptor_table_protodef_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto, "google/protobuf/unittest_lazy_dependencies.proto", 
  &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_once, descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto, file_level_enum_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto(&descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto);
namespace protobuf_unittest {
namespace lazy_imports {

// ===================================================================

class ImportedMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<ImportedMessage>()._has_bits_);
  static const ::protobuf_unittest::lazy_imports::LazyMessage& lazy_message(const ImportedMessage* msg);
  static void set_has_lazy_message(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::protobuf_unittest::lazy_imports::LazyMessage&
ImportedMessage::_Internal::lazy_message(const ImportedMessage* msg) {
  return *msg->lazy_message_;
}
void ImportedMessage::clear_lazy_message() {
  if (lazy_message_ != nullptr) lazy_message_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
ImportedMessage::ImportedMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.ImportedMessage)
}
ImportedMessage::ImportedMessage(const ImportedMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_lazy_message()) {
    lazy_message_ = new ::protobuf_unittest::lazy_imports::LazyMessage(*from.lazy_message_);
  } else {
    lazy_message_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.ImportedMessage)
}

void ImportedMessage::SharedCtor() {
lazy_message_ = nullptr;
}

ImportedMessage::~ImportedMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.ImportedMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ImportedMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete lazy_message_;
}

void ImportedMessage::ArenaDtor(void* object) {
  ImportedMessage* _this = reinterpret_cast< ImportedMessage* >(object);
  (void)_this;
}
void ImportedMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ImportedMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ImportedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.ImportedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(lazy_message_ != nullptr);
    lazy_message_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ImportedMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_lazy_message(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ImportedMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.ImportedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::lazy_message(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.ImportedMessage)
  return target;
}

size_t ImportedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.ImportedMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lazy_message_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImportedMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ImportedMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ImportedMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.ImportedMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.ImportedMessage)
    MergeFrom(*source);
  }
}

void ImportedMessage::MergeFrom(const ImportedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_lazy_message()) {
    _internal_mutable_lazy_message()->::protobuf_unittest::lazy_imports::LazyMessage::MergeFrom(from._internal_lazy_message());
  }
}

void ImportedMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportedMessage::CopyFrom(const ImportedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportedMessage::IsInitialized() const {
  return true;
}

void ImportedMessage::InternalSwap(ImportedMessage* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(lazy_message_, other->lazy_message_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ImportedMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_getter, &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_once,
      file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto[0]);
}

// ===================================================================

class MessageCustomOption::_Internal {
 public:
};

MessageCustomOption::MessageCustomOption(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.MessageCustomOption)
}
MessageCustomOption::MessageCustomOption(const MessageCustomOption& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.MessageCustomOption)
}

void MessageCustomOption::SharedCtor() {
}

MessageCustomOption::~MessageCustomOption() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.MessageCustomOption)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MessageCustomOption::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MessageCustomOption::ArenaDtor(void* object) {
  MessageCustomOption* _this = reinterpret_cast< MessageCustomOption* >(object);
  (void)_this;
}
void MessageCustomOption::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MessageCustomOption::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MessageCustomOption::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageCustomOption::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MessageCustomOption::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.MessageCustomOption)
  return target;
}

size_t MessageCustomOption::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MessageCustomOption::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageCustomOption* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MessageCustomOption>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.MessageCustomOption)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.MessageCustomOption)
    MergeFrom(*source);
  }
}

void MessageCustomOption::MergeFrom(const MessageCustomOption& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void MessageCustomOption::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageCustomOption::CopyFrom(const MessageCustomOption& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageCustomOption::IsInitialized() const {
  return true;
}

void MessageCustomOption::InternalSwap(MessageCustomOption* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageCustomOption::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_getter, &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_once,
      file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto[1]);
}

// ===================================================================

class MessageCustomOption2::_Internal {
 public:
};

MessageCustomOption2::MessageCustomOption2(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
}
MessageCustomOption2::MessageCustomOption2(const MessageCustomOption2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
}

void MessageCustomOption2::SharedCtor() {
}

MessageCustomOption2::~MessageCustomOption2() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MessageCustomOption2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MessageCustomOption2::ArenaDtor(void* object) {
  MessageCustomOption2* _this = reinterpret_cast< MessageCustomOption2* >(object);
  (void)_this;
}
void MessageCustomOption2::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MessageCustomOption2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MessageCustomOption2::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageCustomOption2::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MessageCustomOption2::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.MessageCustomOption2)
  return target;
}

size_t MessageCustomOption2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MessageCustomOption2::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageCustomOption2* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MessageCustomOption2>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.MessageCustomOption2)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.MessageCustomOption2)
    MergeFrom(*source);
  }
}

void MessageCustomOption2::MergeFrom(const MessageCustomOption2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void MessageCustomOption2::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageCustomOption2::CopyFrom(const MessageCustomOption2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageCustomOption2::IsInitialized() const {
  return true;
}

void MessageCustomOption2::InternalSwap(MessageCustomOption2* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageCustomOption2::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_getter, &descriptor_table_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto_once,
      file_level_metadata_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest::lazy_imports::ImportedMessage* Arena::CreateMaybeMessage< ::protobuf_unittest::lazy_imports::ImportedMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::ImportedMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::protobuf_unittest::lazy_imports::MessageCustomOption* Arena::CreateMaybeMessage< ::protobuf_unittest::lazy_imports::MessageCustomOption >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::MessageCustomOption >(arena);
}
template<> PROTOBUF_NOINLINE ::protobuf_unittest::lazy_imports::MessageCustomOption2* Arena::CreateMaybeMessage< ::protobuf_unittest::lazy_imports::MessageCustomOption2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::MessageCustomOption2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
