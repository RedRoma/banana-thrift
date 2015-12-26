/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef NotificationService_TYPES_H
#define NotificationService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Banana_types.h"
#include "Endpoint_types.h"
#include "Exceptions_types.h"
#include "Notification_types.h"


namespace aroma { namespace banana { namespace thrift { namespace notification { namespace service {

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef class  ::aroma::banana::thrift::authentication::ApplicationToken ApplicationToken;

typedef class  ::aroma::banana::thrift::Application Application;

typedef  ::aroma::banana::thrift::Urgency::type Urgency;

typedef Notification.Notification Notification;

typedef class  ::aroma::banana::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::banana::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::banana::thrift::exceptions::ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException;

typedef class  ::aroma::banana::thrift::exceptions::ApplicationDoesNotExistException ApplicationDoesNotExistException;

typedef class  ::aroma::banana::thrift::exceptions::CustomChannelUnreachableException CustomChannelUnreachableException;

typedef class  ::aroma::banana::thrift::exceptions::ChannelDoesNotExistException ChannelDoesNotExistException;

typedef class  ::aroma::banana::thrift::exceptions::UnauthorizedException UnauthorizedException;

class SendNotificationRequest;

class SendNotificationResponse;


class SendNotificationRequest {
 public:

  SendNotificationRequest(const SendNotificationRequest&);
  SendNotificationRequest& operator=(const SendNotificationRequest&);
  SendNotificationRequest() {
  }

  virtual ~SendNotificationRequest() throw();

  bool operator == (const SendNotificationRequest & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SendNotificationRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendNotificationRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendNotificationRequest &a, SendNotificationRequest &b);

inline std::ostream& operator<<(std::ostream& out, const SendNotificationRequest& obj)
{
  obj.printTo(out);
  return out;
}


class SendNotificationResponse {
 public:

  SendNotificationResponse(const SendNotificationResponse&);
  SendNotificationResponse& operator=(const SendNotificationResponse&);
  SendNotificationResponse() {
  }

  virtual ~SendNotificationResponse() throw();

  bool operator == (const SendNotificationResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SendNotificationResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendNotificationResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendNotificationResponse &a, SendNotificationResponse &b);

inline std::ostream& operator<<(std::ostream& out, const SendNotificationResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
