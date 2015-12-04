/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Banana_TYPES_H
#define Banana_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace tech { namespace aroma { namespace banana { namespace thrift {

struct Urgency {
  enum type {
    INFORMATIONAL = 1,
    PRESSING = 2,
    CRITICAL = 3
  };
};

extern const std::map<int, const char*> _Urgency_VALUES_TO_NAMES;

typedef int32_t int;

typedef int64_t long;

typedef int64_t timestamp;

class Message;

class Call;

class Text;

class Service;

typedef struct _Message__isset {
  _Message__isset() : body(false), urgency(true) {}
  bool body :1;
  bool urgency :1;
} _Message__isset;

class Message {
 public:

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : body(), urgency((Urgency::type)2) {
    urgency = (Urgency::type)2;

  }

  virtual ~Message() throw();
  std::string body;
  Urgency::type urgency;

  _Message__isset __isset;

  void __set_body(const std::string& val);

  void __set_urgency(const Urgency::type val);

  bool operator == (const Message & rhs) const
  {
    if (!(body == rhs.body))
      return false;
    if (!(urgency == rhs.urgency))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Message &a, Message &b);

inline std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}


class Call {
 public:

  Call(const Call&);
  Call& operator=(const Call&);
  Call() {
  }

  virtual ~Call() throw();

  bool operator == (const Call & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Call &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Call & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Call &a, Call &b);

inline std::ostream& operator<<(std::ostream& out, const Call& obj)
{
  obj.printTo(out);
  return out;
}


class Text {
 public:

  Text(const Text&);
  Text& operator=(const Text&);
  Text() {
  }

  virtual ~Text() throw();

  bool operator == (const Text & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Text &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Text & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Text &a, Text &b);

inline std::ostream& operator<<(std::ostream& out, const Text& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Service__isset {
  _Service__isset() : owner(false), timeOfRegistration(false), name(false) {}
  bool owner :1;
  bool timeOfRegistration :1;
  bool name :1;
} _Service__isset;

class Service {
 public:

  Service(const Service&);
  Service& operator=(const Service&);
  Service() : owner(), timeOfRegistration(0), name() {
  }

  virtual ~Service() throw();
  std::string owner;
  timestamp timeOfRegistration;
  std::string name;

  _Service__isset __isset;

  void __set_owner(const std::string& val);

  void __set_timeOfRegistration(const timestamp val);

  void __set_name(const std::string& val);

  bool operator == (const Service & rhs) const
  {
    if (!(owner == rhs.owner))
      return false;
    if (!(timeOfRegistration == rhs.timeOfRegistration))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const Service &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Service & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Service &a, Service &b);

inline std::ostream& operator<<(std::ostream& out, const Service& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
