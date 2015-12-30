/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Events_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace banana { namespace thrift { namespace notifications {


HealthCheckFailed::~HealthCheckFailed() throw() {
}


void HealthCheckFailed::__set_message(const std::string& val) {
  this->message = val;
__isset.message = true;
}

void HealthCheckFailed::__set_hostname(const std::string& val) {
  this->hostname = val;
__isset.hostname = true;
}

void HealthCheckFailed::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void HealthCheckFailed::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

uint32_t HealthCheckFailed::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->hostname);
          this->__isset.hostname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
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

uint32_t HealthCheckFailed::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("HealthCheckFailed");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.hostname) {
    xfer += oprot->writeFieldBegin("hostname", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->hostname);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HealthCheckFailed &a, HealthCheckFailed &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.hostname, b.hostname);
  swap(a.applicationId, b.applicationId);
  swap(a.applicationName, b.applicationName);
  swap(a.__isset, b.__isset);
}

HealthCheckFailed::HealthCheckFailed(const HealthCheckFailed& other0) {
  message = other0.message;
  hostname = other0.hostname;
  applicationId = other0.applicationId;
  applicationName = other0.applicationName;
  __isset = other0.__isset;
}
HealthCheckFailed& HealthCheckFailed::operator=(const HealthCheckFailed& other1) {
  message = other1.message;
  hostname = other1.hostname;
  applicationId = other1.applicationId;
  applicationName = other1.applicationName;
  __isset = other1.__isset;
  return *this;
}
void HealthCheckFailed::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "HealthCheckFailed(";
  out << "message="; (__isset.message ? (out << to_string(message)) : (out << "<null>"));
  out << ", " << "hostname="; (__isset.hostname ? (out << to_string(hostname)) : (out << "<null>"));
  out << ", " << "applicationId=" << to_string(applicationId);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ")";
}


HealthCheckBackToNormal::~HealthCheckBackToNormal() throw() {
}


void HealthCheckBackToNormal::__set_message(const std::string& val) {
  this->message = val;
__isset.message = true;
}

void HealthCheckBackToNormal::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void HealthCheckBackToNormal::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

uint32_t HealthCheckBackToNormal::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
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

uint32_t HealthCheckBackToNormal::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("HealthCheckBackToNormal");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HealthCheckBackToNormal &a, HealthCheckBackToNormal &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.applicationId, b.applicationId);
  swap(a.applicationName, b.applicationName);
  swap(a.__isset, b.__isset);
}

HealthCheckBackToNormal::HealthCheckBackToNormal(const HealthCheckBackToNormal& other2) {
  message = other2.message;
  applicationId = other2.applicationId;
  applicationName = other2.applicationName;
  __isset = other2.__isset;
}
HealthCheckBackToNormal& HealthCheckBackToNormal::operator=(const HealthCheckBackToNormal& other3) {
  message = other3.message;
  applicationId = other3.applicationId;
  applicationName = other3.applicationName;
  __isset = other3.__isset;
  return *this;
}
void HealthCheckBackToNormal::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "HealthCheckBackToNormal(";
  out << "message="; (__isset.message ? (out << to_string(message)) : (out << "<null>"));
  out << ", " << "applicationId=" << to_string(applicationId);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ")";
}


ApplicationTokenRenewed::~ApplicationTokenRenewed() throw() {
}


void ApplicationTokenRenewed::__set_message(const std::string& val) {
  this->message = val;
__isset.message = true;
}

void ApplicationTokenRenewed::__set_user(const User& val) {
  this->user = val;
}

void ApplicationTokenRenewed::__set_applicationToken(const ApplicationToken& val) {
  this->applicationToken = val;
__isset.applicationToken = true;
}

void ApplicationTokenRenewed::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void ApplicationTokenRenewed::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

uint32_t ApplicationTokenRenewed::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->user.read(iprot);
          this->__isset.user = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationToken.read(iprot);
          this->__isset.applicationToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
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

uint32_t ApplicationTokenRenewed::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ApplicationTokenRenewed");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("user", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->user.write(oprot);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.applicationToken) {
    xfer += oprot->writeFieldBegin("applicationToken", ::apache::thrift::protocol::T_STRUCT, 3);
    xfer += this->applicationToken.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ApplicationTokenRenewed &a, ApplicationTokenRenewed &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.user, b.user);
  swap(a.applicationToken, b.applicationToken);
  swap(a.applicationId, b.applicationId);
  swap(a.applicationName, b.applicationName);
  swap(a.__isset, b.__isset);
}

