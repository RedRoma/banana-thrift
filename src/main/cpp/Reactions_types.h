/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Reactions_TYPES_H
#define Reactions_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Aroma_types.h"


namespace tech { namespace aroma { namespace thrift { namespace reactions {

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::long long;

typedef  ::tech::aroma::thrift::timestamp timestamp;

typedef  ::tech::aroma::thrift::uuid uuid;

class MatcherAll;

class MatcherTitleIs;

class MatcherTitleIsNot;

class MatcherTitleContains;

class MatcherTitleDoesNotContain;

class MatcherBodyIs;

class MatcherBodyContains;

class MatcherBodyDoesNotContain;

class MatcherUrgencyIs;

class MatcherHostnameIs;

class MatcherHostnameContains;

class MatcherHostnameDoesNotContain;

class AromaMatcher;

class ActionForwardToSlackChannel;

class ActionForwardToSlackUser;

class ActionSendEmail;

class ActionSkipInbox;

class ActionDeleteMessage;

class ActionRespondToCode;

class ActionForwardToUsers;

class AromaAction;

class Reaction;


class MatcherAll {
 public:

  MatcherAll(const MatcherAll&);
  MatcherAll& operator=(const MatcherAll&);
  MatcherAll() {
  }

  virtual ~MatcherAll() throw();

