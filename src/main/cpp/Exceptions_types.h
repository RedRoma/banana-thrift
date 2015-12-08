/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Exceptions_TYPES_H
#define Exceptions_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Banana_types.h"


namespace aroma { namespace banana { namespace thrift { namespace exceptions {

class InvalidArgumentException;

class InvalidCredentialsException;

class UnauthorizedException;

class ServiceDoesNotExistException;

class ServiceAlreadyRegisteredException;

class ThroughoutExceededException;

class CustomChannelUnreachableException;

class OperationFailedException;

typedef struct _InvalidArgumentException__isset {
  _InvalidArgumentException__isset() : message(true) {}
  bool message :1;
} _InvalidArgumentException__isset;

class InvalidArgumentException : public ::apache::thrift::TException {
 public:

  InvalidArgumentException(const InvalidArgumentException&);
  InvalidArgumentException& operator=(const InvalidArgumentException&);
  InvalidArgumentException() : message("Invalid Argument Received") {
  }

  virtual ~InvalidArgumentException() throw();
  std::string message;

  _InvalidArgumentException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidArgumentException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidArgumentException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidArgumentException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidArgumentException &a, InvalidArgumentException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidArgumentException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidCredentialsException__isset {
  _InvalidCredentialsException__isset() : message(true) {}
  bool message :1;
} _InvalidCredentialsException__isset;

class InvalidCredentialsException : public ::apache::thrift::TException {
 public:

  InvalidCredentialsException(const InvalidCredentialsException&);
  InvalidCredentialsException& operator=(const InvalidCredentialsException&);
  InvalidCredentialsException() : message("Failed to Verify and Authenticate credentials") {
  }

  virtual ~InvalidCredentialsException() throw();
  std::string message;

  _InvalidCredentialsException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidCredentialsException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidCredentialsException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidCredentialsException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidCredentialsException &a, InvalidCredentialsException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidCredentialsException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UnauthorizedException__isset {
  _UnauthorizedException__isset() : message(true) {}
  bool message :1;
} _UnauthorizedException__isset;

class UnauthorizedException : public ::apache::thrift::TException {
 public:

  UnauthorizedException(const UnauthorizedException&);
  UnauthorizedException& operator=(const UnauthorizedException&);
  UnauthorizedException() : message("Only an owner can do that") {
  }

  virtual ~UnauthorizedException() throw();
  std::string message;

  _UnauthorizedException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const UnauthorizedException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const UnauthorizedException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnauthorizedException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(UnauthorizedException &a, UnauthorizedException &b);

inline std::ostream& operator<<(std::ostream& out, const UnauthorizedException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ServiceDoesNotExistException__isset {
  _ServiceDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _ServiceDoesNotExistException__isset;

class ServiceDoesNotExistException : public ::apache::thrift::TException {
 public:

  ServiceDoesNotExistException(const ServiceDoesNotExistException&);
  ServiceDoesNotExistException& operator=(const ServiceDoesNotExistException&);
  ServiceDoesNotExistException() : message("The Specified Service does not exist") {
  }

  virtual ~ServiceDoesNotExistException() throw();
  std::string message;

  _ServiceDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ServiceDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ServiceDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ServiceDoesNotExistException &a, ServiceDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const ServiceDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ServiceAlreadyRegisteredException__isset {
  _ServiceAlreadyRegisteredException__isset() : message(true) {}
  bool message :1;
} _ServiceAlreadyRegisteredException__isset;

class ServiceAlreadyRegisteredException : public ::apache::thrift::TException {
 public:

  ServiceAlreadyRegisteredException(const ServiceAlreadyRegisteredException&);
  ServiceAlreadyRegisteredException& operator=(const ServiceAlreadyRegisteredException&);
  ServiceAlreadyRegisteredException() : message("This Channel has already been registered for this Service") {
  }

  virtual ~ServiceAlreadyRegisteredException() throw();
  std::string message;

  _ServiceAlreadyRegisteredException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ServiceAlreadyRegisteredException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ServiceAlreadyRegisteredException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceAlreadyRegisteredException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ServiceAlreadyRegisteredException &a, ServiceAlreadyRegisteredException &b);

inline std::ostream& operator<<(std::ostream& out, const ServiceAlreadyRegisteredException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ThroughoutExceededException__isset {
  _ThroughoutExceededException__isset() : message(true) {}
  bool message :1;
} _ThroughoutExceededException__isset;

class ThroughoutExceededException : public ::apache::thrift::TException {
 public:

  ThroughoutExceededException(const ThroughoutExceededException&);
  ThroughoutExceededException& operator=(const ThroughoutExceededException&);
  ThroughoutExceededException() : message("You have exceeded your allocated throughput. Buy more or slow down") {
  }

  virtual ~ThroughoutExceededException() throw();
  std::string message;

  _ThroughoutExceededException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ThroughoutExceededException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ThroughoutExceededException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThroughoutExceededException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ThroughoutExceededException &a, ThroughoutExceededException &b);

inline std::ostream& operator<<(std::ostream& out, const ThroughoutExceededException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CustomChannelUnreachableException__isset {
  _CustomChannelUnreachableException__isset() : message(true) {}
  bool message :1;
} _CustomChannelUnreachableException__isset;

class CustomChannelUnreachableException : public ::apache::thrift::TException {
 public:

  CustomChannelUnreachableException(const CustomChannelUnreachableException&);
  CustomChannelUnreachableException& operator=(const CustomChannelUnreachableException&);
  CustomChannelUnreachableException() : message("The Custom Channel you've supplied could not be reached. Please ensure the Service is reachable and operational.") {
  }

  virtual ~CustomChannelUnreachableException() throw();
  std::string message;

  _CustomChannelUnreachableException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const CustomChannelUnreachableException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const CustomChannelUnreachableException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomChannelUnreachableException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(CustomChannelUnreachableException &a, CustomChannelUnreachableException &b);

inline std::ostream& operator<<(std::ostream& out, const CustomChannelUnreachableException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OperationFailedException__isset {
  _OperationFailedException__isset() : message(true) {}
  bool message :1;
} _OperationFailedException__isset;

class OperationFailedException : public ::apache::thrift::TException {
 public:

  OperationFailedException(const OperationFailedException&);
  OperationFailedException& operator=(const OperationFailedException&);
  OperationFailedException() : message("The Operation could not be completed") {
  }

  virtual ~OperationFailedException() throw();
  std::string message;

  _OperationFailedException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const OperationFailedException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const OperationFailedException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OperationFailedException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(OperationFailedException &a, OperationFailedException &b);

inline std::ostream& operator<<(std::ostream& out, const OperationFailedException& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
