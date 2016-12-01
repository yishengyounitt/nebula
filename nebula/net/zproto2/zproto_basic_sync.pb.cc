// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zproto_basic_sync.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "zproto_basic_sync.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zproto {

namespace {

const ::google::protobuf::Descriptor* RpcRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* RpcOk_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcOk_reflection_ = NULL;
const ::google::protobuf::Descriptor* RpcError_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcError_reflection_ = NULL;
const ::google::protobuf::Descriptor* RpcFloodWait_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcFloodWait_reflection_ = NULL;
const ::google::protobuf::Descriptor* RpcInternalError_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcInternalError_reflection_ = NULL;
const ::google::protobuf::Descriptor* Push_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Push_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_zproto_5fbasic_5fsync_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_zproto_5fbasic_5fsync_2eproto() {
  protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "zproto_basic_sync.proto");
  GOOGLE_CHECK(file != NULL);
  RpcRequest_descriptor_ = file->message_type(0);
  static const int RpcRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequest, method_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequest, body_),
  };
  RpcRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcRequest_descriptor_,
      RpcRequest::default_instance_,
      RpcRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcRequest, _is_default_instance_));
  RpcOk_descriptor_ = file->message_type(1);
  static const int RpcOk_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcOk, method_response_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcOk, body_),
  };
  RpcOk_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcOk_descriptor_,
      RpcOk::default_instance_,
      RpcOk_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcOk),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcOk, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcOk, _is_default_instance_));
  RpcError_descriptor_ = file->message_type(2);
  static const int RpcError_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, error_tag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, user_message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, can_try_again_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, error_data_),
  };
  RpcError_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcError_descriptor_,
      RpcError::default_instance_,
      RpcError_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcError),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcError, _is_default_instance_));
  RpcFloodWait_descriptor_ = file->message_type(3);
  static const int RpcFloodWait_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcFloodWait, delay_),
  };
  RpcFloodWait_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcFloodWait_descriptor_,
      RpcFloodWait::default_instance_,
      RpcFloodWait_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcFloodWait),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcFloodWait, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcFloodWait, _is_default_instance_));
  RpcInternalError_descriptor_ = file->message_type(4);
  static const int RpcInternalError_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcInternalError, can_try_again_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcInternalError, try_again_delay_),
  };
  RpcInternalError_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcInternalError_descriptor_,
      RpcInternalError::default_instance_,
      RpcInternalError_offsets_,
      -1,
      -1,
      -1,
      sizeof(RpcInternalError),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcInternalError, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcInternalError, _is_default_instance_));
  Push_descriptor_ = file->message_type(5);
  static const int Push_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Push, update_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Push, body_),
  };
  Push_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Push_descriptor_,
      Push::default_instance_,
      Push_offsets_,
      -1,
      -1,
      -1,
      sizeof(Push),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Push, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Push, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_zproto_5fbasic_5fsync_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcRequest_descriptor_, &RpcRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcOk_descriptor_, &RpcOk::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcError_descriptor_, &RpcError::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcFloodWait_descriptor_, &RpcFloodWait::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcInternalError_descriptor_, &RpcInternalError::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Push_descriptor_, &Push::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_zproto_5fbasic_5fsync_2eproto() {
  delete RpcRequest::default_instance_;
  delete RpcRequest_reflection_;
  delete RpcOk::default_instance_;
  delete RpcOk_reflection_;
  delete RpcError::default_instance_;
  delete RpcError_reflection_;
  delete RpcFloodWait::default_instance_;
  delete RpcFloodWait_reflection_;
  delete RpcInternalError::default_instance_;
  delete RpcInternalError_reflection_;
  delete Push::default_instance_;
  delete Push_reflection_;
}

void protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027zproto_basic_sync.proto\022\006zproto\"-\n\nRpc"
    "Request\022\021\n\tmethod_id\030\001 \001(\005\022\014\n\004body\030\002 \001(\014"
    "\"1\n\005RpcOk\022\032\n\022method_response_id\030\001 \001(\005\022\014\n"
    "\004body\030\002 \001(\014\"r\n\010RpcError\022\022\n\nerror_code\030\001 "
    "\001(\005\022\021\n\terror_tag\030\002 \001(\t\022\024\n\014user_message\030\003"
    " \001(\t\022\025\n\rcan_try_again\030\004 \001(\010\022\022\n\nerror_dat"
    "a\030\005 \001(\014\"\035\n\014RpcFloodWait\022\r\n\005delay\030\001 \001(\005\"B"
    "\n\020RpcInternalError\022\025\n\rcan_try_again\030\001 \001("
    "\010\022\027\n\017try_again_delay\030\002 \001(\005\"\'\n\004Push\022\021\n\tup"
    "date_id\030\001 \001(\005\022\014\n\004body\030\002 \001(\014B*\n\025com.nebul"
    "a.net.zprotoB\017ZProtoBasicSyncH\002b\006proto3", 439);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zproto_basic_sync.proto", &protobuf_RegisterTypes);
  RpcRequest::default_instance_ = new RpcRequest();
  RpcOk::default_instance_ = new RpcOk();
  RpcError::default_instance_ = new RpcError();
  RpcFloodWait::default_instance_ = new RpcFloodWait();
  RpcInternalError::default_instance_ = new RpcInternalError();
  Push::default_instance_ = new Push();
  RpcRequest::default_instance_->InitAsDefaultInstance();
  RpcOk::default_instance_->InitAsDefaultInstance();
  RpcError::default_instance_->InitAsDefaultInstance();
  RpcFloodWait::default_instance_->InitAsDefaultInstance();
  RpcInternalError::default_instance_->InitAsDefaultInstance();
  Push::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_zproto_5fbasic_5fsync_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_zproto_5fbasic_5fsync_2eproto {
  StaticDescriptorInitializer_zproto_5fbasic_5fsync_2eproto() {
    protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  }
} static_descriptor_initializer_zproto_5fbasic_5fsync_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcRequest::kMethodIdFieldNumber;
const int RpcRequest::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcRequest::RpcRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RpcRequest)
}

void RpcRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcRequest::RpcRequest(const RpcRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.RpcRequest)
}

void RpcRequest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  method_id_ = 0;
  body_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RpcRequest::~RpcRequest() {
  // @@protoc_insertion_point(destructor:zproto.RpcRequest)
  SharedDtor();
}

void RpcRequest::SharedDtor() {
  body_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcRequest_descriptor_;
}

const RpcRequest& RpcRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

RpcRequest* RpcRequest::default_instance_ = NULL;

RpcRequest* RpcRequest::New(::google::protobuf::Arena* arena) const {
  RpcRequest* n = new RpcRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcRequest::Swap(RpcRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcRequest::InternalSwap(RpcRequest* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RpcRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcRequest_descriptor_;
  metadata.reflection = RpcRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcRequest

// optional int32 method_id = 1;
void RpcRequest::clear_method_id() {
  method_id_ = 0;
}
 ::google::protobuf::int32 RpcRequest::method_id() const {
  // @@protoc_insertion_point(field_get:zproto.RpcRequest.method_id)
  return method_id_;
}
 void RpcRequest::set_method_id(::google::protobuf::int32 value) {
  
  method_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcRequest.method_id)
}

// optional bytes body = 2;
void RpcRequest::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcRequest::body() const {
  // @@protoc_insertion_point(field_get:zproto.RpcRequest.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcRequest::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.RpcRequest.body)
}
 void RpcRequest::set_body(const char* value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.RpcRequest.body)
}
 void RpcRequest::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.RpcRequest.body)
}
 ::std::string* RpcRequest::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:zproto.RpcRequest.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcRequest::release_body() {
  // @@protoc_insertion_point(field_release:zproto.RpcRequest.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcRequest::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:zproto.RpcRequest.body)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcOk::kMethodResponseIdFieldNumber;
const int RpcOk::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcOk::RpcOk()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RpcOk)
}

void RpcOk::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcOk::RpcOk(const RpcOk& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.RpcOk)
}

