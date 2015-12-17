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

namespace aroma { namespace banana { namespace thrift { namespace authentication {


ServiceToken::~ServiceToken() throw() {
}


void ServiceToken::__set_token(const std::string& val) {
  this->token = val;
}

void ServiceToken::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

void ServiceToken::__set_organization(const std::string& val) {
  this->organization = val;
__isset.organization = true;
}

void ServiceToken::__set_timeOfExpiration(const timestamp val) {
  this->timeOfExpiration = val;
}

uint32_t ServiceToken::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->token);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
          this->__isset.serviceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->organization);
          this->__isset.organization = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfExpiration);
          this->__isset.timeOfExpiration = true;
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

uint32_t ServiceToken::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ServiceToken");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->token);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.organization) {
    xfer += oprot->writeFieldBegin("organization", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->organization);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("timeOfExpiration", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->timeOfExpiration);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServiceToken &a, ServiceToken &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.serviceName, b.serviceName);
  swap(a.organization, b.organization);
  swap(a.timeOfExpiration, b.timeOfExpiration);
  swap(a.__isset, b.__isset);
}

ServiceToken::ServiceToken(const ServiceToken& other0) {
  token = other0.token;
  serviceName = other0.serviceName;
  organization = other0.organization;
  timeOfExpiration = other0.timeOfExpiration;
  __isset = other0.__isset;
}
ServiceToken& ServiceToken::operator=(const ServiceToken& other1) {
  token = other1.token;
  serviceName = other1.serviceName;
  organization = other1.organization;
  timeOfExpiration = other1.timeOfExpiration;
  __isset = other1.__isset;
  return *this;
}
void ServiceToken::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ServiceToken(";
  out << "token=" << to_string(token);
  out << ", " << "serviceName=" << to_string(serviceName);
  out << ", " << "organization="; (__isset.organization ? (out << to_string(organization)) : (out << "<null>"));
  out << ", " << "timeOfExpiration=" << to_string(timeOfExpiration);
  out << ")";
}


HumanToken::~HumanToken() throw() {
}


void HumanToken::__set_token(const std::string& val) {
  this->token = val;
}

void HumanToken::__set_timeOfExpiration(const timestamp val) {
  this->timeOfExpiration = val;
}

void HumanToken::__set_organization(const std::string& val) {
  this->organization = val;
__isset.organization = true;
}

void HumanToken::__set_isOauthToken(const bool val) {
  this->isOauthToken = val;
__isset.isOauthToken = true;
}

void HumanToken::__set_oauthProvider(const std::string& val) {
  this->oauthProvider = val;
__isset.oauthProvider = true;
}

uint32_t HumanToken::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->token);
          this->__isset.token = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfExpiration);
          this->__isset.timeOfExpiration = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->organization);
          this->__isset.organization = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isOauthToken);
          this->__isset.isOauthToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->oauthProvider);
          this->__isset.oauthProvider = true;
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

uint32_t HumanToken::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("HumanToken");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->token);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeOfExpiration", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timeOfExpiration);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.organization) {
    xfer += oprot->writeFieldBegin("organization", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->organization);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.isOauthToken) {
    xfer += oprot->writeFieldBegin("isOauthToken", ::apache::thrift::protocol::T_BOOL, 4);
    xfer += oprot->writeBool(this->isOauthToken);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.oauthProvider) {
    xfer += oprot->writeFieldBegin("oauthProvider", ::apache::thrift::protocol::T_STRING, 5);
    xfer += oprot->writeString(this->oauthProvider);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(HumanToken &a, HumanToken &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.timeOfExpiration, b.timeOfExpiration);
  swap(a.organization, b.organization);
  swap(a.isOauthToken, b.isOauthToken);
  swap(a.oauthProvider, b.oauthProvider);
  swap(a.__isset, b.__isset);
}

HumanToken::HumanToken(const HumanToken& other2) {
  token = other2.token;
  timeOfExpiration = other2.timeOfExpiration;
  organization = other2.organization;
  isOauthToken = other2.isOauthToken;
  oauthProvider = other2.oauthProvider;
  __isset = other2.__isset;
}
HumanToken& HumanToken::operator=(const HumanToken& other3) {
  token = other3.token;
  timeOfExpiration = other3.timeOfExpiration;
  organization = other3.organization;
  isOauthToken = other3.isOauthToken;
  oauthProvider = other3.oauthProvider;
  __isset = other3.__isset;
  return *this;
}
void HumanToken::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "HumanToken(";
  out << "token=" << to_string(token);
  out << ", " << "timeOfExpiration=" << to_string(timeOfExpiration);
  out << ", " << "organization="; (__isset.organization ? (out << to_string(organization)) : (out << "<null>"));
  out << ", " << "isOauthToken="; (__isset.isOauthToken ? (out << to_string(isOauthToken)) : (out << "<null>"));
  out << ", " << "oauthProvider="; (__isset.oauthProvider ? (out << to_string(oauthProvider)) : (out << "<null>"));
  out << ")";
}


GithubToken::~GithubToken() throw() {
}


void GithubToken::__set_username(const std::string& val) {
  this->username = val;
}

void GithubToken::__set_email(const std::string& val) {
  this->email = val;
__isset.email = true;
}