  bool operator == (const MatcherAll & /* rhs */) const
  {
    return true;
  }
  bool operator != (const MatcherAll &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherAll & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherAll &a, MatcherAll &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherAll& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherTitleIs__isset {
  _MatcherTitleIs__isset() : expectedTitle(false) {}
  bool expectedTitle :1;
} _MatcherTitleIs__isset;

class MatcherTitleIs {
 public:

  MatcherTitleIs(const MatcherTitleIs&);
  MatcherTitleIs& operator=(const MatcherTitleIs&);
  MatcherTitleIs() : expectedTitle() {
  }

  virtual ~MatcherTitleIs() throw();
  std::string expectedTitle;

  _MatcherTitleIs__isset __isset;

  void __set_expectedTitle(const std::string& val);

  bool operator == (const MatcherTitleIs & rhs) const
  {
    if (!(expectedTitle == rhs.expectedTitle))
      return false;
    return true;
  }
  bool operator != (const MatcherTitleIs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherTitleIs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherTitleIs &a, MatcherTitleIs &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherTitleIs& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherTitleIsNot__isset {
  _MatcherTitleIsNot__isset() : title(false) {}
  bool title :1;
} _MatcherTitleIsNot__isset;

class MatcherTitleIsNot {
 public:

  MatcherTitleIsNot(const MatcherTitleIsNot&);
  MatcherTitleIsNot& operator=(const MatcherTitleIsNot&);
  MatcherTitleIsNot() : title() {
  }

  virtual ~MatcherTitleIsNot() throw();
  std::string title;

  _MatcherTitleIsNot__isset __isset;

  void __set_title(const std::string& val);

  bool operator == (const MatcherTitleIsNot & rhs) const
  {
    if (!(title == rhs.title))
      return false;
    return true;
  }
  bool operator != (const MatcherTitleIsNot &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherTitleIsNot & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherTitleIsNot &a, MatcherTitleIsNot &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherTitleIsNot& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherTitleContains__isset {
  _MatcherTitleContains__isset() : substring(false) {}
  bool substring :1;
} _MatcherTitleContains__isset;

class MatcherTitleContains {
 public:

  MatcherTitleContains(const MatcherTitleContains&);
  MatcherTitleContains& operator=(const MatcherTitleContains&);
  MatcherTitleContains() : substring() {
  }

  virtual ~MatcherTitleContains() throw();
  std::string substring;

  _MatcherTitleContains__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherTitleContains & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherTitleContains &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherTitleContains & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherTitleContains &a, MatcherTitleContains &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherTitleContains& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherTitleDoesNotContain__isset {
  _MatcherTitleDoesNotContain__isset() : substring(false) {}
  bool substring :1;
} _MatcherTitleDoesNotContain__isset;

class MatcherTitleDoesNotContain {
 public:

  MatcherTitleDoesNotContain(const MatcherTitleDoesNotContain&);
  MatcherTitleDoesNotContain& operator=(const MatcherTitleDoesNotContain&);
  MatcherTitleDoesNotContain() : substring() {
  }

  virtual ~MatcherTitleDoesNotContain() throw();
  std::string substring;

  _MatcherTitleDoesNotContain__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherTitleDoesNotContain & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherTitleDoesNotContain &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherTitleDoesNotContain & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherTitleDoesNotContain &a, MatcherTitleDoesNotContain &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherTitleDoesNotContain& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherBodyIs__isset {
  _MatcherBodyIs__isset() : expectedBody(false) {}
  bool expectedBody :1;
} _MatcherBodyIs__isset;

class MatcherBodyIs {
 public:

  MatcherBodyIs(const MatcherBodyIs&);
  MatcherBodyIs& operator=(const MatcherBodyIs&);
  MatcherBodyIs() : expectedBody() {
  }

  virtual ~MatcherBodyIs() throw();
  std::string expectedBody;

  _MatcherBodyIs__isset __isset;

  void __set_expectedBody(const std::string& val);

  bool operator == (const MatcherBodyIs & rhs) const
  {
    if (!(expectedBody == rhs.expectedBody))
      return false;
    return true;
  }
  bool operator != (const MatcherBodyIs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherBodyIs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherBodyIs &a, MatcherBodyIs &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherBodyIs& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherBodyContains__isset {
  _MatcherBodyContains__isset() : substring(false) {}
  bool substring :1;
} _MatcherBodyContains__isset;

class MatcherBodyContains {
 public:

  MatcherBodyContains(const MatcherBodyContains&);
  MatcherBodyContains& operator=(const MatcherBodyContains&);
  MatcherBodyContains() : substring() {
  }

  virtual ~MatcherBodyContains() throw();
  std::string substring;

  _MatcherBodyContains__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherBodyContains & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherBodyContains &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherBodyContains & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherBodyContains &a, MatcherBodyContains &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherBodyContains& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherBodyDoesNotContain__isset {
  _MatcherBodyDoesNotContain__isset() : substring(false) {}
  bool substring :1;
} _MatcherBodyDoesNotContain__isset;

class MatcherBodyDoesNotContain {
 public:

  MatcherBodyDoesNotContain(const MatcherBodyDoesNotContain&);
  MatcherBodyDoesNotContain& operator=(const MatcherBodyDoesNotContain&);
  MatcherBodyDoesNotContain() : substring() {
  }

  virtual ~MatcherBodyDoesNotContain() throw();
  std::string substring;

  _MatcherBodyDoesNotContain__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherBodyDoesNotContain & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherBodyDoesNotContain &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherBodyDoesNotContain & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherBodyDoesNotContain &a, MatcherBodyDoesNotContain &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherBodyDoesNotContain& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherUrgencyIs__isset {
  _MatcherUrgencyIs__isset() : urgency(false), urgencies(false) {}
  bool urgency :1;
  bool urgencies :1;
} _MatcherUrgencyIs__isset;

class MatcherUrgencyIs {
 public:

  MatcherUrgencyIs(const MatcherUrgencyIs&);
  MatcherUrgencyIs& operator=(const MatcherUrgencyIs&);
  MatcherUrgencyIs() : urgency(( ::tech::aroma::thrift::Urgency::type)0) {
  }

  virtual ~MatcherUrgencyIs() throw();
   ::tech::aroma::thrift::Urgency::type urgency;
  std::vector< ::tech::aroma::thrift::Urgency::type>  urgencies;

  _MatcherUrgencyIs__isset __isset;

  void __set_urgency(const  ::tech::aroma::thrift::Urgency::type val);

  void __set_urgencies(const std::vector< ::tech::aroma::thrift::Urgency::type> & val);

  bool operator == (const MatcherUrgencyIs & rhs) const
  {
    if (!(urgency == rhs.urgency))
      return false;
    if (__isset.urgencies != rhs.__isset.urgencies)
      return false;
    else if (__isset.urgencies && !(urgencies == rhs.urgencies))
      return false;
    return true;
  }
  bool operator != (const MatcherUrgencyIs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherUrgencyIs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherUrgencyIs &a, MatcherUrgencyIs &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherUrgencyIs& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherHostnameIs__isset {
  _MatcherHostnameIs__isset() : expectedHostname(false) {}
  bool expectedHostname :1;
} _MatcherHostnameIs__isset;

class MatcherHostnameIs {
 public:

  MatcherHostnameIs(const MatcherHostnameIs&);
  MatcherHostnameIs& operator=(const MatcherHostnameIs&);
  MatcherHostnameIs() : expectedHostname() {
  }

  virtual ~MatcherHostnameIs() throw();
  std::string expectedHostname;

  _MatcherHostnameIs__isset __isset;

  void __set_expectedHostname(const std::string& val);

  bool operator == (const MatcherHostnameIs & rhs) const
  {
    if (!(expectedHostname == rhs.expectedHostname))
      return false;
    return true;
  }
  bool operator != (const MatcherHostnameIs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherHostnameIs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherHostnameIs &a, MatcherHostnameIs &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherHostnameIs& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherHostnameContains__isset {
  _MatcherHostnameContains__isset() : substring(false) {}
  bool substring :1;
} _MatcherHostnameContains__isset;

class MatcherHostnameContains {
 public:

  MatcherHostnameContains(const MatcherHostnameContains&);
  MatcherHostnameContains& operator=(const MatcherHostnameContains&);
  MatcherHostnameContains() : substring() {
  }

  virtual ~MatcherHostnameContains() throw();
  std::string substring;

  _MatcherHostnameContains__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherHostnameContains & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherHostnameContains &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherHostnameContains & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherHostnameContains &a, MatcherHostnameContains &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherHostnameContains& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherHostnameDoesNotContain__isset {
  _MatcherHostnameDoesNotContain__isset() : substring(false) {}
  bool substring :1;
} _MatcherHostnameDoesNotContain__isset;

class MatcherHostnameDoesNotContain {
 public:

  MatcherHostnameDoesNotContain(const MatcherHostnameDoesNotContain&);
  MatcherHostnameDoesNotContain& operator=(const MatcherHostnameDoesNotContain&);
  MatcherHostnameDoesNotContain() : substring() {
  }

  virtual ~MatcherHostnameDoesNotContain() throw();
  std::string substring;

  _MatcherHostnameDoesNotContain__isset __isset;

  void __set_substring(const std::string& val);

  bool operator == (const MatcherHostnameDoesNotContain & rhs) const
  {
    if (!(substring == rhs.substring))
      return false;
    return true;
  }
  bool operator != (const MatcherHostnameDoesNotContain &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherHostnameDoesNotContain & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherHostnameDoesNotContain &a, MatcherHostnameDoesNotContain &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherHostnameDoesNotContain& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AromaMatcher__isset {
  _AromaMatcher__isset() : all(false), titleIs(false), titleIsNot(false), titleContains(false), titleDoesNotContain(false), bodyIs(false), bodyContains(false), bodyDoesNotContain(false), urgencyEquals(false), hostnameIs(false), hostnameContains(false), hostnameDoesNotContain(false) {}
  bool all :1;
  bool titleIs :1;
  bool titleIsNot :1;
  bool titleContains :1;
  bool titleDoesNotContain :1;
  bool bodyIs :1;
  bool bodyContains :1;
  bool bodyDoesNotContain :1;
  bool urgencyEquals :1;
  bool hostnameIs :1;
  bool hostnameContains :1;
  bool hostnameDoesNotContain :1;
} _AromaMatcher__isset;

class AromaMatcher {
 public:

  AromaMatcher(const AromaMatcher&);
  AromaMatcher& operator=(const AromaMatcher&);
  AromaMatcher() {
  }

  virtual ~AromaMatcher() throw();
  MatcherAll all;
  MatcherTitleIs titleIs;
  MatcherTitleIsNot titleIsNot;
  MatcherTitleContains titleContains;
  MatcherTitleDoesNotContain titleDoesNotContain;
  MatcherBodyIs bodyIs;
  MatcherBodyContains bodyContains;
  MatcherBodyDoesNotContain bodyDoesNotContain;
  MatcherUrgencyIs urgencyEquals;
  MatcherHostnameIs hostnameIs;
  MatcherHostnameContains hostnameContains;
  MatcherHostnameDoesNotContain hostnameDoesNotContain;

  _AromaMatcher__isset __isset;

  void __set_all(const MatcherAll& val);

  void __set_titleIs(const MatcherTitleIs& val);

  void __set_titleIsNot(const MatcherTitleIsNot& val);

  void __set_titleContains(const MatcherTitleContains& val);

  void __set_titleDoesNotContain(const MatcherTitleDoesNotContain& val);

  void __set_bodyIs(const MatcherBodyIs& val);

  void __set_bodyContains(const MatcherBodyContains& val);

  void __set_bodyDoesNotContain(const MatcherBodyDoesNotContain& val);

  void __set_urgencyEquals(const MatcherUrgencyIs& val);

  void __set_hostnameIs(const MatcherHostnameIs& val);

  void __set_hostnameContains(const MatcherHostnameContains& val);

  void __set_hostnameDoesNotContain(const MatcherHostnameDoesNotContain& val);

  bool operator == (const AromaMatcher & rhs) const
  {
    if (!(all == rhs.all))
      return false;
    if (!(titleIs == rhs.titleIs))
      return false;
    if (!(titleIsNot == rhs.titleIsNot))
      return false;
    if (!(titleContains == rhs.titleContains))
      return false;
    if (!(titleDoesNotContain == rhs.titleDoesNotContain))
      return false;
    if (!(bodyIs == rhs.bodyIs))
      return false;
    if (!(bodyContains == rhs.bodyContains))
      return false;
    if (!(bodyDoesNotContain == rhs.bodyDoesNotContain))
      return false;
    if (!(urgencyEquals == rhs.urgencyEquals))
      return false;
    if (!(hostnameIs == rhs.hostnameIs))
      return false;
    if (!(hostnameContains == rhs.hostnameContains))
      return false;
    if (!(hostnameDoesNotContain == rhs.hostnameDoesNotContain))
      return false;
    return true;
  }
  bool operator != (const AromaMatcher &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AromaMatcher & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AromaMatcher &a, AromaMatcher &b);

inline std::ostream& operator<<(std::ostream& out, const AromaMatcher& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionForwardToSlackChannel__isset {
  _ActionForwardToSlackChannel__isset() : slackChannel(false), includeBody(true) {}
  bool slackChannel :1;
  bool includeBody :1;
} _ActionForwardToSlackChannel__isset;

class ActionForwardToSlackChannel {
 public:

  ActionForwardToSlackChannel(const ActionForwardToSlackChannel&);
  ActionForwardToSlackChannel& operator=(const ActionForwardToSlackChannel&);
  ActionForwardToSlackChannel() : slackChannel(), includeBody(true) {
  }

  virtual ~ActionForwardToSlackChannel() throw();
  std::string slackChannel;
  bool includeBody;

  _ActionForwardToSlackChannel__isset __isset;

  void __set_slackChannel(const std::string& val);

  void __set_includeBody(const bool val);

  bool operator == (const ActionForwardToSlackChannel & rhs) const
  {
    if (!(slackChannel == rhs.slackChannel))
      return false;
    if (__isset.includeBody != rhs.__isset.includeBody)
      return false;
    else if (__isset.includeBody && !(includeBody == rhs.includeBody))
      return false;
    return true;
  }
  bool operator != (const ActionForwardToSlackChannel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionForwardToSlackChannel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionForwardToSlackChannel &a, ActionForwardToSlackChannel &b);

inline std::ostream& operator<<(std::ostream& out, const ActionForwardToSlackChannel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionForwardToSlackUser__isset {
  _ActionForwardToSlackUser__isset() : slackUsername(false), includeBody(true) {}
  bool slackUsername :1;
  bool includeBody :1;
} _ActionForwardToSlackUser__isset;

class ActionForwardToSlackUser {
 public:

  ActionForwardToSlackUser(const ActionForwardToSlackUser&);
  ActionForwardToSlackUser& operator=(const ActionForwardToSlackUser&);
  ActionForwardToSlackUser() : slackUsername(), includeBody(true) {
  }

  virtual ~ActionForwardToSlackUser() throw();
  std::string slackUsername;
  bool includeBody;

  _ActionForwardToSlackUser__isset __isset;

  void __set_slackUsername(const std::string& val);

  void __set_includeBody(const bool val);

  bool operator == (const ActionForwardToSlackUser & rhs) const
  {
    if (!(slackUsername == rhs.slackUsername))
      return false;
    if (__isset.includeBody != rhs.__isset.includeBody)
      return false;
    else if (__isset.includeBody && !(includeBody == rhs.includeBody))
      return false;
    return true;
  }
  bool operator != (const ActionForwardToSlackUser &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionForwardToSlackUser & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionForwardToSlackUser &a, ActionForwardToSlackUser &b);

inline std::ostream& operator<<(std::ostream& out, const ActionForwardToSlackUser& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionSendEmail__isset {
  _ActionSendEmail__isset() : emailAddress(false), includeBody(true) {}
  bool emailAddress :1;
  bool includeBody :1;
} _ActionSendEmail__isset;

class ActionSendEmail {
 public:

  ActionSendEmail(const ActionSendEmail&);
  ActionSendEmail& operator=(const ActionSendEmail&);
  ActionSendEmail() : emailAddress(), includeBody(true) {
  }

  virtual ~ActionSendEmail() throw();
  std::string emailAddress;
  bool includeBody;

  _ActionSendEmail__isset __isset;

  void __set_emailAddress(const std::string& val);

  void __set_includeBody(const bool val);

  bool operator == (const ActionSendEmail & rhs) const
  {
    if (!(emailAddress == rhs.emailAddress))
      return false;
    if (__isset.includeBody != rhs.__isset.includeBody)
      return false;
    else if (__isset.includeBody && !(includeBody == rhs.includeBody))
      return false;
    return true;
  }
  bool operator != (const ActionSendEmail &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionSendEmail & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionSendEmail &a, ActionSendEmail &b);

inline std::ostream& operator<<(std::ostream& out, const ActionSendEmail& obj)
{
  obj.printTo(out);
  return out;
}


class ActionSkipInbox {
 public:

  ActionSkipInbox(const ActionSkipInbox&);
  ActionSkipInbox& operator=(const ActionSkipInbox&);
  ActionSkipInbox() {
  }

  virtual ~ActionSkipInbox() throw();

  bool operator == (const ActionSkipInbox & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ActionSkipInbox &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionSkipInbox & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionSkipInbox &a, ActionSkipInbox &b);

inline std::ostream& operator<<(std::ostream& out, const ActionSkipInbox& obj)
{
  obj.printTo(out);
  return out;
}


class ActionDeleteMessage {
 public:

  ActionDeleteMessage(const ActionDeleteMessage&);
  ActionDeleteMessage& operator=(const ActionDeleteMessage&);
  ActionDeleteMessage() {
  }

  virtual ~ActionDeleteMessage() throw();

  bool operator == (const ActionDeleteMessage & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ActionDeleteMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionDeleteMessage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionDeleteMessage &a, ActionDeleteMessage &b);

inline std::ostream& operator<<(std::ostream& out, const ActionDeleteMessage& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionRespondToCode__isset {
  _ActionRespondToCode__isset() : messageToSend(false) {}
  bool messageToSend :1;
} _ActionRespondToCode__isset;

class ActionRespondToCode {
 public:

  ActionRespondToCode(const ActionRespondToCode&);
  ActionRespondToCode& operator=(const ActionRespondToCode&);
  ActionRespondToCode() : messageToSend() {
  }

  virtual ~ActionRespondToCode() throw();
  std::string messageToSend;

  _ActionRespondToCode__isset __isset;

  void __set_messageToSend(const std::string& val);

  bool operator == (const ActionRespondToCode & rhs) const
  {
    if (!(messageToSend == rhs.messageToSend))
      return false;
    return true;
  }
  bool operator != (const ActionRespondToCode &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionRespondToCode & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionRespondToCode &a, ActionRespondToCode &b);

inline std::ostream& operator<<(std::ostream& out, const ActionRespondToCode& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionForwardToUsers__isset {
  _ActionForwardToUsers__isset() : userIds(true) {}
  bool userIds :1;
} _ActionForwardToUsers__isset;

class ActionForwardToUsers {
 public:

  ActionForwardToUsers(const ActionForwardToUsers&);
  ActionForwardToUsers& operator=(const ActionForwardToUsers&);
  ActionForwardToUsers() {

  }

  virtual ~ActionForwardToUsers() throw();
  std::vector<uuid>  userIds;

  _ActionForwardToUsers__isset __isset;

  void __set_userIds(const std::vector<uuid> & val);

  bool operator == (const ActionForwardToUsers & rhs) const
  {
    if (!(userIds == rhs.userIds))
      return false;
    return true;
  }
  bool operator != (const ActionForwardToUsers &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionForwardToUsers & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionForwardToUsers &a, ActionForwardToUsers &b);

inline std::ostream& operator<<(std::ostream& out, const ActionForwardToUsers& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AromaAction__isset {
  _AromaAction__isset() : forwardToSlackChannel(false), forwardToSlackUser(false), sendEmail(false), skipInbox(false), deleteMessage(false), respondToCode(false), forwardToUsers(false) {}
  bool forwardToSlackChannel :1;
  bool forwardToSlackUser :1;
  bool sendEmail :1;
  bool skipInbox :1;
  bool deleteMessage :1;
  bool respondToCode :1;
  bool forwardToUsers :1;
} _AromaAction__isset;

class AromaAction {
 public:

  AromaAction(const AromaAction&);
  AromaAction& operator=(const AromaAction&);
  AromaAction() {
  }

  virtual ~AromaAction() throw();
  ActionForwardToSlackChannel forwardToSlackChannel;
  ActionForwardToSlackUser forwardToSlackUser;
  ActionSendEmail sendEmail;
  ActionSkipInbox skipInbox;
  ActionDeleteMessage deleteMessage;
  ActionRespondToCode respondToCode;
  ActionForwardToUsers forwardToUsers;

  _AromaAction__isset __isset;

  void __set_forwardToSlackChannel(const ActionForwardToSlackChannel& val);

  void __set_forwardToSlackUser(const ActionForwardToSlackUser& val);

  void __set_sendEmail(const ActionSendEmail& val);

  void __set_skipInbox(const ActionSkipInbox& val);

  void __set_deleteMessage(const ActionDeleteMessage& val);

  void __set_respondToCode(const ActionRespondToCode& val);

  void __set_forwardToUsers(const ActionForwardToUsers& val);

  bool operator == (const AromaAction & rhs) const
  {
    if (!(forwardToSlackChannel == rhs.forwardToSlackChannel))
      return false;
    if (!(forwardToSlackUser == rhs.forwardToSlackUser))
      return false;
    if (!(sendEmail == rhs.sendEmail))
      return false;
    if (!(skipInbox == rhs.skipInbox))
      return false;
    if (!(deleteMessage == rhs.deleteMessage))
      return false;
    if (!(respondToCode == rhs.respondToCode))
      return false;
    if (!(forwardToUsers == rhs.forwardToUsers))
      return false;
    return true;
  }
  bool operator != (const AromaAction &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AromaAction & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(AromaAction &a, AromaAction &b);

inline std::ostream& operator<<(std::ostream& out, const AromaAction& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Reaction__isset {
  _Reaction__isset() : matcher(false), action(false), name(false) {}
  bool matcher :1;
  bool action :1;
  bool name :1;
} _Reaction__isset;

class Reaction {
 public:

  Reaction(const Reaction&);
  Reaction& operator=(const Reaction&);
  Reaction() : name() {
  }

  virtual ~Reaction() throw();
  AromaMatcher matcher;
  AromaAction action;
  std::string name;

  _Reaction__isset __isset;

  void __set_matcher(const AromaMatcher& val);

  void __set_action(const AromaAction& val);

  void __set_name(const std::string& val);

  bool operator == (const Reaction & rhs) const
  {
    if (!(matcher == rhs.matcher))
      return false;
    if (!(action == rhs.action))
      return false;
    if (!(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const Reaction &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Reaction & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Reaction &a, Reaction &b);

inline std::ostream& operator<<(std::ostream& out, const Reaction& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
