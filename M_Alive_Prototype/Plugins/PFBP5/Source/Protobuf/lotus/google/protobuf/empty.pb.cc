// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/empty.proto

#include <Protobuf/lotus/google/protobuf/empty.pb.h>

#include <algorithm>

#include <Protobuf/lotus/google/protobuf/stubs/common.h>
#include <Protobuf/lotus/google/protobuf/stubs/port.h>
#include <Protobuf/lotus/google/protobuf/stubs/once.h>
#include <Protobuf/lotus/google/protobuf/io/coded_stream.h>
#include <Protobuf/lotus/google/protobuf/wire_format_lite_inl.h>
#include <Protobuf/lotus/google/protobuf/descriptor.h>
#include <Protobuf/lotus/google/protobuf/generated_message_reflection.h>
#include <Protobuf/lotus/google/protobuf/reflection_ops.h>
#include <Protobuf/lotus/google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace lotus {
namespace google {
namespace protobuf {
class EmptyDefaultTypeInternal {
 public:
  ::lotus::google::protobuf::internal::ExplicitlyConstructed<Empty>
      _instance;
} _Empty_default_instance_;
}  // namespace protobuf
}  // namespace google
}  // namespace lotus
namespace protobuf_google_2fprotobuf_2fempty_2eproto {
void InitDefaultsEmptyImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::lotus::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::lotus::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lotus::google::protobuf::_Empty_default_instance_;
    new (ptr) ::lotus::google::protobuf::Empty();
    ::lotus::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lotus::google::protobuf::Empty::InitAsDefaultInstance();
}

void InitDefaultsEmpty() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::lotus::google::protobuf::GoogleOnceInit(&once, &InitDefaultsEmptyImpl);
}

::lotus::google::protobuf::Metadata file_level_metadata[1];

const ::lotus::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lotus::google::protobuf::Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::lotus::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::lotus::google::protobuf::Empty)},
};

static ::lotus::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::lotus::google::protobuf::Message*>(&::lotus::google::protobuf::_Empty_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::lotus::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/empty.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::lotus::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::lotus::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033google/protobuf/empty.proto\022\017google.pr"
      "otobuf\"\007\n\005EmptyBv\n\023com.google.protobufB\n"
      "EmptyProtoP\001Z\'github.com/golang/protobuf"
      "/ptypes/empty\370\001\001\242\002\003GPB\252\002\036Google.Protobuf"
      ".WellKnownTypesb\006proto3"
  };
  ::lotus::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 183);
  ::lotus::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/empty.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::lotus::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fprotobuf_2fempty_2eproto
namespace lotus {
namespace google {
namespace protobuf {

// ===================================================================

void Empty::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Empty::Empty()
  : ::lotus::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaultsEmpty();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Empty)
}
Empty::Empty(::lotus::google::protobuf::Arena* arena)
  : ::lotus::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaultsEmpty();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Empty)
}
Empty::Empty(const Empty& from)
  : ::lotus::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Empty)
}

void Empty::SharedCtor() {
  _cached_size_ = 0;
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:google.protobuf.Empty)
  SharedDtor();
}

void Empty::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void Empty::ArenaDtor(void* object) {
  Empty* _this = reinterpret_cast< Empty* >(object);
  (void)_this;
}
void Empty::RegisterArenaDtor(::lotus::google::protobuf::Arena* arena) {
}
void Empty::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::lotus::google::protobuf::Descriptor* Empty::descriptor() {
  ::protobuf_google_2fprotobuf_2fempty_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2fempty_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Empty& Empty::default_instance() {
  ::protobuf_google_2fprotobuf_2fempty_2eproto::InitDefaultsEmpty();
  return *internal_default_instance();
}

Empty* Empty::New(::lotus::google::protobuf::Arena* arena) const {
  return ::lotus::google::protobuf::Arena::CreateMessage<Empty>(arena);
}

void Empty::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Empty)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool Empty::MergePartialFromCodedStream(
    ::lotus::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::lotus::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Empty)
  for (;;) {
    ::std::pair< ::lotus::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::lotus::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Empty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Empty)
  return false;
#undef DO_
}

void Empty::SerializeWithCachedSizes(
    ::lotus::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Empty)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::lotus::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.Empty)
}

::lotus::google::protobuf::uint8* Empty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::lotus::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Empty)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::lotus::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Empty)
  return target;
}

size_t Empty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Empty)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::lotus::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::lotus::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Empty::MergeFrom(const ::lotus::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  const Empty* source =
      ::lotus::google::protobuf::internal::DynamicCastToGenerated<const Empty>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Empty)
    ::lotus::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Empty)
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void Empty::CopyFrom(const ::lotus::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {
  return true;
}

void Empty::Swap(Empty* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Empty* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Empty::UnsafeArenaSwap(Empty* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Empty::InternalSwap(Empty* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::lotus::google::protobuf::Metadata Empty::GetMetadata() const {
  protobuf_google_2fprotobuf_2fempty_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2fempty_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
}  // namespace lotus

// @@protoc_insertion_point(global_scope)