void GithubToken::__set_oauthToken(const std::string& val) {
  this->oauthToken = val;
}

uint32_t GithubToken::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_oauthToken = false;

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
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->oauthToken);
          isset_oauthToken = true;
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

  if (!isset_oauthToken)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t GithubToken::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GithubToken");

  xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->username);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.email) {
    xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->email);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("oauthToken", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->oauthToken);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GithubToken &a, GithubToken &b) {
  using ::std::swap;
  swap(a.username, b.username);
  swap(a.email, b.email);
  swap(a.oauthToken, b.oauthToken);
  swap(a.__isset, b.__isset);
}

GithubToken::GithubToken(const GithubToken& other4) {
  username = other4.username;
  email = other4.email;
  oauthToken = other4.oauthToken;
  __isset = other4.__isset;
}
GithubToken& GithubToken::operator=(const GithubToken& other5) {
  username = other5.username;
  email = other5.email;
  oauthToken = other5.oauthToken;
  __isset = other5.__isset;
  return *this;
}
void GithubToken::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GithubToken(";
  out << "username=" << to_string(username);
  out << ", " << "email="; (__isset.email ? (out << to_string(email)) : (out << "<null>"));
  out << ", " << "oauthToken=" << to_string(oauthToken);
  out << ")";
}


Password::~Password() throw() {
}


void Password::__set_encryptedPassword(const std::string& val) {
  this->encryptedPassword = val;
}

uint32_t Password::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->encryptedPassword);
          this->__isset.encryptedPassword = true;
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

uint32_t Password::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Password");

  xfer += oprot->writeFieldBegin("encryptedPassword", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->encryptedPassword);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Password &a, Password &b) {
  using ::std::swap;
  swap(a.encryptedPassword, b.encryptedPassword);
  swap(a.__isset, b.__isset);
}

Password::Password(const Password& other6) {
  encryptedPassword = other6.encryptedPassword;
  __isset = other6.__isset;
}
Password& Password::operator=(const Password& other7) {
  encryptedPassword = other7.encryptedPassword;
  __isset = other7.__isset;
  return *this;
}
void Password::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Password(";
  out << "encryptedPassword=" << to_string(encryptedPassword);
  out << ")";
}


AromaAccount::~AromaAccount() throw() {
}


void AromaAccount::__set_email(const std::string& val) {
  this->email = val;
}

void AromaAccount::__set_password(const Password& val) {
  this->password = val;
}

void AromaAccount::__set_name(const std::string& val) {
  this->name = val;
}

void AromaAccount::__set_profileImage(const  ::aroma::banana::thrift::Image& val) {
  this->profileImage = val;
}

uint32_t AromaAccount::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->password.read(iprot);
          this->__isset.password = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->profileImage.read(iprot);
          this->__isset.profileImage = true;
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

uint32_t AromaAccount::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("AromaAccount");

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("password", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->password.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("profileImage", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->profileImage.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AromaAccount &a, AromaAccount &b) {
  using ::std::swap;
  swap(a.email, b.email);
  swap(a.password, b.password);
  swap(a.name, b.name);
  swap(a.profileImage, b.profileImage);
  swap(a.__isset, b.__isset);
}

AromaAccount::AromaAccount(const AromaAccount& other8) {
  email = other8.email;
  password = other8.password;
  name = other8.name;
  profileImage = other8.profileImage;
  __isset = other8.__isset;
}
AromaAccount& AromaAccount::operator=(const AromaAccount& other9) {
  email = other9.email;
  password = other9.password;
  name = other9.name;
  profileImage = other9.profileImage;
  __isset = other9.__isset;
  return *this;
}
void AromaAccount::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "AromaAccount(";
  out << "email=" << to_string(email);
  out << ", " << "password=" << to_string(password);
  out << ", " << "name=" << to_string(name);
  out << ", " << "profileImage=" << to_string(profileImage);
  out << ")";
}


Credentials::~Credentials() throw() {
}


void Credentials::__set_githubToken(const GithubToken& val) {
  this->githubToken = val;
}

void Credentials::__set_aromaAccount(const AromaAccount& val) {
  this->aromaAccount = val;
}

uint32_t Credentials::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->githubToken.read(iprot);
          this->__isset.githubToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->aromaAccount.read(iprot);
          this->__isset.aromaAccount = true;
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

uint32_t Credentials::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Credentials");

  xfer += oprot->writeFieldBegin("githubToken", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->githubToken.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("aromaAccount", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->aromaAccount.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Credentials &a, Credentials &b) {
  using ::std::swap;
  swap(a.githubToken, b.githubToken);
  swap(a.aromaAccount, b.aromaAccount);
  swap(a.__isset, b.__isset);
}

Credentials::Credentials(const Credentials& other10) {
  githubToken = other10.githubToken;
  aromaAccount = other10.aromaAccount;
  __isset = other10.__isset;
}
Credentials& Credentials::operator=(const Credentials& other11) {
  githubToken = other11.githubToken;
  aromaAccount = other11.aromaAccount;
  __isset = other11.__isset;
  return *this;
}
void Credentials::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Credentials(";
  out << "githubToken=" << to_string(githubToken);
  out << ", " << "aromaAccount=" << to_string(aromaAccount);
  out << ")";
}

}}}} // namespace