void RpcOk::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  method_response_id_ = 0;
  body_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RpcOk::~RpcOk() {
  // @@protoc_insertion_point(destructor:zproto.RpcOk)
  SharedDtor();
}

void RpcOk::SharedDtor() {
  body_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcOk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcOk::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcOk_descriptor_;
}

const RpcOk& RpcOk::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

RpcOk* RpcOk::default_instance_ = NULL;

RpcOk* RpcOk::New(::google::protobuf::Arena* arena) const {
  RpcOk* n = new RpcOk;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcOk::Swap(RpcOk* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcOk::InternalSwap(RpcOk* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RpcOk::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcOk_descriptor_;
  metadata.reflection = RpcOk_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcOk

// optional int32 method_response_id = 1;
void RpcOk::clear_method_response_id() {
  method_response_id_ = 0;
}
 ::google::protobuf::int32 RpcOk::method_response_id() const {
  // @@protoc_insertion_point(field_get:zproto.RpcOk.method_response_id)
  return method_response_id_;
}
 void RpcOk::set_method_response_id(::google::protobuf::int32 value) {
  
  method_response_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcOk.method_response_id)
}

// optional bytes body = 2;
void RpcOk::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcOk::body() const {
  // @@protoc_insertion_point(field_get:zproto.RpcOk.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcOk::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.RpcOk.body)
}
 void RpcOk::set_body(const char* value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.RpcOk.body)
}
 void RpcOk::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.RpcOk.body)
}
 ::std::string* RpcOk::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:zproto.RpcOk.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcOk::release_body() {
  // @@protoc_insertion_point(field_release:zproto.RpcOk.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcOk::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:zproto.RpcOk.body)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcError::kErrorCodeFieldNumber;
const int RpcError::kErrorTagFieldNumber;
const int RpcError::kUserMessageFieldNumber;
const int RpcError::kCanTryAgainFieldNumber;
const int RpcError::kErrorDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcError::RpcError()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RpcError)
}

void RpcError::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcError::RpcError(const RpcError& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.RpcError)
}

void RpcError::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  error_code_ = 0;
  error_tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  can_try_again_ = false;
  error_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RpcError::~RpcError() {
  // @@protoc_insertion_point(destructor:zproto.RpcError)
  SharedDtor();
}

void RpcError::SharedDtor() {
  error_tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  user_message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcError::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcError::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcError_descriptor_;
}

const RpcError& RpcError::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

RpcError* RpcError::default_instance_ = NULL;

