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
#include "Exceptions_types.h"


namespace tech { namespace aroma { namespace thrift { namespace reactions {

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::long long;

typedef  ::tech::aroma::thrift::timestamp timestamp;

typedef  ::tech::aroma::thrift::uuid uuid;

class MatcherAll;

class MatcherTitleIs;

class MatcherTitleContains;

class MatcherBodyIs;

class MatcherBodyContains;

class MatcherUrgencyEquals;

class MatcherHostnameEquals;

class Matcher;

class ActionPostToSlackChannel;

class ActionPostToSlackUser;

class ActionSendEmail;

class ActionIgnore;

class ActionDeleteMessage;

class ActionRespondToCode;

class ActionForwardToUsers;

class Action;

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

typedef struct _MatcherUrgencyEquals__isset {
  _MatcherUrgencyEquals__isset() : urgency(false) {}
  bool urgency :1;
} _MatcherUrgencyEquals__isset;

class MatcherUrgencyEquals {
 public:

  MatcherUrgencyEquals(const MatcherUrgencyEquals&);
  MatcherUrgencyEquals& operator=(const MatcherUrgencyEquals&);
  MatcherUrgencyEquals() : urgency(( ::tech::aroma::thrift::Urgency::type)0) {
  }

  virtual ~MatcherUrgencyEquals() throw();
   ::tech::aroma::thrift::Urgency::type urgency;

  _MatcherUrgencyEquals__isset __isset;

  void __set_urgency(const  ::tech::aroma::thrift::Urgency::type val);

