// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/field_mask.proto

#include <Protobuf/lotus/google/protobuf/field_mask.pb.h>

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
class FieldMaskDefaultTypeInternal {
 public:
  ::lotus::google::protobuf::internal::ExplicitlyConstructed<FieldMask>
      _instance;
} _FieldMask_default_instance_;
}  // namespace protobuf
}  // namespace google
}  // namespace lotus
namespace protobuf_google_2fprotobuf_2ffield_5fmask_2eproto {
void InitDefaultsFieldMaskImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::lotus::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::lotus::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::lotus::google::protobuf::_FieldMask_default_instance_;
    new (ptr) ::lotus::google::protobuf::FieldMask();
    ::lotus::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lotus::google::protobuf::FieldMask::InitAsDefaultInstance();
}

void InitDefaultsFieldMask() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::lotus::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFieldMaskImpl);
}

::lotus::google::protobuf::Metadata file_level_metadata[1];

const ::lotus::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lotus::google::protobuf::FieldMask, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lotus::google::protobuf::FieldMask, paths_),
};
static const ::lotus::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::lotus::google::protobuf::FieldMask)},
};

static ::lotus::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::lotus::google::protobuf::Message*>(&::lotus::google::protobuf::_FieldMask_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::lotus::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/field_mask.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n google/protobuf/field_mask.proto\022\017goog"
      "le.protobuf\"\032\n\tFieldMask\022\r\n\005paths\030\001 \003(\tB"
      "\211\001\n\023com.google.protobufB\016FieldMaskProtoP"
      "\001Z9google.golang.org/genproto/protobuf/f"
      "ield_mask;field_mask\242\002\003GPB\252\002\036Google.Prot"
      "obuf.WellKnownTypesb\006proto3"
  };
  ::lotus::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 227);
  ::lotus::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/field_mask.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_google_2fprotobuf_2ffield_5fmask_2eproto
namespace lotus {
namespace google {
namespace protobuf {

// ===================================================================

void FieldMask::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FieldMask::kPathsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FieldMask::FieldMask()
  : ::lotus::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::InitDefaultsFieldMask();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.FieldMask)
}
FieldMask::FieldMask(const FieldMask& from)
  : ::lotus::google::protobuf::Message(),
      _internal_metadata_(NULL),
      paths_(from.paths_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.FieldMask)
}

void FieldMask::SharedCtor() {
  _cached_size_ = 0;
}

FieldMask::~FieldMask() {
  // @@protoc_insertion_point(destructor:google.protobuf.FieldMask)
  SharedDtor();
}

void FieldMask::SharedDtor() {
}

void FieldMask::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::lotus::google::protobuf::Descriptor* FieldMask::descriptor() {
  ::protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FieldMask& FieldMask::default_instance() {
  ::protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::InitDefaultsFieldMask();
  return *internal_default_instance();
}

FieldMask* FieldMask::New(::lotus::google::protobuf::Arena* arena) const {
  FieldMask* n = new FieldMask;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FieldMask::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FieldMask)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  paths_.Clear();
  _internal_metadata_.Clear();
}

bool FieldMask::MergePartialFromCodedStream(
    ::lotus::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::lotus::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.FieldMask)
  for (;;) {
    ::std::pair< ::lotus::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::lotus::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string paths = 1;
      case 1: {
        if (static_cast< ::lotus::google::protobuf::uint8>(tag) ==
            static_cast< ::lotus::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::lotus::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_paths()));
          DO_(::lotus::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->paths(this->paths_size() - 1).data(),
            static_cast<int>(this->paths(this->paths_size() - 1).length()),
            ::lotus::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.FieldMask.paths"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::lotus::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.FieldMask)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.FieldMask)
  return false;
#undef DO_
}

void FieldMask::SerializeWithCachedSizes(
    ::lotus::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.FieldMask)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string paths = 1;
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    ::lotus::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->paths(i).data(), static_cast<int>(this->paths(i).length()),
      ::lotus::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.FieldMask.paths");
    ::lotus::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->paths(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::lotus::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.FieldMask)
}

::lotus::google::protobuf::uint8* FieldMask::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::lotus::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FieldMask)
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string paths = 1;
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    ::lotus::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->paths(i).data(), static_cast<int>(this->paths(i).length()),
      ::lotus::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.FieldMask.paths");
    target = ::lotus::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->paths(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::lotus::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FieldMask)
  return target;
}

size_t FieldMask::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.FieldMask)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::lotus::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::lotus::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string paths = 1;
  total_size += 1 *
      ::lotus::google::protobuf::internal::FromIntSize(this->paths_size());
  for (int i = 0, n = this->paths_size(); i < n; i++) {
    total_size += ::lotus::google::protobuf::internal::WireFormatLite::StringSize(
      this->paths(i));
  }

  int cached_size = ::lotus::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FieldMask::MergeFrom(const ::lotus::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.FieldMask)
  GOOGLE_DCHECK_NE(&from, this);
  const FieldMask* source =
      ::lotus::google::protobuf::internal::DynamicCastToGenerated<const FieldMask>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.FieldMask)
    ::lotus::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.FieldMask)
    MergeFrom(*source);
  }
}

void FieldMask::MergeFrom(const FieldMask& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FieldMask)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::lotus::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  paths_.MergeFrom(from.paths_);
}

void FieldMask::CopyFrom(const ::lotus::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.FieldMask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FieldMask::CopyFrom(const FieldMask& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FieldMask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FieldMask::IsInitialized() const {
  return true;
}

void FieldMask::Swap(FieldMask* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FieldMask::InternalSwap(FieldMask* other) {
  using std::swap;
  paths_.InternalSwap(&other->paths_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::lotus::google::protobuf::Metadata FieldMask::GetMetadata() const {
  protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2ffield_5fmask_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
}  // namespace lotus

// @@protoc_insertion_point(global_scope)