ApplicationTokenRenewed::ApplicationTokenRenewed(const ApplicationTokenRenewed& other4) {
  message = other4.message;
  user = other4.user;
  applicationToken = other4.applicationToken;
  applicationId = other4.applicationId;
  applicationName = other4.applicationName;
  __isset = other4.__isset;
}
ApplicationTokenRenewed& ApplicationTokenRenewed::operator=(const ApplicationTokenRenewed& other5) {
  message = other5.message;
  user = other5.user;
  applicationToken = other5.applicationToken;
  applicationId = other5.applicationId;
  applicationName = other5.applicationName;
  __isset = other5.__isset;
  return *this;
}
void ApplicationTokenRenewed::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ApplicationTokenRenewed(";
  out << "message="; (__isset.message ? (out << to_string(message)) : (out << "<null>"));
  out << ", " << "user=" << to_string(user);
  out << ", " << "applicationToken="; (__isset.applicationToken ? (out << to_string(applicationToken)) : (out << "<null>"));
  out << ", " << "applicationId=" << to_string(applicationId);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ")";
}


ApplicationTokenRegenerated::~ApplicationTokenRegenerated() throw() {
}


void ApplicationTokenRegenerated::__set_message(const std::string& val) {
  this->message = val;
__isset.message = true;
}

void ApplicationTokenRegenerated::__set_user(const User& val) {
  this->user = val;
}

void ApplicationTokenRegenerated::__set_applicationToken(const ApplicationToken& val) {
  this->applicationToken = val;
__isset.applicationToken = true;
}

void ApplicationTokenRegenerated::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void ApplicationTokenRegenerated::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

uint32_t ApplicationTokenRegenerated::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->user.read(iprot);
          this->__isset.user = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationToken.read(iprot);
          this->__isset.applicationToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
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

uint32_t ApplicationTokenRegenerated::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ApplicationTokenRegenerated");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("user", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->user.write(oprot);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.applicationToken) {
    xfer += oprot->writeFieldBegin("applicationToken", ::apache::thrift::protocol::T_STRUCT, 3);
    xfer += this->applicationToken.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ApplicationTokenRegenerated &a, ApplicationTokenRegenerated &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.user, b.user);
  swap(a.applicationToken, b.applicationToken);
  swap(a.applicationId, b.applicationId);
  swap(a.applicationName, b.applicationName);
  swap(a.__isset, b.__isset);
}

ApplicationTokenRegenerated::ApplicationTokenRegenerated(const ApplicationTokenRegenerated& other6) {
  message = other6.message;
  user = other6.user;
  applicationToken = other6.applicationToken;
  applicationId = other6.applicationId;
  applicationName = other6.applicationName;
  __isset = other6.__isset;
}
ApplicationTokenRegenerated& ApplicationTokenRegenerated::operator=(const ApplicationTokenRegenerated& other7) {
  message = other7.message;
  user = other7.user;
  applicationToken = other7.applicationToken;
  applicationId = other7.applicationId;
  applicationName = other7.applicationName;
  __isset = other7.__isset;
  return *this;
}
void ApplicationTokenRegenerated::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ApplicationTokenRegenerated(";
  out << "message="; (__isset.message ? (out << to_string(message)) : (out << "<null>"));
  out << ", " << "user=" << to_string(user);
  out << ", " << "applicationToken="; (__isset.applicationToken ? (out << to_string(applicationToken)) : (out << "<null>"));
  out << ", " << "applicationId=" << to_string(applicationId);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ")";
}


ApplicationSentMessage::~ApplicationSentMessage() throw() {
}


void ApplicationSentMessage::__set_message(const std::string& val) {
  this->message = val;
__isset.message = true;
}

void ApplicationSentMessage::__set_messageSentByApplication(const  ::aroma::banana::thrift::Message& val) {
  this->messageSentByApplication = val;
__isset.messageSentByApplication = true;
}

void ApplicationSentMessage::__set_applicationId(const std::string& val) {
  this->applicationId = val;
}

void ApplicationSentMessage::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

uint32_t ApplicationSentMessage::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->messageSentByApplication.read(iprot);
          this->__isset.messageSentByApplication = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationId);
          this->__isset.applicationId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
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

