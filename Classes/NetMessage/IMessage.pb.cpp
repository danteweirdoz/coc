// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_IMessage_2eproto() {
  delete PNPCMessage::default_instance_;
  delete Head::default_instance_;
}

void protobuf_AddDesc_IMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  PNPCMessage::default_instance_ = new PNPCMessage();
  Head::default_instance_ = new Head();
  PNPCMessage::default_instance_->InitAsDefaultInstance();
  Head::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IMessage_2eproto {
  StaticDescriptorInitializer_IMessage_2eproto() {
    protobuf_AddDesc_IMessage_2eproto();
  }
} static_descriptor_initializer_IMessage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int PNPCMessage::kMsgHeadFieldNumber;
const int PNPCMessage::kMsgBodyFieldNumber;
#endif  // !_MSC_VER

PNPCMessage::PNPCMessage()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void PNPCMessage::InitAsDefaultInstance() {
}

PNPCMessage::PNPCMessage(const PNPCMessage& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void PNPCMessage::SharedCtor() {
  _cached_size_ = 0;
  msghead_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  msgbody_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PNPCMessage::~PNPCMessage() {
  SharedDtor();
}

void PNPCMessage::SharedDtor() {
  if (msghead_ != &::google::protobuf::internal::kEmptyString) {
    delete msghead_;
  }
  if (msgbody_ != &::google::protobuf::internal::kEmptyString) {
    delete msgbody_;
  }
  if (this != default_instance_) {
  }
}

void PNPCMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PNPCMessage& PNPCMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IMessage_2eproto();  return *default_instance_;
}

PNPCMessage* PNPCMessage::default_instance_ = NULL;

PNPCMessage* PNPCMessage::New() const {
  return new PNPCMessage;
}

void PNPCMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msghead()) {
      if (msghead_ != &::google::protobuf::internal::kEmptyString) {
        msghead_->clear();
      }
    }
    if (has_msgbody()) {
      if (msgbody_ != &::google::protobuf::internal::kEmptyString) {
        msgbody_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool PNPCMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes msgHead = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_msghead()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_msgBody;
        break;
      }
      
      // required bytes msgBody = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msgBody:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_msgbody()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PNPCMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes msgHead = 1;
  if (has_msghead()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->msghead(), output);
  }
  
  // required bytes msgBody = 2;
  if (has_msgbody()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->msgbody(), output);
  }
  
}

int PNPCMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes msgHead = 1;
    if (has_msghead()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->msghead());
    }
    
    // required bytes msgBody = 2;
    if (has_msgbody()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->msgbody());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PNPCMessage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PNPCMessage*>(&from));
}

void PNPCMessage::MergeFrom(const PNPCMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msghead()) {
      set_msghead(from.msghead());
    }
    if (from.has_msgbody()) {
      set_msgbody(from.msgbody());
    }
  }
}

void PNPCMessage::CopyFrom(const PNPCMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PNPCMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void PNPCMessage::Swap(PNPCMessage* other) {
  if (other != this) {
    std::swap(msghead_, other->msghead_);
    std::swap(msgbody_, other->msgbody_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string PNPCMessage::GetTypeName() const {
  return "message.PNPCMessage";
}


// ===================================================================

#ifndef _MSC_VER
const int Head::kCommandIdFieldNumber;
const int Head::kCheckSumFieldNumber;
const int Head::kSequenceFieldNumber;
const int Head::kIsHttpFieldNumber;
#endif  // !_MSC_VER

Head::Head()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Head::InitAsDefaultInstance() {
}

Head::Head(const Head& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Head::SharedCtor() {
  _cached_size_ = 0;
  commandid_ = 0u;
  checksum_ = GOOGLE_LONGLONG(0);
  sequence_ = GOOGLE_LONGLONG(0);
  ishttp_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Head::~Head() {
  SharedDtor();
}

void Head::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Head::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Head& Head::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IMessage_2eproto();  return *default_instance_;
}

Head* Head::default_instance_ = NULL;

Head* Head::New() const {
  return new Head;
}

void Head::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    commandid_ = 0u;
    checksum_ = GOOGLE_LONGLONG(0);
    sequence_ = GOOGLE_LONGLONG(0);
    ishttp_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Head::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 commandId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &commandid_)));
          set_has_commandid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_checkSum;
        break;
      }
      
      // required sint64 checkSum = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_checkSum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &checksum_)));
          set_has_checksum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_sequence;
        break;
      }
      
      // optional int64 sequence = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));
          set_has_sequence();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_isHttp;
        break;
      }
      
      // optional bool isHttp = 4 [default = false];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isHttp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ishttp_)));
          set_has_ishttp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Head::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 commandId = 1;
  if (has_commandid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->commandid(), output);
  }
  
  // required sint64 checkSum = 2;
  if (has_checksum()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(2, this->checksum(), output);
  }
  
  // optional int64 sequence = 3 [default = 0];
  if (has_sequence()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->sequence(), output);
  }
  
  // optional bool isHttp = 4 [default = false];
  if (has_ishttp()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->ishttp(), output);
  }
  
}

int Head::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 commandId = 1;
    if (has_commandid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->commandid());
    }
    
    // required sint64 checkSum = 2;
    if (has_checksum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt64Size(
          this->checksum());
    }
    
    // optional int64 sequence = 3 [default = 0];
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sequence());
    }
    
    // optional bool isHttp = 4 [default = false];
    if (has_ishttp()) {
      total_size += 1 + 1;
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Head::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Head*>(&from));
}

void Head::MergeFrom(const Head& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_commandid()) {
      set_commandid(from.commandid());
    }
    if (from.has_checksum()) {
      set_checksum(from.checksum());
    }
    if (from.has_sequence()) {
      set_sequence(from.sequence());
    }
    if (from.has_ishttp()) {
      set_ishttp(from.ishttp());
    }
  }
}

void Head::CopyFrom(const Head& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Head::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void Head::Swap(Head* other) {
  if (other != this) {
    std::swap(commandid_, other->commandid_);
    std::swap(checksum_, other->checksum_);
    std::swap(sequence_, other->sequence_);
    std::swap(ishttp_, other->ishttp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Head::GetTypeName() const {
  return "message.Head";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
