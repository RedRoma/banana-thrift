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
#include "Aroma_types.h"


namespace aroma { namespace banana { namespace thrift { namespace authentication {

struct TokenType {
  enum type {
    APPLICATION = 1,
    USER = 2
  };
};

extern const std::map<int, const char*> _TokenType_VALUES_TO_NAMES;

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef  ::aroma::banana::thrift::uuid uuid;

class ApplicationToken;

class UserToken;

class GithubToken;

class Password;

class AromaAccount;

class Credentials;

class AuthenticationToken;

typedef struct _ApplicationToken__isset {
  _ApplicationToken__isset() : tokenId(false), organization(false), timeOfExpiration(false), applicationId(false), applicationName(false) {}
  bool tokenId :1;
  bool organization :1;
  bool timeOfExpiration :1;
  bool applicationId :1;
  bool applicationName :1;
} _ApplicationToken__isset;

class ApplicationToken {
 public:

  ApplicationToken(const ApplicationToken&);
  ApplicationToken& operator=(const ApplicationToken&);
  ApplicationToken() : tokenId(), organization(), timeOfExpiration(0), applicationId(), applicationName() {
  }

  virtual ~ApplicationToken() throw();
  std::string tokenId;
  std::string organization;
  timestamp timeOfExpiration;
  uuid applicationId;
  std::string applicationName;

  _ApplicationToken__isset __isset;

  void __set_tokenId(const std::string& val);

  void __set_organization(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_applicationId(const uuid& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const ApplicationToken & rhs) const
  {
    if (!(tokenId == rhs.tokenId))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    if (__isset.applicationId != rhs.__isset.applicationId)
      return false;
    else if (__isset.applicationId && !(applicationId == rhs.applicationId))
      return false;
    if (__isset.applicationName != rhs.__isset.applicationName)
      return false;
    else if (__isset.applicationName && !(applicationName == rhs.applicationName))
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

typedef struct _UserToken__isset {
  _UserToken__isset() : tokenId(false), timeOfExpiration(false), organization(false), isOauthToken(true), oauthProvider(false), userId(false) {}
  bool tokenId :1;
  bool timeOfExpiration :1;
  bool organization :1;
  bool isOauthToken :1;
  bool oauthProvider :1;
  bool userId :1;
} _UserToken__isset;

class UserToken {
 public:

  UserToken(const UserToken&);
  UserToken& operator=(const UserToken&);
  UserToken() : tokenId(), timeOfExpiration(0), organization(), isOauthToken(false), oauthProvider(), userId() {
  }

  virtual ~UserToken() throw();
  std::string tokenId;
  timestamp timeOfExpiration;
  std::string organization;
  bool isOauthToken;
  std::string oauthProvider;
  uuid userId;

  _UserToken__isset __isset;

  void __set_tokenId(const std::string& val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_organization(const std::string& val);

  void __set_isOauthToken(const bool val);

  void __set_oauthProvider(const std::string& val);

  void __set_userId(const uuid& val);

  bool operator == (const UserToken & rhs) const
  {
    if (!(tokenId == rhs.tokenId))
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
    if (!(userId == rhs.userId))
      return false;
    return true;
  }
  bool operator != (const UserToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(UserToken &a, UserToken &b);

inline std::ostream& operator<<(std::ostream& out, const UserToken& obj)
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
  _Credentials__isset() : githubToken(false), aromaPassword(false) {}
  bool githubToken :1;
  bool aromaPassword :1;
} _Credentials__isset;

class Credentials {
 public:

  Credentials(const Credentials&);
  Credentials& operator=(const Credentials&);
  Credentials() {
  }

  virtual ~Credentials() throw();
  GithubToken githubToken;
  Password aromaPassword;

  _Credentials__isset __isset;

  void __set_githubToken(const GithubToken& val);

  void __set_aromaPassword(const Password& val);

  bool operator == (const Credentials & rhs) const
  {
    if (!(githubToken == rhs.githubToken))
      return false;
    if (!(aromaPassword == rhs.aromaPassword))
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

typedef struct _AuthenticationToken__isset {
  _AuthenticationToken__isset() : tokenId(false), ownerId(false), timeOfCreation(false), timeOfExpiration(false), tokenType(false), organizationId(false), ownerName(false), organizationName(false) {}
  bool tokenId :1;
  bool ownerId :1;
  bool timeOfCreation :1;
  bool timeOfExpiration :1;
  bool tokenType :1;
  bool organizationId :1;
  bool ownerName :1;
  bool organizationName :1;
} _AuthenticationToken__isset;

class AuthenticationToken {
 public:

  AuthenticationToken(const AuthenticationToken&);
  AuthenticationToken& operator=(const AuthenticationToken&);
  AuthenticationToken() : tokenId(), ownerId(), timeOfCreation(0), timeOfExpiration(0), tokenType((TokenType::type)0), organizationId(), ownerName(), organizationName() {
  }

  virtual ~AuthenticationToken() throw();
  std::string tokenId;
  uuid ownerId;
  timestamp timeOfCreation;
  timestamp timeOfExpiration;
  TokenType::type tokenType;
  uuid organizationId;
  std::string ownerName;
  std::string organizationName;

  _AuthenticationToken__isset __isset;

  void __set_tokenId(const std::string& val);

  void __set_ownerId(const uuid& val);

  void __set_timeOfCreation(const timestamp val);

  void __set_timeOfExpiration(const timestamp val);

  void __set_tokenType(const TokenType::type val);

  void __set_organizationId(const uuid& val);

  void __set_ownerName(const std::string& val);

  void __set_organizationName(const std::string& val);

  bool operator == (const AuthenticationToken & rhs) const
  {
    if (!(tokenId == rhs.tokenId))
      return false;
    if (!(ownerId == rhs.ownerId))
      return false;
    if (!(timeOfCreation == rhs.timeOfCreation))
      return false;
    if (!(timeOfExpiration == rhs.timeOfExpiration))
      return false;
    if (!(tokenType == rhs.tokenType))
      return false;
    if (!(organizationId == rhs.organizationId))
      return false;
    if (!(ownerName == rhs.ownerName))
      return false;
    if (!(organizationName == rhs.organizationName))
      return false;
    return true;
  }
  bool operator != (const AuthenticationToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuthenticationToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AuthenticationToken &a, AuthenticationToken &b);

inline std::ostream& operator<<(std::ostream& out, const AuthenticationToken& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
