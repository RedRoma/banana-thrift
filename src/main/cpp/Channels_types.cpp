/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Channels_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace thrift { namespace channels {


SlackChannel::~SlackChannel() throw() {
}


void SlackChannel::__set_domainName(const std::string& val) {
  this->domainName = val;
}

void SlackChannel::__set_channelName(const std::string& val) {
  this->channelName = val;
}

void SlackChannel::__set_slackToken(const std::string& val) {
  this->slackToken = val;
}

uint32_t SlackChannel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->domainName);
          this->__isset.domainName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->channelName);
          this->__isset.channelName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->slackToken);
          this->__isset.slackToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SlackChannel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SlackChannel");

  xfer += oprot->writeFieldBegin("domainName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->domainName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("channelName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->channelName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("slackToken", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->slackToken);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SlackChannel &a, SlackChannel &b) {
  using ::std::swap;
  swap(a.domainName, b.domainName);
  swap(a.channelName, b.channelName);
  swap(a.slackToken, b.slackToken);
  swap(a.__isset, b.__isset);
}

SlackChannel::SlackChannel(const SlackChannel& other0) {
  domainName = other0.domainName;
  channelName = other0.channelName;
  slackToken = other0.slackToken;
  __isset = other0.__isset;
}
SlackChannel& SlackChannel::operator=(const SlackChannel& other1) {
  domainName = other1.domainName;
  channelName = other1.channelName;
  slackToken = other1.slackToken;
  __isset = other1.__isset;
  return *this;
}
void SlackChannel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SlackChannel(";
  out << "domainName=" << to_string(domainName);
  out << ", " << "channelName=" << to_string(channelName);
  out << ", " << "slackToken=" << to_string(slackToken);
  out << ")";
}


SlackUsername::~SlackUsername() throw() {
}


void SlackUsername::__set_domainName(const std::string& val) {
  this->domainName = val;
}

void SlackUsername::__set_username(const std::string& val) {
  this->username = val;
}

void SlackUsername::__set_slackToken(const std::string& val) {
  this->slackToken = val;
}

uint32_t SlackUsername::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->domainName);
          this->__isset.domainName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->slackToken);
          this->__isset.slackToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SlackUsername::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SlackUsername");

  xfer += oprot->writeFieldBegin("domainName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->domainName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->username);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("slackToken", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->slackToken);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SlackUsername &a, SlackUsername &b) {
  using ::std::swap;
  swap(a.domainName, b.domainName);
  swap(a.username, b.username);
  swap(a.slackToken, b.slackToken);
  swap(a.__isset, b.__isset);
}

SlackUsername::SlackUsername(const SlackUsername& other2) {
  domainName = other2.domainName;
  username = other2.username;
  slackToken = other2.slackToken;
  __isset = other2.__isset;
}
SlackUsername& SlackUsername::operator=(const SlackUsername& other3) {
  domainName = other3.domainName;
  username = other3.username;
  slackToken = other3.slackToken;
  __isset = other3.__isset;
  return *this;
}
void SlackUsername::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SlackUsername(";
  out << "domainName=" << to_string(domainName);
  out << ", " << "username=" << to_string(username);
  out << ", " << "slackToken=" << to_string(slackToken);
  out << ")";
}


Email::~Email() throw() {
}


void Email::__set_emailAddress(const std::string& val) {
  this->emailAddress = val;
}

void Email::__set_subject(const std::string& val) {
  this->subject = val;
__isset.subject = true;
}

uint32_t Email::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->emailAddress);
          this->__isset.emailAddress = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->subject);
          this->__isset.subject = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Email::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Email");

  xfer += oprot->writeFieldBegin("emailAddress", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->emailAddress);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.subject) {
    xfer += oprot->writeFieldBegin("subject", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->subject);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Email &a, Email &b) {
  using ::std::swap;
  swap(a.emailAddress, b.emailAddress);
  swap(a.subject, b.subject);
  swap(a.__isset, b.__isset);
}

Email::Email(const Email& other4) {
  emailAddress = other4.emailAddress;
  subject = other4.subject;
  __isset = other4.__isset;
}
Email& Email::operator=(const Email& other5) {
  emailAddress = other5.emailAddress;
  subject = other5.subject;
  __isset = other5.__isset;
  return *this;
}
void Email::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Email(";
  out << "emailAddress=" << to_string(emailAddress);
  out << ", " << "subject="; (__isset.subject ? (out << to_string(subject)) : (out << "<null>"));
  out << ")";
}


CustomChannel::~CustomChannel() throw() {
}


void CustomChannel::__set_endpoint(const  ::aroma::thrift::endpoint::Endpoint& val) {
  this->endpoint = val;
}

uint32_t CustomChannel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->endpoint.read(iprot);
          this->__isset.endpoint = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CustomChannel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CustomChannel");

  xfer += oprot->writeFieldBegin("endpoint", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->endpoint.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CustomChannel &a, CustomChannel &b) {
  using ::std::swap;
  swap(a.endpoint, b.endpoint);
  swap(a.__isset, b.__isset);
}

