// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_hello_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_hello_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_hello_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_hello_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hello_2eproto;
namespace tutorial {
class Hello;
struct HelloDefaultTypeInternal;
extern HelloDefaultTypeInternal _Hello_default_instance_;
}  // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template<> ::tutorial::Hello* Arena::CreateMaybeMessage<::tutorial::Hello>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tutorial {

// ===================================================================

class Hello final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.Hello) */ {
 public:
  inline Hello() : Hello(nullptr) {}
  ~Hello() override;
  explicit constexpr Hello(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Hello(const Hello& from);
  Hello(Hello&& from) noexcept
    : Hello() {
    *this = ::std::move(from);
  }

  inline Hello& operator=(const Hello& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hello& operator=(Hello&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const Hello& default_instance() {
    return *internal_default_instance();
  }
  static inline const Hello* internal_default_instance() {
    return reinterpret_cast<const Hello*>(
               &_Hello_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Hello& a, Hello& b) {
    a.Swap(&b);
  }
  inline void Swap(Hello* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Hello* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hello* New() const final {
    return new Hello();
  }

  Hello* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hello>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Hello& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Hello& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Hello* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.Hello";
  }
  protected:
  explicit Hello(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSayFieldNumber = 1,
  };
  // string say = 1;
  void clear_say();
  const std::string& say() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_say(ArgT0&& arg0, ArgT... args);
  std::string* mutable_say();
  PROTOBUF_MUST_USE_RESULT std::string* release_say();
  void set_allocated_say(std::string* say);
  private:
  const std::string& _internal_say() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_say(const std::string& value);
  std::string* _internal_mutable_say();
  public:

  // @@protoc_insertion_point(class_scope:tutorial.Hello)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr say_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_hello_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hello

// string say = 1;
inline void Hello::clear_say() {
  say_.ClearToEmpty();
}
inline const std::string& Hello::say() const {
  // @@protoc_insertion_point(field_get:tutorial.Hello.say)
  return _internal_say();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Hello::set_say(ArgT0&& arg0, ArgT... args) {
 
 say_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.Hello.say)
}
inline std::string* Hello::mutable_say() {
  std::string* _s = _internal_mutable_say();
  // @@protoc_insertion_point(field_mutable:tutorial.Hello.say)
  return _s;
}
inline const std::string& Hello::_internal_say() const {
  return say_.Get();
}
inline void Hello::_internal_set_say(const std::string& value) {
  
  say_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Hello::_internal_mutable_say() {
  
  return say_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Hello::release_say() {
  // @@protoc_insertion_point(field_release:tutorial.Hello.say)
  return say_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Hello::set_allocated_say(std::string* say) {
  if (say != nullptr) {
    
  } else {
    
  }
  say_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), say,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:tutorial.Hello.say)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_hello_2eproto