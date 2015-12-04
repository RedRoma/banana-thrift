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

class ServiceToken;

class DeveloperToken;

class GithubToken;

class OauthToken;

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

typedef struct _ServiceToken__isset {
  _ServiceToken__isset() : id(false), serviceName(false), organization(false), timeOfExpiration(false) {}
  bool id :1;
  bool serviceName :1;
  bool organization :1;
  bool timeOfExpiration :1;
} _ServiceToken__isset;

class ServiceToken {
 public:

  ServiceToken(const ServiceToken&);
  ServiceToken& operator=(const ServiceToken&);
  ServiceToken() : id(), serviceName(), organization(), timeOfExpiration(0) {
  }

  virtual ~ServiceToken() throw();
  std::string id;
  std::string serviceName;
  std::string organization;
  timestamp timeOfExpiration;

  _ServiceToken__isset __isset;

  void __set_id(const std::string& val);

  void __set_serviceName(const std::string& val);

  void __set_organization(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  bool operator == (const ServiceToken & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(serviceName == rhs.serviceName))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    return true;
  }
  bool operator != (const ServiceToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ServiceToken &a, ServiceToken &b);

inline std::ostream& operator<<(std::ostream& out, const ServiceToken& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _DeveloperToken__isset {
  _DeveloperToken__isset() : id(false), oauthProvider(true), timeOfExpiration(false), organization(false) {}
  bool id :1;
  bool oauthProvider :1;
  bool timeOfExpiration :1;
  bool organization :1;
} _DeveloperToken__isset;

class DeveloperToken {
 public:

  DeveloperToken(const DeveloperToken&);
  DeveloperToken& operator=(const DeveloperToken&);
  DeveloperToken() : id(), oauthProvider("github"), timeOfExpiration(0), organization() {
  }

  virtual ~DeveloperToken() throw();
  std::string id;
  std::string oauthProvider;
  timestamp timeOfExpiration;
  std::string organization;

  _DeveloperToken__isset __isset;

  void __set_id(const std::string& val);

  void __set_oauthProvider(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_organization(const std::string& val);

  bool operator == (const DeveloperToken & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (__isset.oauthProvider != rhs.__isset.oauthProvider)
      return false;
    else if (__isset.oauthProvider && !(oauthProvider == rhs.oauthProvider))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    return true;
  }
  bool operator != (const DeveloperToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DeveloperToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(DeveloperToken &a, DeveloperToken &b);

inline std::ostream& operator<<(std::ostream& out, const DeveloperToken& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GithubToken__isset {
  _GithubToken__isset() : username(false), email(false) {}
  bool username :1;
  bool email :1;
} _GithubToken__isset;

class GithubToken {
 public:

  GithubToken(const GithubToken&);
  GithubToken& operator=(const GithubToken&);
  GithubToken() : username(), email(), oauthToken() {
  }

  virtual ~GithubToken() throw();
  std::string username;
  std::string email;
  std::string oauthToken;

  _GithubToken__isset __isset;

  void __set_username(const std::string& val);

  void __set_email(const std::string& val);

  void __set_oauthToken(const std::string& val);

  bool operator == (const GithubToken & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    if (__isset.email != rhs.__isset.email)
      return false;
    else if (__isset.email && !(email == rhs.email))
      return false;
    if (!(oauthToken == rhs.oauthToken))
      return false;
    return true;
  }
  bool operator != (const GithubToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GithubToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GithubToken &a, GithubToken &b);

inline std::ostream& operator<<(std::ostream& out, const GithubToken& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OauthToken__isset {
  _OauthToken__isset() : githubToken(false) {}
  bool githubToken :1;
} _OauthToken__isset;

class OauthToken {
 public:

  OauthToken(const OauthToken&);
  OauthToken& operator=(const OauthToken&);
  OauthToken() {
  }

  virtual ~OauthToken() throw();
  GithubToken githubToken;

  _OauthToken__isset __isset;

  void __set_githubToken(const GithubToken& val);

  bool operator == (const OauthToken & rhs) const
  {
    if (!(githubToken == rhs.githubToken))
      return false;
    return true;
  }
  bool operator != (const OauthToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OauthToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OauthToken &a, OauthToken &b);

inline std::ostream& operator<<(std::ostream& out, const OauthToken& obj)
{
  obj.printTo(out);
  return out;
}



#endif