CustomChannel::CustomChannel(const CustomChannel& other6) {
  endpoint = other6.endpoint;
  __isset = other6.__isset;
}
CustomChannel& CustomChannel::operator=(const CustomChannel& other7) {
  endpoint = other7.endpoint;
  __isset = other7.__isset;
  return *this;
}
void CustomChannel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CustomChannel(";
  out << "endpoint=" << to_string(endpoint);
  out << ")";
}


AromaChannel::~AromaChannel() throw() {
}


void AromaChannel::__set_slackChannel(const SlackChannel& val) {
  this->slackChannel = val;
}

void AromaChannel::__set_slackUsername(const SlackUsername& val) {
  this->slackUsername = val;
}

void AromaChannel::__set_email(const Email& val) {
  this->email = val;
}

void AromaChannel::__set_customChannel(const CustomChannel& val) {
  this->customChannel = val;
}

uint32_t AromaChannel::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->slackChannel.read(iprot);
          this->__isset.slackChannel = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->slackUsername.read(iprot);
          this->__isset.slackUsername = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->email.read(iprot);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->customChannel.read(iprot);
          this->__isset.customChannel = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t AromaChannel::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("AromaChannel");

  xfer += oprot->writeFieldBegin("slackChannel", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->slackChannel.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("slackUsername", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->slackUsername.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->email.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("customChannel", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->customChannel.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AromaChannel &a, AromaChannel &b) {
  using ::std::swap;
  swap(a.slackChannel, b.slackChannel);
  swap(a.slackUsername, b.slackUsername);
  swap(a.email, b.email);
  swap(a.customChannel, b.customChannel);
  swap(a.__isset, b.__isset);
}

AromaChannel::AromaChannel(const AromaChannel& other8) {
  slackChannel = other8.slackChannel;
  slackUsername = other8.slackUsername;
  email = other8.email;
  customChannel = other8.customChannel;
  __isset = other8.__isset;
}
AromaChannel& AromaChannel::operator=(const AromaChannel& other9) {
  slackChannel = other9.slackChannel;
  slackUsername = other9.slackUsername;
  email = other9.email;
  customChannel = other9.customChannel;
  __isset = other9.__isset;
  return *this;
}
void AromaChannel::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "AromaChannel(";
  out << "slackChannel=" << to_string(slackChannel);
  out << ", " << "slackUsername=" << to_string(slackUsername);
  out << ", " << "email=" << to_string(email);
  out << ", " << "customChannel=" << to_string(customChannel);
  out << ")";
}


ChannelInfo::~ChannelInfo() throw() {
}


void ChannelInfo::__set_channel(const AromaChannel& val) {
  this->channel = val;
}

void ChannelInfo::__set_timeRegistered(const timestamp val) {
  this->timeRegistered = val;
}

uint32_t ChannelInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->channel.read(iprot);
          this->__isset.channel = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeRegistered);
          this->__isset.timeRegistered = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ChannelInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ChannelInfo");

  xfer += oprot->writeFieldBegin("channel", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->channel.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeRegistered", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timeRegistered);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ChannelInfo &a, ChannelInfo &b) {
  using ::std::swap;
  swap(a.channel, b.channel);
  swap(a.timeRegistered, b.timeRegistered);
  swap(a.__isset, b.__isset);
}

ChannelInfo::ChannelInfo(const ChannelInfo& other10) {
  channel = other10.channel;
  timeRegistered = other10.timeRegistered;
  __isset = other10.__isset;
}
ChannelInfo& ChannelInfo::operator=(const ChannelInfo& other11) {
  channel = other11.channel;
  timeRegistered = other11.timeRegistered;
  __isset = other11.__isset;
  return *this;
}
void ChannelInfo::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ChannelInfo(";
  out << "channel=" << to_string(channel);
  out << ", " << "timeRegistered=" << to_string(timeRegistered);
  out << ")";
}


ReceiveMessageRequest::~ReceiveMessageRequest() throw() {
}


void ReceiveMessageRequest::__set_message(const  ::tech::aroma::thrift::Message& val) {
  this->message = val;
}

uint32_t ReceiveMessageRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->message.read(iprot);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ReceiveMessageRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ReceiveMessageRequest");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->message.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ReceiveMessageRequest &a, ReceiveMessageRequest &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

ReceiveMessageRequest::ReceiveMessageRequest(const ReceiveMessageRequest& other12) {
  message = other12.message;
  __isset = other12.__isset;
}
ReceiveMessageRequest& ReceiveMessageRequest::operator=(const ReceiveMessageRequest& other13) {
  message = other13.message;
  __isset = other13.__isset;
  return *this;
}
void ReceiveMessageRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ReceiveMessageRequest(";
  out << "message=" << to_string(message);
  out << ")";
}

}}} // namespace