RpcError* RpcError::New(::google::protobuf::Arena* arena) const {
  RpcError* n = new RpcError;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcError::Swap(RpcError* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcError::InternalSwap(RpcError* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RpcError::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcError_descriptor_;
  metadata.reflection = RpcError_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcError

// optional int32 error_code = 1;
void RpcError::clear_error_code() {
  error_code_ = 0;
}
 ::google::protobuf::int32 RpcError::error_code() const {
  // @@protoc_insertion_point(field_get:zproto.RpcError.error_code)
  return error_code_;
}
 void RpcError::set_error_code(::google::protobuf::int32 value) {
  
  error_code_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcError.error_code)
}

// optional string error_tag = 2;
void RpcError::clear_error_tag() {
  error_tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcError::error_tag() const {
  // @@protoc_insertion_point(field_get:zproto.RpcError.error_tag)
  return error_tag_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_error_tag(const ::std::string& value) {
  
  error_tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.RpcError.error_tag)
}
 void RpcError::set_error_tag(const char* value) {
  
  error_tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.RpcError.error_tag)
}
 void RpcError::set_error_tag(const char* value, size_t size) {
  
  error_tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.RpcError.error_tag)
}
 ::std::string* RpcError::mutable_error_tag() {
  
  // @@protoc_insertion_point(field_mutable:zproto.RpcError.error_tag)
  return error_tag_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcError::release_error_tag() {
  // @@protoc_insertion_point(field_release:zproto.RpcError.error_tag)
  
  return error_tag_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_allocated_error_tag(::std::string* error_tag) {
  if (error_tag != NULL) {
    
  } else {
    
  }
  error_tag_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_tag);
  // @@protoc_insertion_point(field_set_allocated:zproto.RpcError.error_tag)
}

// optional string user_message = 3;
void RpcError::clear_user_message() {
  user_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcError::user_message() const {
  // @@protoc_insertion_point(field_get:zproto.RpcError.user_message)
  return user_message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_user_message(const ::std::string& value) {
  
  user_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.RpcError.user_message)
}
 void RpcError::set_user_message(const char* value) {
  
  user_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.RpcError.user_message)
}
 void RpcError::set_user_message(const char* value, size_t size) {
  
  user_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.RpcError.user_message)
}
 ::std::string* RpcError::mutable_user_message() {
  
  // @@protoc_insertion_point(field_mutable:zproto.RpcError.user_message)
  return user_message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcError::release_user_message() {
  // @@protoc_insertion_point(field_release:zproto.RpcError.user_message)
  
  return user_message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_allocated_user_message(::std::string* user_message) {
  if (user_message != NULL) {
    
  } else {
    
  }
  user_message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_message);
  // @@protoc_insertion_point(field_set_allocated:zproto.RpcError.user_message)
}

// optional bool can_try_again = 4;
void RpcError::clear_can_try_again() {
  can_try_again_ = false;
}
 bool RpcError::can_try_again() const {
  // @@protoc_insertion_point(field_get:zproto.RpcError.can_try_again)
  return can_try_again_;
}
 void RpcError::set_can_try_again(bool value) {
  
  can_try_again_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcError.can_try_again)
}

// optional bytes error_data = 5;
void RpcError::clear_error_data() {
  error_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RpcError::error_data() const {
  // @@protoc_insertion_point(field_get:zproto.RpcError.error_data)
  return error_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_error_data(const ::std::string& value) {
  
  error_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.RpcError.error_data)
}
 void RpcError::set_error_data(const char* value) {
  
  error_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.RpcError.error_data)
}
 void RpcError::set_error_data(const void* value, size_t size) {
  
  error_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.RpcError.error_data)
}
 ::std::string* RpcError::mutable_error_data() {
  
  // @@protoc_insertion_point(field_mutable:zproto.RpcError.error_data)
  return error_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcError::release_error_data() {
  // @@protoc_insertion_point(field_release:zproto.RpcError.error_data)
  
  return error_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcError::set_allocated_error_data(::std::string* error_data) {
  if (error_data != NULL) {
    
  } else {
    
  }
  error_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error_data);
  // @@protoc_insertion_point(field_set_allocated:zproto.RpcError.error_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcFloodWait::kDelayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcFloodWait::RpcFloodWait()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RpcFloodWait)
}

void RpcFloodWait::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcFloodWait::RpcFloodWait(const RpcFloodWait& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.RpcFloodWait)
}

void RpcFloodWait::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  delay_ = 0;
}

RpcFloodWait::~RpcFloodWait() {
  // @@protoc_insertion_point(destructor:zproto.RpcFloodWait)
  SharedDtor();
}

void RpcFloodWait::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RpcFloodWait::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcFloodWait::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcFloodWait_descriptor_;
}

const RpcFloodWait& RpcFloodWait::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

RpcFloodWait* RpcFloodWait::default_instance_ = NULL;

RpcFloodWait* RpcFloodWait::New(::google::protobuf::Arena* arena) const {
  RpcFloodWait* n = new RpcFloodWait;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcFloodWait::Swap(RpcFloodWait* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcFloodWait::InternalSwap(RpcFloodWait* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RpcFloodWait::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcFloodWait_descriptor_;
  metadata.reflection = RpcFloodWait_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcFloodWait

// optional int32 delay = 1;
void RpcFloodWait::clear_delay() {
  delay_ = 0;
}
 ::google::protobuf::int32 RpcFloodWait::delay() const {
  // @@protoc_insertion_point(field_get:zproto.RpcFloodWait.delay)
  return delay_;
}
 void RpcFloodWait::set_delay(::google::protobuf::int32 value) {
  
  delay_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcFloodWait.delay)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcInternalError::kCanTryAgainFieldNumber;
const int RpcInternalError::kTryAgainDelayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcInternalError::RpcInternalError()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RpcInternalError)
}

void RpcInternalError::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RpcInternalError::RpcInternalError(const RpcInternalError& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.RpcInternalError)
}

