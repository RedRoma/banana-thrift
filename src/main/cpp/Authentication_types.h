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


namespace aroma { namespace banana { namespace thrift { namespace authentication {

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

class ServiceToken;

class DeveloperToken;

class GithubToken;

class Password;

class AromaAccount;

class Credentials;

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
  _DeveloperToken__isset() : id(false), timeOfExpiration(false), organization(false), oauthToken(true), oauthProvider(false) {}
  bool id :1;
  bool timeOfExpiration :1;
  bool organization :1;
  bool oauthToken :1;
  bool oauthProvider :1;
} _DeveloperToken__isset;

class DeveloperToken {
 public:

  DeveloperToken(const DeveloperToken&);
  DeveloperToken& operator=(const DeveloperToken&);
  DeveloperToken() : id(), timeOfExpiration(0), organization(), oauthToken(false), oauthProvider() {
  }

  virtual ~DeveloperToken() throw();
  std::string id;
  timestamp timeOfExpiration;
  std::string organization;
  bool oauthToken;
  std::string oauthProvider;

  _DeveloperToken__isset __isset;

  void __set_id(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_organization(const std::string& val);

  void __set_oauthToken(const bool val);

  void __set_oauthProvider(const std::string& val);

  bool operator == (const DeveloperToken & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    if (__isset.oauthToken != rhs.__isset.oauthToken)
      return false;
    else if (__isset.oauthToken && !(oauthToken == rhs.oauthToken))
      return false;
    if (__isset.oauthProvider != rhs.__isset.oauthProvider)
      return false;
    else if (__isset.oauthProvider && !(oauthProvider == rhs.oauthProvider))
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

typedef struct _Password__isset {
  _Password__isset() : encryptedPassword(false) {}
  bool encryptedPassword :1;
} _Password__isset;

class Password {
 public:

  Password(const Password&);
  Password& operator=(const Password&);
  Password() : encryptedPassword() {
  }

  virtual ~Password() throw();
  std::string encryptedPassword;

  _Password__isset __isset;

  void __set_encryptedPassword(const std::string& val);

  bool operator == (const Password & rhs) const
  {
    if (!(encryptedPassword == rhs.encryptedPassword))
      return false;
    return true;
  }
  bool operator != (const Password &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Password & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Password &a, Password &b);

inline std::ostream& operator<<(std::ostream& out, const Password& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AromaAccount__isset {
  _AromaAccount__isset() : email(false), password(false), name(false), profileImage(false) {}
  bool email :1;
  bool password :1;
  bool name :1;
  bool profileImage :1;
} _AromaAccount__isset;

class AromaAccount {
 public:

  AromaAccount(const AromaAccount&);
  AromaAccount& operator=(const AromaAccount&);
  AromaAccount() : email(), name() {
  }

  virtual ~AromaAccount() throw();
  std::string email;
  Password password;
  std::string name;
   ::aroma::banana::thrift::Image profileImage;

  _AromaAccount__isset __isset;

  void __set_email(const std::string& val);

  void __set_password(const Password& val);

  void __set_name(const std::string& val);

  void __set_profileImage(const  ::aroma::banana::thrift::Image& val);

  bool operator == (const AromaAccount & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(profileImage == rhs.profileImage))
      return false;
    return true;
  }
  bool operator != (const AromaAccount &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AromaAccount & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AromaAccount &a, AromaAccount &b);

inline std::ostream& operator<<(std::ostream& out, const AromaAccount& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Credentials__isset {
  _Credentials__isset() : githubToken(false), aromaAccount(false) {}
  bool githubToken :1;
  bool aromaAccount :1;
} _Credentials__isset;

class Credentials {
 public:

  Credentials(const Credentials&);
  Credentials& operator=(const Credentials&);
  Credentials() {
  }

  virtual ~Credentials() throw();
  GithubToken githubToken;
  AromaAccount aromaAccount;

  _Credentials__isset __isset;

  void __set_githubToken(const GithubToken& val);

  void __set_aromaAccount(const AromaAccount& val);

  bool operator == (const Credentials & rhs) const
  {
    if (!(githubToken == rhs.githubToken))
      return false;
    if (!(aromaAccount == rhs.aromaAccount))
      return false;
    return true;
  }
  bool operator != (const Credentials &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Credentials & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Credentials &a, Credentials &b);

inline std::ostream& operator<<(std::ostream& out, const Credentials& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
