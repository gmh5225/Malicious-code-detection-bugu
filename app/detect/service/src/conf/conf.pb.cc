// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: conf.proto

#include "conf.pb.h"

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
namespace config {
constexpr Bootstrap::Bootstrap(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : server_(nullptr){}
struct BootstrapDefaultTypeInternal {
  constexpr BootstrapDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BootstrapDefaultTypeInternal() {}
  union {
    Bootstrap _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BootstrapDefaultTypeInternal _Bootstrap_default_instance_;
constexpr Server_GRPC::Server_GRPC(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : network_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , addr_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , timeout_(nullptr){}
struct Server_GRPCDefaultTypeInternal {
  constexpr Server_GRPCDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Server_GRPCDefaultTypeInternal() {}
  union {
    Server_GRPC _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Server_GRPCDefaultTypeInternal _Server_GRPC_default_instance_;
constexpr Server::Server(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : grpc_(nullptr){}
struct ServerDefaultTypeInternal {
  constexpr ServerDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ServerDefaultTypeInternal() {}
  union {
    Server _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ServerDefaultTypeInternal _Server_default_instance_;
}  // namespace config
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_conf_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_conf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_conf_2eproto = nullptr;

const uint32_t TableStruct_conf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::config::Bootstrap, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::config::Bootstrap, server_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::config::Server_GRPC, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::config::Server_GRPC, network_),
  PROTOBUF_FIELD_OFFSET(::config::Server_GRPC, addr_),
  PROTOBUF_FIELD_OFFSET(::config::Server_GRPC, timeout_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::config::Server, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::config::Server, grpc_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::config::Bootstrap)},
  { 7, -1, -1, sizeof(::config::Server_GRPC)},
  { 16, -1, -1, sizeof(::config::Server)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::config::_Bootstrap_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::config::_Server_GRPC_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::config::_Server_default_instance_),
};

const char descriptor_table_protodef_conf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nconf.proto\022\006config\032\036google/protobuf/du"
  "ration.proto\"+\n\tBootstrap\022\036\n\006server\030\001 \001("
  "\0132\016.config.Server\"~\n\006Server\022!\n\004grpc\030\001 \001("
  "\0132\023.config.Server.GRPC\032Q\n\004GRPC\022\017\n\007networ"
  "k\030\001 \001(\t\022\014\n\004addr\030\002 \001(\t\022*\n\007timeout\030\003 \001(\0132\031"
  ".google.protobuf.Durationb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_conf_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_conf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_conf_2eproto = {
  false, false, 233, descriptor_table_protodef_conf_2eproto, "conf.proto", 
  &descriptor_table_conf_2eproto_once, descriptor_table_conf_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_conf_2eproto::offsets,
  file_level_metadata_conf_2eproto, file_level_enum_descriptors_conf_2eproto, file_level_service_descriptors_conf_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_conf_2eproto_getter() {
  return &descriptor_table_conf_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_conf_2eproto(&descriptor_table_conf_2eproto);
namespace config {

// ===================================================================

class Bootstrap::_Internal {
 public:
  static const ::config::Server& server(const Bootstrap* msg);
};

const ::config::Server&
Bootstrap::_Internal::server(const Bootstrap* msg) {
  return *msg->server_;
}
Bootstrap::Bootstrap(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:config.Bootstrap)
}
Bootstrap::Bootstrap(const Bootstrap& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_server()) {
    server_ = new ::config::Server(*from.server_);
  } else {
    server_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:config.Bootstrap)
}

inline void Bootstrap::SharedCtor() {
server_ = nullptr;
}

Bootstrap::~Bootstrap() {
  // @@protoc_insertion_point(destructor:config.Bootstrap)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Bootstrap::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete server_;
}

void Bootstrap::ArenaDtor(void* object) {
  Bootstrap* _this = reinterpret_cast< Bootstrap* >(object);
  (void)_this;
}
void Bootstrap::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Bootstrap::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Bootstrap::Clear() {
// @@protoc_insertion_point(message_clear_start:config.Bootstrap)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && server_ != nullptr) {
    delete server_;
  }
  server_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Bootstrap::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .config.Server server = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_server(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Bootstrap::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:config.Bootstrap)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .config.Server server = 1;
  if (this->_internal_has_server()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::server(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.Bootstrap)
  return target;
}

size_t Bootstrap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.Bootstrap)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .config.Server server = 1;
  if (this->_internal_has_server()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *server_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Bootstrap::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Bootstrap::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Bootstrap::GetClassData() const { return &_class_data_; }

void Bootstrap::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Bootstrap *>(to)->MergeFrom(
      static_cast<const Bootstrap &>(from));
}


void Bootstrap::MergeFrom(const Bootstrap& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.Bootstrap)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_server()) {
    _internal_mutable_server()->::config::Server::MergeFrom(from._internal_server());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Bootstrap::CopyFrom(const Bootstrap& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.Bootstrap)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bootstrap::IsInitialized() const {
  return true;
}

void Bootstrap::InternalSwap(Bootstrap* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(server_, other->server_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Bootstrap::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_conf_2eproto_getter, &descriptor_table_conf_2eproto_once,
      file_level_metadata_conf_2eproto[0]);
}

// ===================================================================

class Server_GRPC::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Duration& timeout(const Server_GRPC* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Duration&
Server_GRPC::_Internal::timeout(const Server_GRPC* msg) {
  return *msg->timeout_;
}
void Server_GRPC::clear_timeout() {
  if (GetArenaForAllocation() == nullptr && timeout_ != nullptr) {
    delete timeout_;
  }
  timeout_ = nullptr;
}
Server_GRPC::Server_GRPC(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:config.Server.GRPC)
}
Server_GRPC::Server_GRPC(const Server_GRPC& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  network_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    network_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_network().empty()) {
    network_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_network(), 
      GetArenaForAllocation());
  }
  addr_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    addr_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_addr().empty()) {
    addr_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_addr(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_timeout()) {
    timeout_ = new ::PROTOBUF_NAMESPACE_ID::Duration(*from.timeout_);
  } else {
    timeout_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:config.Server.GRPC)
}

inline void Server_GRPC::SharedCtor() {
network_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  network_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
addr_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  addr_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
timeout_ = nullptr;
}

Server_GRPC::~Server_GRPC() {
  // @@protoc_insertion_point(destructor:config.Server.GRPC)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Server_GRPC::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  network_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  addr_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete timeout_;
}

void Server_GRPC::ArenaDtor(void* object) {
  Server_GRPC* _this = reinterpret_cast< Server_GRPC* >(object);
  (void)_this;
}
void Server_GRPC::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Server_GRPC::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Server_GRPC::Clear() {
// @@protoc_insertion_point(message_clear_start:config.Server.GRPC)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  network_.ClearToEmpty();
  addr_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && timeout_ != nullptr) {
    delete timeout_;
  }
  timeout_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Server_GRPC::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string network = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_network();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "config.Server.GRPC.network"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string addr = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_addr();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "config.Server.GRPC.addr"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Duration timeout = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_timeout(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Server_GRPC::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:config.Server.GRPC)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string network = 1;
  if (!this->_internal_network().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_network().data(), static_cast<int>(this->_internal_network().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "config.Server.GRPC.network");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_network(), target);
  }

  // string addr = 2;
  if (!this->_internal_addr().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_addr().data(), static_cast<int>(this->_internal_addr().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "config.Server.GRPC.addr");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_addr(), target);
  }