  bool operator == (const MatcherUrgencyEquals & rhs) const
  {
    if (!(urgency == rhs.urgency))
      return false;
    return true;
  }
  bool operator != (const MatcherUrgencyEquals &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherUrgencyEquals & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherUrgencyEquals &a, MatcherUrgencyEquals &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherUrgencyEquals& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MatcherHostnameEquals__isset {
  _MatcherHostnameEquals__isset() : expectedHostname(false) {}
  bool expectedHostname :1;
} _MatcherHostnameEquals__isset;

class MatcherHostnameEquals {
 public:

  MatcherHostnameEquals(const MatcherHostnameEquals&);
  MatcherHostnameEquals& operator=(const MatcherHostnameEquals&);
  MatcherHostnameEquals() : expectedHostname() {
  }

  virtual ~MatcherHostnameEquals() throw();
  std::string expectedHostname;

  _MatcherHostnameEquals__isset __isset;

  void __set_expectedHostname(const std::string& val);

  bool operator == (const MatcherHostnameEquals & rhs) const
  {
    if (!(expectedHostname == rhs.expectedHostname))
      return false;
    return true;
  }
  bool operator != (const MatcherHostnameEquals &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MatcherHostnameEquals & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MatcherHostnameEquals &a, MatcherHostnameEquals &b);

inline std::ostream& operator<<(std::ostream& out, const MatcherHostnameEquals& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Matcher__isset {
  _Matcher__isset() : all(false), titleIs(false), titleContains(false), bodyIs(false), bodyContains(false), urgencyEquals(false), hostnameEquals(false) {}
  bool all :1;
  bool titleIs :1;
  bool titleContains :1;
  bool bodyIs :1;
  bool bodyContains :1;
  bool urgencyEquals :1;
  bool hostnameEquals :1;
} _Matcher__isset;

class Matcher {
 public:

  Matcher(const Matcher&);
  Matcher& operator=(const Matcher&);
  Matcher() {
  }

  virtual ~Matcher() throw();
  MatcherAll all;
  MatcherTitleIs titleIs;
  MatcherTitleContains titleContains;
  MatcherBodyIs bodyIs;
  MatcherBodyContains bodyContains;
  MatcherUrgencyEquals urgencyEquals;
  MatcherHostnameEquals hostnameEquals;

  _Matcher__isset __isset;

  void __set_all(const MatcherAll& val);

  void __set_titleIs(const MatcherTitleIs& val);

  void __set_titleContains(const MatcherTitleContains& val);

  void __set_bodyIs(const MatcherBodyIs& val);

  void __set_bodyContains(const MatcherBodyContains& val);

  void __set_urgencyEquals(const MatcherUrgencyEquals& val);

  void __set_hostnameEquals(const MatcherHostnameEquals& val);

  bool operator == (const Matcher & rhs) const
  {
    if (!(all == rhs.all))
      return false;
    if (!(titleIs == rhs.titleIs))
      return false;
    if (!(titleContains == rhs.titleContains))
      return false;
    if (!(bodyIs == rhs.bodyIs))
      return false;
    if (!(bodyContains == rhs.bodyContains))
      return false;
    if (!(urgencyEquals == rhs.urgencyEquals))
      return false;
    if (!(hostnameEquals == rhs.hostnameEquals))
      return false;
    return true;
  }
  bool operator != (const Matcher &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Matcher & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Matcher &a, Matcher &b);

inline std::ostream& operator<<(std::ostream& out, const Matcher& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionPostToSlackChannel__isset {
  _ActionPostToSlackChannel__isset() : slackChannel(false), includeBody(true) {}
  bool slackChannel :1;
  bool includeBody :1;
} _ActionPostToSlackChannel__isset;

class ActionPostToSlackChannel {
 public:

  ActionPostToSlackChannel(const ActionPostToSlackChannel&);
  ActionPostToSlackChannel& operator=(const ActionPostToSlackChannel&);
  ActionPostToSlackChannel() : slackChannel(), includeBody(true) {
  }

  virtual ~ActionPostToSlackChannel() throw();
  std::string slackChannel;
  bool includeBody;

  _ActionPostToSlackChannel__isset __isset;

  void __set_slackChannel(const std::string& val);

  void __set_includeBody(const bool val);

  bool operator == (const ActionPostToSlackChannel & rhs) const
  {
    if (!(slackChannel == rhs.slackChannel))
      return false;
    if (__isset.includeBody != rhs.__isset.includeBody)
      return false;
    else if (__isset.includeBody && !(includeBody == rhs.includeBody))
      return false;
    return true;
  }
  bool operator != (const ActionPostToSlackChannel &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionPostToSlackChannel & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionPostToSlackChannel &a, ActionPostToSlackChannel &b);

inline std::ostream& operator<<(std::ostream& out, const ActionPostToSlackChannel& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ActionPostToSlackUser__isset {
  _ActionPostToSlackUser__isset() : slackUsername(false), includeBody(true) {}
  bool slackUsername :1;
  bool includeBody :1;
} _ActionPostToSlackUser__isset;

class ActionPostToSlackUser {
 public:

  ActionPostToSlackUser(const ActionPostToSlackUser&);
  ActionPostToSlackUser& operator=(const ActionPostToSlackUser&);
  ActionPostToSlackUser() : slackUsername(), includeBody(true) {
  }

  virtual ~ActionPostToSlackUser() throw();
  std::string slackUsername;
  bool includeBody;

  _ActionPostToSlackUser__isset __isset;

  void __set_slackUsername(const std::string& val);

  void __set_includeBody(const bool val);

  bool operator == (const ActionPostToSlackUser & rhs) const
  {
    if (!(slackUsername == rhs.slackUsername))
      return false;
    if (__isset.includeBody != rhs.__isset.includeBody)
      return false;
    else if (__isset.includeBody && !(includeBody == rhs.includeBody))
      return false;
    return true;
  }
  bool operator != (const ActionPostToSlackUser &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionPostToSlackUser & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionPostToSlackUser &a, ActionPostToSlackUser &b);

inline std::ostream& operator<<(std::ostream& out, const ActionPostToSlackUser& obj)
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


class ActionIgnore {
 public:

  ActionIgnore(const ActionIgnore&);
  ActionIgnore& operator=(const ActionIgnore&);
  ActionIgnore() {
  }

  virtual ~ActionIgnore() throw();

  bool operator == (const ActionIgnore & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ActionIgnore &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActionIgnore & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ActionIgnore &a, ActionIgnore &b);

inline std::ostream& operator<<(std::ostream& out, const ActionIgnore& obj)
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

typedef struct _Action__isset {
  _Action__isset() : postToSlackChannel(false), postToSlackUser(false), sendEmail(false), ignore(false), deleteMessage(false), respondToCode(false), forwardToUsers(false) {}
  bool postToSlackChannel :1;
  bool postToSlackUser :1;
  bool sendEmail :1;
  bool ignore :1;
  bool deleteMessage :1;
  bool respondToCode :1;
  bool forwardToUsers :1;
} _Action__isset;

class Action {
 public:

  Action(const Action&);
  Action& operator=(const Action&);
  Action() {
  }

  virtual ~Action() throw();
  ActionPostToSlackChannel postToSlackChannel;
  ActionPostToSlackUser postToSlackUser;
  ActionSendEmail sendEmail;
  ActionIgnore ignore;
  ActionDeleteMessage deleteMessage;
  ActionRespondToCode respondToCode;
  ActionForwardToUsers forwardToUsers;

  _Action__isset __isset;

  void __set_postToSlackChannel(const ActionPostToSlackChannel& val);

  void __set_postToSlackUser(const ActionPostToSlackUser& val);

  void __set_sendEmail(const ActionSendEmail& val);

  void __set_ignore(const ActionIgnore& val);

  void __set_deleteMessage(const ActionDeleteMessage& val);

  void __set_respondToCode(const ActionRespondToCode& val);

  void __set_forwardToUsers(const ActionForwardToUsers& val);

  bool operator == (const Action & rhs) const
  {
    if (!(postToSlackChannel == rhs.postToSlackChannel))
      return false;
    if (!(postToSlackUser == rhs.postToSlackUser))
      return false;
    if (!(sendEmail == rhs.sendEmail))
      return false;
    if (!(ignore == rhs.ignore))
      return false;
    if (!(deleteMessage == rhs.deleteMessage))
      return false;
    if (!(respondToCode == rhs.respondToCode))
      return false;
    if (!(forwardToUsers == rhs.forwardToUsers))
      return false;
    return true;
  }
  bool operator != (const Action &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Action & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Action &a, Action &b);

inline std::ostream& operator<<(std::ostream& out, const Action& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Reaction__isset {
  _Reaction__isset() : matcher(false), action(false) {}
  bool matcher :1;
  bool action :1;
} _Reaction__isset;

class Reaction {
 public:

  Reaction(const Reaction&);
  Reaction& operator=(const Reaction&);
  Reaction() {
  }

  virtual ~Reaction() throw();
  Matcher matcher;
  Action action;

  _Reaction__isset __isset;

  void __set_matcher(const Matcher& val);

  void __set_action(const Action& val);

  bool operator == (const Reaction & rhs) const
  {
    if (!(matcher == rhs.matcher))
      return false;
    if (!(action == rhs.action))
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
