/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ApplicationService_TYPES_H
#define ApplicationService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Aroma_types.h"
#include "Endpoint_types.h"
#include "Exceptions_types.h"


namespace aroma { namespace thrift { namespace application { namespace service {

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::long long;

typedef  ::tech::aroma::thrift::timestamp timestamp;

typedef class  ::aroma::thrift::authentication::ApplicationToken ApplicationToken;

typedef class  ::tech::aroma::thrift::Application Application;

typedef  ::tech::aroma::thrift::Urgency::type Urgency;

typedef class  ::aroma::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::thrift::exceptions::ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException;

typedef class  ::aroma::thrift::exceptions::ApplicationDoesNotExistException ApplicationDoesNotExistException;

typedef class  ::aroma::thrift::exceptions::CustomChannelUnreachableException CustomChannelUnreachableException;

typedef class  ::aroma::thrift::exceptions::ChannelDoesNotExistException ChannelDoesNotExistException;

typedef class  ::aroma::thrift::exceptions::UnauthorizedException UnauthorizedException;

class SendMessageRequest;

class SendMessageResponse;

typedef struct _SendMessageRequest__isset {
  _SendMessageRequest__isset() : applicationToken(false), body(false), urgency(true), timeOfMessage(false), title(false), hostname(false), macAddress(false), ipv4Address(false), deviceName(false), operatingSystemName(false) {}
  bool applicationToken :1;
  bool body :1;
  bool urgency :1;
  bool timeOfMessage :1;
  bool title :1;
  bool hostname :1;
  bool macAddress :1;
  bool ipv4Address :1;
  bool deviceName :1;
  bool operatingSystemName :1;
} _SendMessageRequest__isset;

class SendMessageRequest {
 public:

  SendMessageRequest(const SendMessageRequest&);
  SendMessageRequest& operator=(const SendMessageRequest&);
  SendMessageRequest() : body(), urgency(( ::tech::aroma::thrift::Urgency::type)1), timeOfMessage(0), title(), hostname(), macAddress(), ipv4Address(), deviceName(), operatingSystemName() {
    urgency = ( ::tech::aroma::thrift::Urgency::type)1;

  }

  virtual ~SendMessageRequest() throw();
  ApplicationToken applicationToken;
  std::string body;
  Urgency urgency;
  timestamp timeOfMessage;
  std::string title;
  std::string hostname;
  std::string macAddress;
  std::string ipv4Address;
  std::string deviceName;
  std::string operatingSystemName;

  _SendMessageRequest__isset __isset;

  void __set_applicationToken(const ApplicationToken& val);

  void __set_body(const std::string& val);

  void __set_urgency(const Urgency val);

  void __set_timeOfMessage(const timestamp val);

  void __set_title(const std::string& val);

  void __set_hostname(const std::string& val);

  void __set_macAddress(const std::string& val);

  void __set_ipv4Address(const std::string& val);

  void __set_deviceName(const std::string& val);

  void __set_operatingSystemName(const std::string& val);

  bool operator == (const SendMessageRequest & rhs) const
  {
    if (!(applicationToken == rhs.applicationToken))
      return false;
    if (!(body == rhs.body))
      return false;
    if (!(urgency == rhs.urgency))
      return false;
    if (__isset.timeOfMessage != rhs.__isset.timeOfMessage)
      return false;
    else if (__isset.timeOfMessage && !(timeOfMessage == rhs.timeOfMessage))
      return false;
    if (!(title == rhs.title))
      return false;
    if (__isset.hostname != rhs.__isset.hostname)
      return false;
    else if (__isset.hostname && !(hostname == rhs.hostname))
      return false;
    if (__isset.macAddress != rhs.__isset.macAddress)
      return false;
    else if (__isset.macAddress && !(macAddress == rhs.macAddress))
      return false;
    if (__isset.ipv4Address != rhs.__isset.ipv4Address)
      return false;
    else if (__isset.ipv4Address && !(ipv4Address == rhs.ipv4Address))
      return false;
    if (__isset.deviceName != rhs.__isset.deviceName)
      return false;
    else if (__isset.deviceName && !(deviceName == rhs.deviceName))
      return false;
    if (__isset.operatingSystemName != rhs.__isset.operatingSystemName)
      return false;
    else if (__isset.operatingSystemName && !(operatingSystemName == rhs.operatingSystemName))
      return false;
    return true;
  }
  bool operator != (const SendMessageRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendMessageRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendMessageRequest &a, SendMessageRequest &b);

inline std::ostream& operator<<(std::ostream& out, const SendMessageRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SendMessageResponse__isset {
  _SendMessageResponse__isset() : messageId(false) {}
  bool messageId :1;
} _SendMessageResponse__isset;

class SendMessageResponse {
 public:

  SendMessageResponse(const SendMessageResponse&);
  SendMessageResponse& operator=(const SendMessageResponse&);
  SendMessageResponse() : messageId() {
  }

  virtual ~SendMessageResponse() throw();
  std::string messageId;

  _SendMessageResponse__isset __isset;

  void __set_messageId(const std::string& val);

  bool operator == (const SendMessageResponse & rhs) const
  {
    if (!(messageId == rhs.messageId))
      return false;
    return true;
  }
  bool operator != (const SendMessageResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendMessageResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendMessageResponse &a, SendMessageResponse &b);

inline std::ostream& operator<<(std::ostream& out, const SendMessageResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
