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

class ApplicationToken;

class HumanToken;

class GithubToken;

class Password;

class AromaAccount;

class Credentials;

typedef struct _ApplicationToken__isset {
  _ApplicationToken__isset() : token(false), applicationName(false), organization(false), timeOfExpiration(false) {}
  bool token :1;
  bool applicationName :1;
  bool organization :1;
  bool timeOfExpiration :1;
} _ApplicationToken__isset;

class ApplicationToken {
 public:

  ApplicationToken(const ApplicationToken&);
  ApplicationToken& operator=(const ApplicationToken&);
  ApplicationToken() : token(), applicationName(), organization(), timeOfExpiration(0) {
  }

  virtual ~ApplicationToken() throw();
  std::string token;
  std::string applicationName;
  std::string organization;
  timestamp timeOfExpiration;

  _ApplicationToken__isset __isset;

  void __set_token(const std::string& val);

  void __set_applicationName(const std::string& val);

  void __set_organization(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  bool operator == (const ApplicationToken & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    return true;
  }
  bool operator != (const ApplicationToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationToken &a, ApplicationToken &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationToken& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HumanToken__isset {
  _HumanToken__isset() : token(false), timeOfExpiration(false), organization(false), isOauthToken(true), oauthProvider(false) {}
  bool token :1;
  bool timeOfExpiration :1;
  bool organization :1;
  bool isOauthToken :1;
  bool oauthProvider :1;
} _HumanToken__isset;

class HumanToken {
 public:

  HumanToken(const HumanToken&);
  HumanToken& operator=(const HumanToken&);
  HumanToken() : token(), timeOfExpiration(0), organization(), isOauthToken(false), oauthProvider() {
  }

  virtual ~HumanToken() throw();
  std::string token;
  timestamp timeOfExpiration;
  std::string organization;
  bool isOauthToken;
  std::string oauthProvider;

  _HumanToken__isset __isset;

  void __set_token(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_organization(const std::string& val);

  void __set_isOauthToken(const bool val);

  void __set_oauthProvider(const std::string& val);

  bool operator == (const HumanToken & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    if (__isset.isOauthToken != rhs.__isset.isOauthToken)
      return false;
    else if (__isset.isOauthToken && !(isOauthToken == rhs.isOauthToken))
      return false;
    if (__isset.oauthProvider != rhs.__isset.oauthProvider)
      return false;
    else if (__isset.oauthProvider && !(oauthProvider == rhs.oauthProvider))
      return false;
    return true;
  }
  bool operator != (const HumanToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HumanToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HumanToken &a, HumanToken &b);

inline std::ostream& operator<<(std::ostream& out, const HumanToken& obj)
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
    if (!(email == rhs.email))
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
  _AromaAccount__isset() : email(false), password(false), name(false), profileImage(false), role(false) {}
  bool email :1;
  bool password :1;
  bool name :1;
  bool profileImage :1;
  bool role :1;
} _AromaAccount__isset;

class AromaAccount {
 public:

  AromaAccount(const AromaAccount&);
  AromaAccount& operator=(const AromaAccount&);
  AromaAccount() : email(), name(), role(( ::aroma::banana::thrift::Role::type)0) {
  }

  virtual ~AromaAccount() throw();
  std::string email;
  Password password;
  std::string name;
   ::aroma::banana::thrift::Image profileImage;
   ::aroma::banana::thrift::Role::type role;

  _AromaAccount__isset __isset;

  void __set_email(const std::string& val);

  void __set_password(const Password& val);

  void __set_name(const std::string& val);

  void __set_profileImage(const  ::aroma::banana::thrift::Image& val);

  void __set_role(const  ::aroma::banana::thrift::Role::type val);

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
    if (__isset.role != rhs.__isset.role)
      return false;
    else if (__isset.role && !(role == rhs.role))
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
