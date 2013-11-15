// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IoFile.proto

#ifndef PROTOBUF_IoFile_2eproto__INCLUDED
#define PROTOBUF_IoFile_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_IoFile_2eproto();
void protobuf_AssignDesc_IoFile_2eproto();
void protobuf_ShutdownFile_IoFile_2eproto();

class IoFileRequest;
class IoFileResponse;
class IoFileResponse_IoData;

// ===================================================================

class IoFileRequest : public ::google::protobuf::MessageLite {
 public:
  IoFileRequest();
  virtual ~IoFileRequest();
  
  IoFileRequest(const IoFileRequest& from);
  
  inline IoFileRequest& operator=(const IoFileRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const IoFileRequest& default_instance();
  
  void Swap(IoFileRequest* other);
  
  // implements Message ----------------------------------------------
  
  IoFileRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IoFileRequest& from);
  void MergeFrom(const IoFileRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint64 verifyCode = 1;
  inline bool has_verifycode() const;
  inline void clear_verifycode();
  static const int kVerifyCodeFieldNumber = 1;
  inline ::google::protobuf::uint64 verifycode() const;
  inline void set_verifycode(::google::protobuf::uint64 value);
  
  // required string requiredFile = 2;
  inline bool has_requiredfile() const;
  inline void clear_requiredfile();
  static const int kRequiredFileFieldNumber = 2;
  inline const ::std::string& requiredfile() const;
  inline void set_requiredfile(const ::std::string& value);
  inline void set_requiredfile(const char* value);
  inline void set_requiredfile(const char* value, size_t size);
  inline ::std::string* mutable_requiredfile();
  inline ::std::string* release_requiredfile();
  
  // required uint32 index = 3;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 3;
  inline ::google::protobuf::uint32 index() const;
  inline void set_index(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:message.IoFileRequest)
 private:
  inline void set_has_verifycode();
  inline void clear_has_verifycode();
  inline void set_has_requiredfile();
  inline void clear_has_requiredfile();
  inline void set_has_index();
  inline void clear_has_index();
  
  ::google::protobuf::uint64 verifycode_;
  ::std::string* requiredfile_;
  ::google::protobuf::uint32 index_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_IoFile_2eproto();
  friend void protobuf_AssignDesc_IoFile_2eproto();
  friend void protobuf_ShutdownFile_IoFile_2eproto();
  
  void InitAsDefaultInstance();
  static IoFileRequest* default_instance_;
};
// -------------------------------------------------------------------

class IoFileResponse_IoData : public ::google::protobuf::MessageLite {
 public:
  IoFileResponse_IoData();
  virtual ~IoFileResponse_IoData();
  
  IoFileResponse_IoData(const IoFileResponse_IoData& from);
  
