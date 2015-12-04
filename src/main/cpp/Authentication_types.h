/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Authentication_TYPES_H
#define Authentication_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Banana_types.h"




struct Role {
  enum type {
    DEV = 1,
    OWNER = 2
  };
};

extern const std::map<int, const char*> _Role_VALUES_TO_NAMES;

typedef int32_t int;

typedef int64_t long;

typedef int64_t timestamp;

class Developer;

typedef struct _Developer__isset {
  _Developer__isset() : email(false), name(false), username(false), role(false) {}
  bool email :1;
  bool name :1;
  bool username :1;
  bool role :1;
} _Developer__isset;

class Developer {
 public:

  Developer(const Developer&);
  Developer& operator=(const Developer&);
  Developer() : email(), name(), username(), role((Role::type)0) {
  }

  virtual ~Developer() throw();
  std::string email;
  std::string name;
  std::string username;
  Role::type role;

  _Developer__isset __isset;

  void __set_email(const std::string& val);

  void __set_name(const std::string& val);

  void __set_username(const std::string& val);

  void __set_role(const Role::type val);

  bool operator == (const Developer & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    if (__isset.username != rhs.__isset.username)
      return false;
    else if (__isset.username && !(username == rhs.username))
      return false;
    if (!(role == rhs.role))
      return false;
    return true;
  }
  bool operator != (const Developer &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Developer & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Developer &a, Developer &b);

inline std::ostream& operator<<(std::ostream& out, const Developer& obj)
{
  obj.printTo(out);
  return out;
}



#endif
