/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "NotificationService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace banana { namespace thrift { namespace notification { namespace service {


SendNotificationRequest::~SendNotificationRequest() throw() {
}


void SendNotificationRequest::__set_token(const AuthenticationToken& val) {
  this->token = val;
}

void SendNotificationRequest::__set_event(const Event& val) {
  this->event = val;
}

void SendNotificationRequest::__set_channels(const std::vector<BananaChannel> & val) {
  this->channels = val;
}

uint32_t SendNotificationRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->token.read(iprot);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->event.read(iprot);
          this->__isset.event = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->channels.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->channels.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->channels[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.channels = true;
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

uint32_t SendNotificationRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SendNotificationRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("event", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->event.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("channels", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->channels.size()));
    std::vector<BananaChannel> ::const_iterator _iter5;
    for (_iter5 = this->channels.begin(); _iter5 != this->channels.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SendNotificationRequest &a, SendNotificationRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.event, b.event);
  swap(a.channels, b.channels);
  swap(a.__isset, b.__isset);
}

SendNotificationRequest::SendNotificationRequest(const SendNotificationRequest& other6) {
  token = other6.token;
  event = other6.event;
  channels = other6.channels;
  __isset = other6.__isset;
}
SendNotificationRequest& SendNotificationRequest::operator=(const SendNotificationRequest& other7) {
  token = other7.token;
  event = other7.event;
  channels = other7.channels;
  __isset = other7.__isset;
  return *this;
}
void SendNotificationRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SendNotificationRequest(";
  out << "token=" << to_string(token);
  out << ", " << "event=" << to_string(event);
  out << ", " << "channels=" << to_string(channels);
  out << ")";
}


SendNotificationResponse::~SendNotificationResponse() throw() {
}


void SendNotificationResponse::__set_notificationId(const uuid& val) {
  this->notificationId = val;
__isset.notificationId = true;
}

uint32_t SendNotificationResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->notificationId);
          this->__isset.notificationId = true;
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

uint32_t SendNotificationResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SendNotificationResponse");

  if (this->__isset.notificationId) {
    xfer += oprot->writeFieldBegin("notificationId", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->notificationId);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SendNotificationResponse &a, SendNotificationResponse &b) {
  using ::std::swap;
  swap(a.notificationId, b.notificationId);
  swap(a.__isset, b.__isset);
}

SendNotificationResponse::SendNotificationResponse(const SendNotificationResponse& other8) {
  notificationId = other8.notificationId;
  __isset = other8.__isset;
}
SendNotificationResponse& SendNotificationResponse::operator=(const SendNotificationResponse& other9) {
  notificationId = other9.notificationId;
  __isset = other9.__isset;
  return *this;
}
void SendNotificationResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SendNotificationResponse(";
  out << "notificationId="; (__isset.notificationId ? (out << to_string(notificationId)) : (out << "<null>"));
  out << ")";
}

}}}}} // namespace