uint32_t ApplicationSentMessage::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ApplicationSentMessage");

  if (this->__isset.message) {
    xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->message);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.messageSentByApplication) {
    xfer += oprot->writeFieldBegin("messageSentByApplication", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->messageSentByApplication.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("applicationId", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->applicationId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ApplicationSentMessage &a, ApplicationSentMessage &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.messageSentByApplication, b.messageSentByApplication);
  swap(a.applicationId, b.applicationId);
  swap(a.applicationName, b.applicationName);
  swap(a.__isset, b.__isset);
}

ApplicationSentMessage::ApplicationSentMessage(const ApplicationSentMessage& other8) {
  message = other8.message;
  messageSentByApplication = other8.messageSentByApplication;
  applicationId = other8.applicationId;
  applicationName = other8.applicationName;
  __isset = other8.__isset;
}
ApplicationSentMessage& ApplicationSentMessage::operator=(const ApplicationSentMessage& other9) {
  message = other9.message;
  messageSentByApplication = other9.messageSentByApplication;
  applicationId = other9.applicationId;
  applicationName = other9.applicationName;
  __isset = other9.__isset;
  return *this;
}
void ApplicationSentMessage::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ApplicationSentMessage(";
  out << "message="; (__isset.message ? (out << to_string(message)) : (out << "<null>"));
  out << ", " << "messageSentByApplication="; (__isset.messageSentByApplication ? (out << to_string(messageSentByApplication)) : (out << "<null>"));
  out << ", " << "applicationId=" << to_string(applicationId);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ")";
}


EventType::~EventType() throw() {
}


void EventType::__set_healthCheckFailed(const HealthCheckFailed& val) {
  this->healthCheckFailed = val;
}

void EventType::__set_healthCheckBackToNormal(const HealthCheckBackToNormal& val) {
  this->healthCheckBackToNormal = val;
}

void EventType::__set_applicationTokenRenewed(const ApplicationTokenRenewed& val) {
  this->applicationTokenRenewed = val;
}

void EventType::__set_applicationTokenRegenerated(const ApplicationTokenRegenerated& val) {
  this->applicationTokenRegenerated = val;
}

void EventType::__set_applicationSentMessage(const ApplicationSentMessage& val) {
  this->applicationSentMessage = val;
}

uint32_t EventType::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->healthCheckFailed.read(iprot);
          this->__isset.healthCheckFailed = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->healthCheckBackToNormal.read(iprot);
          this->__isset.healthCheckBackToNormal = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationTokenRenewed.read(iprot);
          this->__isset.applicationTokenRenewed = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationTokenRegenerated.read(iprot);
          this->__isset.applicationTokenRegenerated = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationSentMessage.read(iprot);
          this->__isset.applicationSentMessage = true;
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

uint32_t EventType::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("EventType");

  xfer += oprot->writeFieldBegin("healthCheckFailed", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->healthCheckFailed.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("healthCheckBackToNormal", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->healthCheckBackToNormal.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationTokenRenewed", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->applicationTokenRenewed.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationTokenRegenerated", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->applicationTokenRegenerated.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationSentMessage", ::apache::thrift::protocol::T_STRUCT, 5);
  xfer += this->applicationSentMessage.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventType &a, EventType &b) {
  using ::std::swap;
  swap(a.healthCheckFailed, b.healthCheckFailed);
  swap(a.healthCheckBackToNormal, b.healthCheckBackToNormal);
  swap(a.applicationTokenRenewed, b.applicationTokenRenewed);
  swap(a.applicationTokenRegenerated, b.applicationTokenRegenerated);
  swap(a.applicationSentMessage, b.applicationSentMessage);
  swap(a.__isset, b.__isset);
}

EventType::EventType(const EventType& other10) {
  healthCheckFailed = other10.healthCheckFailed;
  healthCheckBackToNormal = other10.healthCheckBackToNormal;
  applicationTokenRenewed = other10.applicationTokenRenewed;
  applicationTokenRegenerated = other10.applicationTokenRegenerated;
  applicationSentMessage = other10.applicationSentMessage;
  __isset = other10.__isset;
}
EventType& EventType::operator=(const EventType& other11) {
  healthCheckFailed = other11.healthCheckFailed;
  healthCheckBackToNormal = other11.healthCheckBackToNormal;
  applicationTokenRenewed = other11.applicationTokenRenewed;
  applicationTokenRegenerated = other11.applicationTokenRegenerated;
  applicationSentMessage = other11.applicationSentMessage;
  __isset = other11.__isset;
  return *this;
}
void EventType::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "EventType(";
  out << "healthCheckFailed=" << to_string(healthCheckFailed);
  out << ", " << "healthCheckBackToNormal=" << to_string(healthCheckBackToNormal);
  out << ", " << "applicationTokenRenewed=" << to_string(applicationTokenRenewed);
  out << ", " << "applicationTokenRegenerated=" << to_string(applicationTokenRegenerated);
  out << ", " << "applicationSentMessage=" << to_string(applicationSentMessage);
  out << ")";
}


Event::~Event() throw() {
}


void Event::__set_eventType(const EventType& val) {
  this->eventType = val;
}

void Event::__set_timestamp(const timestamp val) {
  this->timestamp = val;
}

uint32_t Event::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->eventType.read(iprot);
          this->__isset.eventType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamp);
          this->__isset.timestamp = true;
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

uint32_t Event::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Event");

  xfer += oprot->writeFieldBegin("eventType", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->eventType.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timestamp);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Event &a, Event &b) {
  using ::std::swap;
  swap(a.eventType, b.eventType);
  swap(a.timestamp, b.timestamp);
  swap(a.__isset, b.__isset);
}

Event::Event(const Event& other12) {
  eventType = other12.eventType;
  timestamp = other12.timestamp;
  __isset = other12.__isset;
}
Event& Event::operator=(const Event& other13) {
  eventType = other13.eventType;
  timestamp = other13.timestamp;
  __isset = other13.__isset;
  return *this;
}
void Event::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Event(";
  out << "eventType=" << to_string(eventType);
  out << ", " << "timestamp=" << to_string(timestamp);
  out << ")";
}

}}}} // namespace