  // .google.protobuf.Duration timeout = 3;
  if (this->_internal_has_timeout()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::timeout(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.Server.GRPC)
  return target;
}

size_t Server_GRPC::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.Server.GRPC)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string network = 1;
  if (!this->_internal_network().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_network());
  }

  // string addr = 2;
  if (!this->_internal_addr().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_addr());
  }

  // .google.protobuf.Duration timeout = 3;
  if (this->_internal_has_timeout()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timeout_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Server_GRPC::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Server_GRPC::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Server_GRPC::GetClassData() const { return &_class_data_; }

void Server_GRPC::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Server_GRPC *>(to)->MergeFrom(
      static_cast<const Server_GRPC &>(from));
}


void Server_GRPC::MergeFrom(const Server_GRPC& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.Server.GRPC)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_network().empty()) {
    _internal_set_network(from._internal_network());
  }
  if (!from._internal_addr().empty()) {
    _internal_set_addr(from._internal_addr());
  }
  if (from._internal_has_timeout()) {
    _internal_mutable_timeout()->::PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(from._internal_timeout());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Server_GRPC::CopyFrom(const Server_GRPC& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.Server.GRPC)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Server_GRPC::IsInitialized() const {
  return true;
}

void Server_GRPC::InternalSwap(Server_GRPC* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &network_, lhs_arena,
      &other->network_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &addr_, lhs_arena,
      &other->addr_, rhs_arena
  );
  swap(timeout_, other->timeout_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Server_GRPC::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_conf_2eproto_getter, &descriptor_table_conf_2eproto_once,
      file_level_metadata_conf_2eproto[1]);
}

