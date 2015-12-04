/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Authentication_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kRoleValues[] = {
  Role::DEV,
  Role::OWNER
};
const char* _kRoleNames[] = {
  "DEV",
  "OWNER"
};
const std::map<int, const char*> _Role_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kRoleValues, _kRoleNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


Developer::~Developer() throw() {
}


void Developer::__set_email(const std::string& val) {
  this->email = val;
}

void Developer::__set_name(const std::string& val) {
  this->name = val;
__isset.name = true;
}

void Developer::__set_username(const std::string& val) {
  this->username = val;
__isset.username = true;
}

void Developer::__set_role(const Role::type val) {
  this->role = val;
}

uint32_t Developer::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->role = (Role::type)ecast0;
          this->__isset.role = true;
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

uint32_t Developer::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Developer");

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.name) {
    xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->name);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.username) {
    xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->username);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("role", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32((int32_t)this->role);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Developer &a, Developer &b) {
  using ::std::swap;
  swap(a.email, b.email);
  swap(a.name, b.name);
  swap(a.username, b.username);
  swap(a.role, b.role);
  swap(a.__isset, b.__isset);
}

Developer::Developer(const Developer& other1) {
  email = other1.email;
  name = other1.name;
  username = other1.username;
  role = other1.role;
  __isset = other1.__isset;
}
Developer& Developer::operator=(const Developer& other2) {
  email = other2.email;
  name = other2.name;
  username = other2.username;
  role = other2.role;
  __isset = other2.__isset;
  return *this;
}
void Developer::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Developer(";
  out << "email=" << to_string(email);
  out << ", " << "name="; (__isset.name ? (out << to_string(name)) : (out << "<null>"));
  out << ", " << "username="; (__isset.username ? (out << to_string(username)) : (out << "<null>"));
  out << ", " << "role=" << to_string(role);
  out << ")";
}


