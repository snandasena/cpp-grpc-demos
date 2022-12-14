// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: number.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_number_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_number_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_number_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_number_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_number_2eproto;
class NumberRequest;
struct NumberRequestDefaultTypeInternal;
extern NumberRequestDefaultTypeInternal _NumberRequest_default_instance_;
class NumberResponse;
struct NumberResponseDefaultTypeInternal;
extern NumberResponseDefaultTypeInternal _NumberResponse_default_instance_;
class RangeRequest;
struct RangeRequestDefaultTypeInternal;
extern RangeRequestDefaultTypeInternal _RangeRequest_default_instance_;
class RangeResponse;
struct RangeResponseDefaultTypeInternal;
extern RangeResponseDefaultTypeInternal _RangeResponse_default_instance_;
class SumRequest;
struct SumRequestDefaultTypeInternal;
extern SumRequestDefaultTypeInternal _SumRequest_default_instance_;
class SumResponse;
struct SumResponseDefaultTypeInternal;
extern SumResponseDefaultTypeInternal _SumResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::NumberRequest* Arena::CreateMaybeMessage<::NumberRequest>(Arena*);
template<> ::NumberResponse* Arena::CreateMaybeMessage<::NumberResponse>(Arena*);
template<> ::RangeRequest* Arena::CreateMaybeMessage<::RangeRequest>(Arena*);
template<> ::RangeResponse* Arena::CreateMaybeMessage<::RangeResponse>(Arena*);
template<> ::SumRequest* Arena::CreateMaybeMessage<::SumRequest>(Arena*);
template<> ::SumResponse* Arena::CreateMaybeMessage<::SumResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class NumberRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:NumberRequest) */ {
 public:
  inline NumberRequest() : NumberRequest(nullptr) {}
  explicit PROTOBUF_CONSTEXPR NumberRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NumberRequest(const NumberRequest& from);
  NumberRequest(NumberRequest&& from) noexcept
    : NumberRequest() {
    *this = ::std::move(from);
  }

  inline NumberRequest& operator=(const NumberRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline NumberRequest& operator=(NumberRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NumberRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const NumberRequest* internal_default_instance() {
    return reinterpret_cast<const NumberRequest*>(
               &_NumberRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NumberRequest& a, NumberRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(NumberRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NumberRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NumberRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NumberRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const NumberRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const NumberRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NumberRequest";
  }
  protected:
  explicit NumberRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:NumberRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_number_2eproto;
};
// -------------------------------------------------------------------

class NumberResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NumberResponse) */ {
 public:
  inline NumberResponse() : NumberResponse(nullptr) {}
  ~NumberResponse() override;
  explicit PROTOBUF_CONSTEXPR NumberResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NumberResponse(const NumberResponse& from);
  NumberResponse(NumberResponse&& from) noexcept
    : NumberResponse() {
    *this = ::std::move(from);
  }

  inline NumberResponse& operator=(const NumberResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline NumberResponse& operator=(NumberResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NumberResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const NumberResponse* internal_default_instance() {
    return reinterpret_cast<const NumberResponse*>(
               &_NumberResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NumberResponse& a, NumberResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(NumberResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NumberResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NumberResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NumberResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NumberResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NumberResponse& from) {
    NumberResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NumberResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NumberResponse";
  }
  protected:
  explicit NumberResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // uint64 value = 1;
  void clear_value();
  uint64_t value() const;
  void set_value(uint64_t value);
  private:
  uint64_t _internal_value() const;
  void _internal_set_value(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:NumberResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_number_2eproto;
};
// -------------------------------------------------------------------

class RangeRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RangeRequest) */ {
 public:
  inline RangeRequest() : RangeRequest(nullptr) {}
  ~RangeRequest() override;
  explicit PROTOBUF_CONSTEXPR RangeRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RangeRequest(const RangeRequest& from);
  RangeRequest(RangeRequest&& from) noexcept
    : RangeRequest() {
    *this = ::std::move(from);
  }

  inline RangeRequest& operator=(const RangeRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline RangeRequest& operator=(RangeRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RangeRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const RangeRequest* internal_default_instance() {
    return reinterpret_cast<const RangeRequest*>(
               &_RangeRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(RangeRequest& a, RangeRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(RangeRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RangeRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RangeRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RangeRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RangeRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RangeRequest& from) {
    RangeRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RangeRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RangeRequest";
  }
  protected:
  explicit RangeRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMinFieldNumber = 1,
    kMaxFieldNumber = 2,
  };
  // uint64 min = 1;
  void clear_min();
  uint64_t min() const;
  void set_min(uint64_t value);
  private:
  uint64_t _internal_min() const;
  void _internal_set_min(uint64_t value);
  public:

  // uint64 max = 2;
  void clear_max();
  uint64_t max() const;
  void set_max(uint64_t value);
  private:
  uint64_t _internal_max() const;
  void _internal_set_max(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:RangeRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t min_;
    uint64_t max_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_number_2eproto;
};
// -------------------------------------------------------------------

class RangeResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RangeResponse) */ {
 public:
  inline RangeResponse() : RangeResponse(nullptr) {}
  ~RangeResponse() override;
  explicit PROTOBUF_CONSTEXPR RangeResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RangeResponse(const RangeResponse& from);
  RangeResponse(RangeResponse&& from) noexcept
    : RangeResponse() {
    *this = ::std::move(from);
  }

  inline RangeResponse& operator=(const RangeResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline RangeResponse& operator=(RangeResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RangeResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const RangeResponse* internal_default_instance() {
    return reinterpret_cast<const RangeResponse*>(
               &_RangeResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(RangeResponse& a, RangeResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(RangeResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RangeResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RangeResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RangeResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RangeResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RangeResponse& from) {
    RangeResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RangeResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RangeResponse";
  }
  protected:
  explicit RangeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // uint64 value = 1;
  void clear_value();
  uint64_t value() const;
  void set_value(uint64_t value);
  private:
  uint64_t _internal_value() const;
  void _internal_set_value(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:RangeResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_number_2eproto;
};
// -------------------------------------------------------------------

class SumRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SumRequest) */ {
 public:
  inline SumRequest() : SumRequest(nullptr) {}
  ~SumRequest() override;
  explicit PROTOBUF_CONSTEXPR SumRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SumRequest(const SumRequest& from);
  SumRequest(SumRequest&& from) noexcept
    : SumRequest() {
    *this = ::std::move(from);
  }

  inline SumRequest& operator=(const SumRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SumRequest& operator=(SumRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SumRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SumRequest* internal_default_instance() {
    return reinterpret_cast<const SumRequest*>(
               &_SumRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(SumRequest& a, SumRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SumRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SumRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SumRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SumRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SumRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SumRequest& from) {
    SumRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SumRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SumRequest";
  }
  protected:
  explicit SumRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // uint64 value = 1;
  void clear_value();
  uint64_t value() const;
  void set_value(uint64_t value);
  private:
  uint64_t _internal_value() const;
  void _internal_set_value(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:SumRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_number_2eproto;
};
// -------------------------------------------------------------------

class SumResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SumResponse) */ {
 public:
  inline SumResponse() : SumResponse(nullptr) {}
  ~SumResponse() override;
  explicit PROTOBUF_CONSTEXPR SumResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SumResponse(const SumResponse& from);
  SumResponse(SumResponse&& from) noexcept
    : SumResponse() {
    *this = ::std::move(from);
  }

  inline SumResponse& operator=(const SumResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SumResponse& operator=(SumResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SumResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SumResponse* internal_default_instance() {
    return reinterpret_cast<const SumResponse*>(
               &_SumResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    5;

  friend void swap(SumResponse& a, SumResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SumResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SumResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SumResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SumResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SumResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SumResponse& from) {
    SumResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SumResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SumResponse";
  }
  protected:
  explicit SumResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // uint64 value = 1;
  void clear_value();
  uint64_t value() const;
  void set_value(uint64_t value);
  private:
  uint64_t _internal_value() const;
  void _internal_set_value(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:SumResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint64_t value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_number_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NumberRequest

// -------------------------------------------------------------------

// NumberResponse

// uint64 value = 1;
inline void NumberResponse::clear_value() {
  _impl_.value_ = uint64_t{0u};
}
inline uint64_t NumberResponse::_internal_value() const {
  return _impl_.value_;
}
inline uint64_t NumberResponse::value() const {
  // @@protoc_insertion_point(field_get:NumberResponse.value)
  return _internal_value();
}
inline void NumberResponse::_internal_set_value(uint64_t value) {
  
  _impl_.value_ = value;
}
inline void NumberResponse::set_value(uint64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:NumberResponse.value)
}

// -------------------------------------------------------------------

// RangeRequest

// uint64 min = 1;
inline void RangeRequest::clear_min() {
  _impl_.min_ = uint64_t{0u};
}
inline uint64_t RangeRequest::_internal_min() const {
  return _impl_.min_;
}
inline uint64_t RangeRequest::min() const {
  // @@protoc_insertion_point(field_get:RangeRequest.min)
  return _internal_min();
}
inline void RangeRequest::_internal_set_min(uint64_t value) {
  
  _impl_.min_ = value;
}
inline void RangeRequest::set_min(uint64_t value) {
  _internal_set_min(value);
  // @@protoc_insertion_point(field_set:RangeRequest.min)
}

// uint64 max = 2;
inline void RangeRequest::clear_max() {
  _impl_.max_ = uint64_t{0u};
}
inline uint64_t RangeRequest::_internal_max() const {
  return _impl_.max_;
}
inline uint64_t RangeRequest::max() const {
  // @@protoc_insertion_point(field_get:RangeRequest.max)
  return _internal_max();
}
inline void RangeRequest::_internal_set_max(uint64_t value) {
  
  _impl_.max_ = value;
}
inline void RangeRequest::set_max(uint64_t value) {
  _internal_set_max(value);
  // @@protoc_insertion_point(field_set:RangeRequest.max)
}

// -------------------------------------------------------------------

// RangeResponse

// uint64 value = 1;
inline void RangeResponse::clear_value() {
  _impl_.value_ = uint64_t{0u};
}
inline uint64_t RangeResponse::_internal_value() const {
  return _impl_.value_;
}
inline uint64_t RangeResponse::value() const {
  // @@protoc_insertion_point(field_get:RangeResponse.value)
  return _internal_value();
}
inline void RangeResponse::_internal_set_value(uint64_t value) {
  
  _impl_.value_ = value;
}
inline void RangeResponse::set_value(uint64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:RangeResponse.value)
}

// -------------------------------------------------------------------

// SumRequest

// uint64 value = 1;
inline void SumRequest::clear_value() {
  _impl_.value_ = uint64_t{0u};
}
inline uint64_t SumRequest::_internal_value() const {
  return _impl_.value_;
}
inline uint64_t SumRequest::value() const {
  // @@protoc_insertion_point(field_get:SumRequest.value)
  return _internal_value();
}
inline void SumRequest::_internal_set_value(uint64_t value) {
  
  _impl_.value_ = value;
}
inline void SumRequest::set_value(uint64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:SumRequest.value)
}

// -------------------------------------------------------------------

// SumResponse

// uint64 value = 1;
inline void SumResponse::clear_value() {
  _impl_.value_ = uint64_t{0u};
}
inline uint64_t SumResponse::_internal_value() const {
  return _impl_.value_;
}
inline uint64_t SumResponse::value() const {
  // @@protoc_insertion_point(field_get:SumResponse.value)
  return _internal_value();
}
inline void SumResponse::_internal_set_value(uint64_t value) {
  
  _impl_.value_ = value;
}
inline void SumResponse::set_value(uint64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:SumResponse.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_number_2eproto