// ===================================================================

class Server::_Internal {
 public:
  static const ::config::Server_GRPC& grpc(const Server* msg);
};

const ::config::Server_GRPC&
Server::_Internal::grpc(const Server* msg) {
  return *msg->grpc_;
}
Server::Server(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:config.Server)
}
Server::Server(const Server& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_grpc()) {
    grpc_ = new ::config::Server_GRPC(*from.grpc_);
  } else {
    grpc_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:config.Server)
}

inline void Server::SharedCtor() {
grpc_ = nullptr;
}

Server::~Server() {
  // @@protoc_insertion_point(destructor:config.Server)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Server::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete grpc_;
}

void Server::ArenaDtor(void* object) {
  Server* _this = reinterpret_cast< Server* >(object);
  (void)_this;
}
void Server::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Server::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Server::Clear() {
// @@protoc_insertion_point(message_clear_start:config.Server)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && grpc_ != nullptr) {
    delete grpc_;
  }
  grpc_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Server::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .config.Server.GRPC grpc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_grpc(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Server::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:config.Server)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .config.Server.GRPC grpc = 1;
  if (this->_internal_has_grpc()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::grpc(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:config.Server)
  return target;
}

size_t Server::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:config.Server)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .config.Server.GRPC grpc = 1;
  if (this->_internal_has_grpc()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *grpc_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Server::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Server::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Server::GetClassData() const { return &_class_data_; }

void Server::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Server *>(to)->MergeFrom(
      static_cast<const Server &>(from));
}


void Server::MergeFrom(const Server& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:config.Server)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_grpc()) {
    _internal_mutable_grpc()->::config::Server_GRPC::MergeFrom(from._internal_grpc());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Server::CopyFrom(const Server& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:config.Server)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Server::IsInitialized() const {
  return true;
}

void Server::InternalSwap(Server* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(grpc_, other->grpc_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Server::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_conf_2eproto_getter, &descriptor_table_conf_2eproto_once,
      file_level_metadata_conf_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace config
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::config::Bootstrap* Arena::CreateMaybeMessage< ::config::Bootstrap >(Arena* arena) {
  return Arena::CreateMessageInternal< ::config::Bootstrap >(arena);
}
template<> PROTOBUF_NOINLINE ::config::Server_GRPC* Arena::CreateMaybeMessage< ::config::Server_GRPC >(Arena* arena) {
  return Arena::CreateMessageInternal< ::config::Server_GRPC >(arena);
}
template<> PROTOBUF_NOINLINE ::config::Server* Arena::CreateMaybeMessage< ::config::Server >(Arena* arena) {
  return Arena::CreateMessageInternal< ::config::Server >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>