void RpcInternalError::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  can_try_again_ = false;
  try_again_delay_ = 0;
}

RpcInternalError::~RpcInternalError() {
  // @@protoc_insertion_point(destructor:zproto.RpcInternalError)
  SharedDtor();
}

void RpcInternalError::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RpcInternalError::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcInternalError::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcInternalError_descriptor_;
}

const RpcInternalError& RpcInternalError::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

RpcInternalError* RpcInternalError::default_instance_ = NULL;

RpcInternalError* RpcInternalError::New(::google::protobuf::Arena* arena) const {
  RpcInternalError* n = new RpcInternalError;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcInternalError::Swap(RpcInternalError* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcInternalError::InternalSwap(RpcInternalError* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RpcInternalError::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcInternalError_descriptor_;
  metadata.reflection = RpcInternalError_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcInternalError

// optional bool can_try_again = 1;
void RpcInternalError::clear_can_try_again() {
  can_try_again_ = false;
}
 bool RpcInternalError::can_try_again() const {
  // @@protoc_insertion_point(field_get:zproto.RpcInternalError.can_try_again)
  return can_try_again_;
}
 void RpcInternalError::set_can_try_again(bool value) {
  
  can_try_again_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcInternalError.can_try_again)
}

// optional int32 try_again_delay = 2;
void RpcInternalError::clear_try_again_delay() {
  try_again_delay_ = 0;
}
 ::google::protobuf::int32 RpcInternalError::try_again_delay() const {
  // @@protoc_insertion_point(field_get:zproto.RpcInternalError.try_again_delay)
  return try_again_delay_;
}
 void RpcInternalError::set_try_again_delay(::google::protobuf::int32 value) {
  
  try_again_delay_ = value;
  // @@protoc_insertion_point(field_set:zproto.RpcInternalError.try_again_delay)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Push::kUpdateIdFieldNumber;
const int Push::kBodyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Push::Push()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Push)
}

void Push::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Push::Push(const Push& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zproto.Push)
}

void Push::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  update_id_ = 0;
  body_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Push::~Push() {
  // @@protoc_insertion_point(destructor:zproto.Push)
  SharedDtor();
}

void Push::SharedDtor() {
  body_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Push::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Push::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Push_descriptor_;
}

const Push& Push::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zproto_5fbasic_5fsync_2eproto();
  return *default_instance_;
}

Push* Push::default_instance_ = NULL;

Push* Push::New(::google::protobuf::Arena* arena) const {
  Push* n = new Push;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Push::Swap(Push* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Push::InternalSwap(Push* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Push::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Push_descriptor_;
  metadata.reflection = Push_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Push

// optional int32 update_id = 1;
void Push::clear_update_id() {
  update_id_ = 0;
}
 ::google::protobuf::int32 Push::update_id() const {
  // @@protoc_insertion_point(field_get:zproto.Push.update_id)
  return update_id_;
}
 void Push::set_update_id(::google::protobuf::int32 value) {
  
  update_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.Push.update_id)
}

// optional bytes body = 2;
void Push::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Push::body() const {
  // @@protoc_insertion_point(field_get:zproto.Push.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Push::set_body(const ::std::string& value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.Push.body)
}
 void Push::set_body(const char* value) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.Push.body)
}
 void Push::set_body(const void* value, size_t size) {
  
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.Push.body)
}
 ::std::string* Push::mutable_body() {
  
  // @@protoc_insertion_point(field_mutable:zproto.Push.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Push::release_body() {
  // @@protoc_insertion_point(field_release:zproto.Push.body)
  
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Push::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    
  } else {
    
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:zproto.Push.body)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)