  inline IoFileResponse_IoData& operator=(const IoFileResponse_IoData& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const IoFileResponse_IoData& default_instance();
  
  void Swap(IoFileResponse_IoData* other);
  
  // implements Message ----------------------------------------------
  
  IoFileResponse_IoData* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IoFileResponse_IoData& from);
  void MergeFrom(const IoFileResponse_IoData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated bytes data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::std::string& data(int index) const;
  inline ::std::string* mutable_data(int index);
  inline void set_data(int index, const ::std::string& value);
  inline void set_data(int index, const char* value);
  inline void set_data(int index, const void* value, size_t size);
  inline ::std::string* add_data();
  inline void add_data(const ::std::string& value);
  inline void add_data(const char* value);
  inline void add_data(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();
  
  // @@protoc_insertion_point(class_scope:message.IoFileResponse.IoData)
 private:
  
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_IoFile_2eproto();
  friend void protobuf_AssignDesc_IoFile_2eproto();
  friend void protobuf_ShutdownFile_IoFile_2eproto();
  
  void InitAsDefaultInstance();
  static IoFileResponse_IoData* default_instance_;
};
// -------------------------------------------------------------------

class IoFileResponse : public ::google::protobuf::MessageLite {
 public:
  IoFileResponse();
  virtual ~IoFileResponse();
  
  IoFileResponse(const IoFileResponse& from);
  
  inline IoFileResponse& operator=(const IoFileResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const IoFileResponse& default_instance();
  
  void Swap(IoFileResponse* other);
  
  // implements Message ----------------------------------------------
  
  IoFileResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IoFileResponse& from);
  void MergeFrom(const IoFileResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef IoFileResponse_IoData IoData;
  
  // accessors -------------------------------------------------------
  
  // optional sint32 result = 1 [default = 0];
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);
  
  // optional string info = 2;
  inline bool has_info() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 2;
  inline const ::std::string& info() const;
  inline void set_info(const ::std::string& value);
  inline void set_info(const char* value);
  inline void set_info(const char* value, size_t size);
  inline ::std::string* mutable_info();
  inline ::std::string* release_info();
  
  // optional uint32 maxPackage = 3;
  inline bool has_maxpackage() const;
  inline void clear_maxpackage();
  static const int kMaxPackageFieldNumber = 3;
  inline ::google::protobuf::uint32 maxpackage() const;
  inline void set_maxpackage(::google::protobuf::uint32 value);
  
  // optional uint32 index = 4;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 4;
  inline ::google::protobuf::uint32 index() const;
  inline void set_index(::google::protobuf::uint32 value);
  
  // optional .message.IoFileResponse.IoData ioData = 5;
  inline bool has_iodata() const;
  inline void clear_iodata();
  static const int kIoDataFieldNumber = 5;
  inline const ::message::IoFileResponse_IoData& iodata() const;
  inline ::message::IoFileResponse_IoData* mutable_iodata();
  inline ::message::IoFileResponse_IoData* release_iodata();
  
  // @@protoc_insertion_point(class_scope:message.IoFileResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_info();
  inline void clear_has_info();
  inline void set_has_maxpackage();
  inline void clear_has_maxpackage();
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_iodata();
  inline void clear_has_iodata();
  
  ::std::string* info_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::uint32 maxpackage_;
  ::message::IoFileResponse_IoData* iodata_;
  ::google::protobuf::uint32 index_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_IoFile_2eproto();
  friend void protobuf_AssignDesc_IoFile_2eproto();
  friend void protobuf_ShutdownFile_IoFile_2eproto();
  
  void InitAsDefaultInstance();
  static IoFileResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// IoFileRequest

// required uint64 verifyCode = 1;
inline bool IoFileRequest::has_verifycode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IoFileRequest::set_has_verifycode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IoFileRequest::clear_has_verifycode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IoFileRequest::clear_verifycode() {
  verifycode_ = GOOGLE_ULONGLONG(0);
  clear_has_verifycode();
}
inline ::google::protobuf::uint64 IoFileRequest::verifycode() const {
  return verifycode_;
}
inline void IoFileRequest::set_verifycode(::google::protobuf::uint64 value) {
  set_has_verifycode();
  verifycode_ = value;
}

// required string requiredFile = 2;
inline bool IoFileRequest::has_requiredfile() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IoFileRequest::set_has_requiredfile() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IoFileRequest::clear_has_requiredfile() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IoFileRequest::clear_requiredfile() {
  if (requiredfile_ != &::google::protobuf::internal::kEmptyString) {
    requiredfile_->clear();
  }
  clear_has_requiredfile();
}
inline const ::std::string& IoFileRequest::requiredfile() const {
  return *requiredfile_;
}
inline void IoFileRequest::set_requiredfile(const ::std::string& value) {
  set_has_requiredfile();
  if (requiredfile_ == &::google::protobuf::internal::kEmptyString) {
    requiredfile_ = new ::std::string;
  }
  requiredfile_->assign(value);
}
inline void IoFileRequest::set_requiredfile(const char* value) {
  set_has_requiredfile();
  if (requiredfile_ == &::google::protobuf::internal::kEmptyString) {
    requiredfile_ = new ::std::string;
  }
  requiredfile_->assign(value);
}
inline void IoFileRequest::set_requiredfile(const char* value, size_t size) {
  set_has_requiredfile();
  if (requiredfile_ == &::google::protobuf::internal::kEmptyString) {
    requiredfile_ = new ::std::string;
  }
  requiredfile_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IoFileRequest::mutable_requiredfile() {
  set_has_requiredfile();
  if (requiredfile_ == &::google::protobuf::internal::kEmptyString) {
    requiredfile_ = new ::std::string;
  }
  return requiredfile_;
}
inline ::std::string* IoFileRequest::release_requiredfile() {
  clear_has_requiredfile();
  if (requiredfile_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = requiredfile_;
    requiredfile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 index = 3;
inline bool IoFileRequest::has_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IoFileRequest::set_has_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IoFileRequest::clear_has_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IoFileRequest::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 IoFileRequest::index() const {
  return index_;
}
inline void IoFileRequest::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
}

// -------------------------------------------------------------------

// IoFileResponse_IoData

// repeated bytes data = 1;
inline int IoFileResponse_IoData::data_size() const {
  return data_.size();
}
inline void IoFileResponse_IoData::clear_data() {
  data_.Clear();
}
inline const ::std::string& IoFileResponse_IoData::data(int index) const {
  return data_.Get(index);
}
inline ::std::string* IoFileResponse_IoData::mutable_data(int index) {
  return data_.Mutable(index);
}
inline void IoFileResponse_IoData::set_data(int index, const ::std::string& value) {
  data_.Mutable(index)->assign(value);
}
inline void IoFileResponse_IoData::set_data(int index, const char* value) {
  data_.Mutable(index)->assign(value);
}
inline void IoFileResponse_IoData::set_data(int index, const void* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IoFileResponse_IoData::add_data() {
  return data_.Add();
}
inline void IoFileResponse_IoData::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
}
inline void IoFileResponse_IoData::add_data(const char* value) {
  data_.Add()->assign(value);
}
inline void IoFileResponse_IoData::add_data(const void* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
IoFileResponse_IoData::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
IoFileResponse_IoData::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// IoFileResponse

// optional sint32 result = 1 [default = 0];
inline bool IoFileResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IoFileResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IoFileResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IoFileResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 IoFileResponse::result() const {
  return result_;
}
inline void IoFileResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// optional string info = 2;
inline bool IoFileResponse::has_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IoFileResponse::set_has_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IoFileResponse::clear_has_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IoFileResponse::clear_info() {
  if (info_ != &::google::protobuf::internal::kEmptyString) {
    info_->clear();
  }
  clear_has_info();
}
inline const ::std::string& IoFileResponse::info() const {
  return *info_;
}
inline void IoFileResponse::set_info(const ::std::string& value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(value);
}
inline void IoFileResponse::set_info(const char* value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(value);
}
inline void IoFileResponse::set_info(const char* value, size_t size) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IoFileResponse::mutable_info() {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  return info_;
}
inline ::std::string* IoFileResponse::release_info() {
  clear_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = info_;
    info_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional uint32 maxPackage = 3;
inline bool IoFileResponse::has_maxpackage() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IoFileResponse::set_has_maxpackage() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IoFileResponse::clear_has_maxpackage() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IoFileResponse::clear_maxpackage() {
  maxpackage_ = 0u;
  clear_has_maxpackage();
}
inline ::google::protobuf::uint32 IoFileResponse::maxpackage() const {
  return maxpackage_;
}
inline void IoFileResponse::set_maxpackage(::google::protobuf::uint32 value) {
  set_has_maxpackage();
  maxpackage_ = value;
}

// optional uint32 index = 4;
inline bool IoFileResponse::has_index() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IoFileResponse::set_has_index() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IoFileResponse::clear_has_index() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IoFileResponse::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 IoFileResponse::index() const {
  return index_;
}
inline void IoFileResponse::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
}

// optional .message.IoFileResponse.IoData ioData = 5;
inline bool IoFileResponse::has_iodata() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void IoFileResponse::set_has_iodata() {
  _has_bits_[0] |= 0x00000010u;
}
inline void IoFileResponse::clear_has_iodata() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void IoFileResponse::clear_iodata() {
  if (iodata_ != NULL) iodata_->::message::IoFileResponse_IoData::Clear();
  clear_has_iodata();
}
inline const ::message::IoFileResponse_IoData& IoFileResponse::iodata() const {
  return iodata_ != NULL ? *iodata_ : *default_instance_->iodata_;
}
inline ::message::IoFileResponse_IoData* IoFileResponse::mutable_iodata() {
  set_has_iodata();
  if (iodata_ == NULL) iodata_ = new ::message::IoFileResponse_IoData;
  return iodata_;
}
inline ::message::IoFileResponse_IoData* IoFileResponse::release_iodata() {
  clear_has_iodata();
  ::message::IoFileResponse_IoData* temp = iodata_;
  iodata_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IoFile_2eproto__INCLUDED