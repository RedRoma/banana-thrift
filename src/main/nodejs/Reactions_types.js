//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Aroma_ttypes = require('./Aroma_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
MatcherAll = module.exports.MatcherAll = function(args) {
};
MatcherAll.prototype = {};
MatcherAll.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherAll.prototype.write = function(output) {
  output.writeStructBegin('MatcherAll');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherTitleIs = module.exports.MatcherTitleIs = function(args) {
  this.expectedTitle = null;
  if (args) {
    if (args.expectedTitle !== undefined && args.expectedTitle !== null) {
      this.expectedTitle = args.expectedTitle;
    }
  }
};
MatcherTitleIs.prototype = {};
MatcherTitleIs.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.expectedTitle = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherTitleIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherTitleIs');
  if (this.expectedTitle !== null && this.expectedTitle !== undefined) {
    output.writeFieldBegin('expectedTitle', Thrift.Type.STRING, 1);
    output.writeString(this.expectedTitle);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherTitleContains = module.exports.MatcherTitleContains = function(args) {
  this.substring = null;
  if (args) {
    if (args.substring !== undefined && args.substring !== null) {
      this.substring = args.substring;
    }
  }
};
MatcherTitleContains.prototype = {};
MatcherTitleContains.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.substring = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherTitleContains.prototype.write = function(output) {
  output.writeStructBegin('MatcherTitleContains');
  if (this.substring !== null && this.substring !== undefined) {
    output.writeFieldBegin('substring', Thrift.Type.STRING, 1);
    output.writeString(this.substring);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherBodyIs = module.exports.MatcherBodyIs = function(args) {
  this.expectedBody = null;
  if (args) {
    if (args.expectedBody !== undefined && args.expectedBody !== null) {
      this.expectedBody = args.expectedBody;
    }
  }
};
MatcherBodyIs.prototype = {};
MatcherBodyIs.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.expectedBody = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherBodyIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherBodyIs');
  if (this.expectedBody !== null && this.expectedBody !== undefined) {
    output.writeFieldBegin('expectedBody', Thrift.Type.STRING, 1);
    output.writeString(this.expectedBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherBodyContains = module.exports.MatcherBodyContains = function(args) {
  this.substring = null;
  if (args) {
    if (args.substring !== undefined && args.substring !== null) {
      this.substring = args.substring;
    }
  }
};
MatcherBodyContains.prototype = {};
MatcherBodyContains.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.substring = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherBodyContains.prototype.write = function(output) {
  output.writeStructBegin('MatcherBodyContains');
  if (this.substring !== null && this.substring !== undefined) {
    output.writeFieldBegin('substring', Thrift.Type.STRING, 1);
    output.writeString(this.substring);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherUrgencyIs = module.exports.MatcherUrgencyIs = function(args) {
  this.urgency = null;
  if (args) {
    if (args.urgency !== undefined && args.urgency !== null) {
      this.urgency = args.urgency;
    }
  }
};
MatcherUrgencyIs.prototype = {};
MatcherUrgencyIs.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.urgency = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherUrgencyIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherUrgencyIs');
  if (this.urgency !== null && this.urgency !== undefined) {
    output.writeFieldBegin('urgency', Thrift.Type.I32, 1);
    output.writeI32(this.urgency);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MatcherHostnameIs = module.exports.MatcherHostnameIs = function(args) {
  this.expectedHostname = null;
  if (args) {
    if (args.expectedHostname !== undefined && args.expectedHostname !== null) {
      this.expectedHostname = args.expectedHostname;
    }
  }
};
MatcherHostnameIs.prototype = {};
MatcherHostnameIs.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.expectedHostname = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MatcherHostnameIs.prototype.write = function(output) {
  output.writeStructBegin('MatcherHostnameIs');
  if (this.expectedHostname !== null && this.expectedHostname !== undefined) {
    output.writeFieldBegin('expectedHostname', Thrift.Type.STRING, 1);
    output.writeString(this.expectedHostname);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AromaMatcher = module.exports.AromaMatcher = function(args) {
  this.all = null;
  this.titleIs = null;
  this.titleContains = null;
  this.bodyIs = null;
  this.bodyContains = null;
  this.urgencyEquals = null;
  this.hostnameEquals = null;
  if (args) {
    if (args.all !== undefined && args.all !== null) {
      this.all = new ttypes.MatcherAll(args.all);
    }
    if (args.titleIs !== undefined && args.titleIs !== null) {
      this.titleIs = new ttypes.MatcherTitleIs(args.titleIs);
    }
    if (args.titleContains !== undefined && args.titleContains !== null) {
      this.titleContains = new ttypes.MatcherTitleContains(args.titleContains);
    }
    if (args.bodyIs !== undefined && args.bodyIs !== null) {
      this.bodyIs = new ttypes.MatcherBodyIs(args.bodyIs);
    }
    if (args.bodyContains !== undefined && args.bodyContains !== null) {
      this.bodyContains = new ttypes.MatcherBodyContains(args.bodyContains);
    }
    if (args.urgencyEquals !== undefined && args.urgencyEquals !== null) {
      this.urgencyEquals = new ttypes.MatcherUrgencyIs(args.urgencyEquals);
    }
    if (args.hostnameEquals !== undefined && args.hostnameEquals !== null) {
      this.hostnameEquals = new ttypes.MatcherHostnameIs(args.hostnameEquals);
    }
  }
};
AromaMatcher.prototype = {};
AromaMatcher.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.all = new ttypes.MatcherAll();
        this.all.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.titleIs = new ttypes.MatcherTitleIs();
        this.titleIs.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.titleContains = new ttypes.MatcherTitleContains();
        this.titleContains.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.bodyIs = new ttypes.MatcherBodyIs();
        this.bodyIs.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.bodyContains = new ttypes.MatcherBodyContains();
        this.bodyContains.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.urgencyEquals = new ttypes.MatcherUrgencyIs();
        this.urgencyEquals.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRUCT) {
        this.hostnameEquals = new ttypes.MatcherHostnameIs();
        this.hostnameEquals.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

AromaMatcher.prototype.write = function(output) {
  output.writeStructBegin('AromaMatcher');
  if (this.all !== null && this.all !== undefined) {
    output.writeFieldBegin('all', Thrift.Type.STRUCT, 1);
    this.all.write(output);
    output.writeFieldEnd();
  }
  if (this.titleIs !== null && this.titleIs !== undefined) {
    output.writeFieldBegin('titleIs', Thrift.Type.STRUCT, 2);
    this.titleIs.write(output);
    output.writeFieldEnd();
  }
  if (this.titleContains !== null && this.titleContains !== undefined) {
    output.writeFieldBegin('titleContains', Thrift.Type.STRUCT, 3);
    this.titleContains.write(output);
    output.writeFieldEnd();
  }
  if (this.bodyIs !== null && this.bodyIs !== undefined) {
    output.writeFieldBegin('bodyIs', Thrift.Type.STRUCT, 4);
    this.bodyIs.write(output);
    output.writeFieldEnd();
  }
  if (this.bodyContains !== null && this.bodyContains !== undefined) {
    output.writeFieldBegin('bodyContains', Thrift.Type.STRUCT, 5);
    this.bodyContains.write(output);
    output.writeFieldEnd();
  }
  if (this.urgencyEquals !== null && this.urgencyEquals !== undefined) {
    output.writeFieldBegin('urgencyEquals', Thrift.Type.STRUCT, 6);
    this.urgencyEquals.write(output);
    output.writeFieldEnd();
  }
  if (this.hostnameEquals !== null && this.hostnameEquals !== undefined) {
    output.writeFieldBegin('hostnameEquals', Thrift.Type.STRUCT, 7);
    this.hostnameEquals.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionPostToSlackChannel = module.exports.ActionPostToSlackChannel = function(args) {
  this.slackChannel = null;
  this.includeBody = true;
  if (args) {
    if (args.slackChannel !== undefined && args.slackChannel !== null) {
      this.slackChannel = args.slackChannel;
    }
    if (args.includeBody !== undefined && args.includeBody !== null) {
      this.includeBody = args.includeBody;
    }
  }
};
ActionPostToSlackChannel.prototype = {};
ActionPostToSlackChannel.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.slackChannel = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.BOOL) {
        this.includeBody = input.readBool();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionPostToSlackChannel.prototype.write = function(output) {
  output.writeStructBegin('ActionPostToSlackChannel');
  if (this.slackChannel !== null && this.slackChannel !== undefined) {
    output.writeFieldBegin('slackChannel', Thrift.Type.STRING, 1);
    output.writeString(this.slackChannel);
    output.writeFieldEnd();
  }
  if (this.includeBody !== null && this.includeBody !== undefined) {
    output.writeFieldBegin('includeBody', Thrift.Type.BOOL, 2);
    output.writeBool(this.includeBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionPostToSlackUser = module.exports.ActionPostToSlackUser = function(args) {
  this.slackUsername = null;
  this.includeBody = true;
  if (args) {
    if (args.slackUsername !== undefined && args.slackUsername !== null) {
      this.slackUsername = args.slackUsername;
    }
    if (args.includeBody !== undefined && args.includeBody !== null) {
      this.includeBody = args.includeBody;
    }
  }
};
ActionPostToSlackUser.prototype = {};
ActionPostToSlackUser.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.slackUsername = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.BOOL) {
        this.includeBody = input.readBool();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionPostToSlackUser.prototype.write = function(output) {
  output.writeStructBegin('ActionPostToSlackUser');
  if (this.slackUsername !== null && this.slackUsername !== undefined) {
    output.writeFieldBegin('slackUsername', Thrift.Type.STRING, 1);
    output.writeString(this.slackUsername);
    output.writeFieldEnd();
  }
  if (this.includeBody !== null && this.includeBody !== undefined) {
    output.writeFieldBegin('includeBody', Thrift.Type.BOOL, 2);
    output.writeBool(this.includeBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionSendEmail = module.exports.ActionSendEmail = function(args) {
  this.emailAddress = null;
  this.includeBody = true;
  if (args) {
    if (args.emailAddress !== undefined && args.emailAddress !== null) {
      this.emailAddress = args.emailAddress;
    }
    if (args.includeBody !== undefined && args.includeBody !== null) {
      this.includeBody = args.includeBody;
    }
  }
};
ActionSendEmail.prototype = {};
ActionSendEmail.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.emailAddress = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.BOOL) {
        this.includeBody = input.readBool();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionSendEmail.prototype.write = function(output) {
  output.writeStructBegin('ActionSendEmail');
  if (this.emailAddress !== null && this.emailAddress !== undefined) {
    output.writeFieldBegin('emailAddress', Thrift.Type.STRING, 1);
    output.writeString(this.emailAddress);
    output.writeFieldEnd();
  }
  if (this.includeBody !== null && this.includeBody !== undefined) {
    output.writeFieldBegin('includeBody', Thrift.Type.BOOL, 2);
    output.writeBool(this.includeBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionIgnore = module.exports.ActionIgnore = function(args) {
};
ActionIgnore.prototype = {};
ActionIgnore.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionIgnore.prototype.write = function(output) {
  output.writeStructBegin('ActionIgnore');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionDeleteMessage = module.exports.ActionDeleteMessage = function(args) {
};
ActionDeleteMessage.prototype = {};
ActionDeleteMessage.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionDeleteMessage.prototype.write = function(output) {
  output.writeStructBegin('ActionDeleteMessage');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionRespondToCode = module.exports.ActionRespondToCode = function(args) {
  this.messageToSend = null;
  if (args) {
    if (args.messageToSend !== undefined && args.messageToSend !== null) {
      this.messageToSend = args.messageToSend;
    }
  }
};
ActionRespondToCode.prototype = {};
ActionRespondToCode.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.messageToSend = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionRespondToCode.prototype.write = function(output) {
  output.writeStructBegin('ActionRespondToCode');
  if (this.messageToSend !== null && this.messageToSend !== undefined) {
    output.writeFieldBegin('messageToSend', Thrift.Type.STRING, 1);
    output.writeString(this.messageToSend);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ActionForwardToUsers = module.exports.ActionForwardToUsers = function(args) {
  this.userIds = [];
  if (args) {
    if (args.userIds !== undefined && args.userIds !== null) {
      this.userIds = Thrift.copyList(args.userIds, [null]);
    }
  }
};
ActionForwardToUsers.prototype = {};
ActionForwardToUsers.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.userIds = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = input.readString();
          this.userIds.push(elem6);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

ActionForwardToUsers.prototype.write = function(output) {
  output.writeStructBegin('ActionForwardToUsers');
  if (this.userIds !== null && this.userIds !== undefined) {
    output.writeFieldBegin('userIds', Thrift.Type.LIST, 1);
    output.writeListBegin(Thrift.Type.STRING, this.userIds.length);
    for (var iter7 in this.userIds)
    {
      if (this.userIds.hasOwnProperty(iter7))
      {
        iter7 = this.userIds[iter7];
        output.writeString(iter7);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AromaAction = module.exports.AromaAction = function(args) {
  this.postToSlackChannel = null;
  this.postToSlackUser = null;
  this.sendEmail = null;
  this.ignore = null;
  this.deleteMessage = null;
  this.respondToCode = null;
  this.forwardToUsers = null;
  if (args) {
    if (args.postToSlackChannel !== undefined && args.postToSlackChannel !== null) {
      this.postToSlackChannel = new ttypes.ActionPostToSlackChannel(args.postToSlackChannel);
    }
    if (args.postToSlackUser !== undefined && args.postToSlackUser !== null) {
      this.postToSlackUser = new ttypes.ActionPostToSlackUser(args.postToSlackUser);
    }
    if (args.sendEmail !== undefined && args.sendEmail !== null) {
      this.sendEmail = new ttypes.ActionSendEmail(args.sendEmail);
    }
    if (args.ignore !== undefined && args.ignore !== null) {
      this.ignore = new ttypes.ActionIgnore(args.ignore);
    }
    if (args.deleteMessage !== undefined && args.deleteMessage !== null) {
      this.deleteMessage = new ttypes.ActionDeleteMessage(args.deleteMessage);
    }
    if (args.respondToCode !== undefined && args.respondToCode !== null) {
      this.respondToCode = new ttypes.ActionRespondToCode(args.respondToCode);
    }
    if (args.forwardToUsers !== undefined && args.forwardToUsers !== null) {
      this.forwardToUsers = new ttypes.ActionForwardToUsers(args.forwardToUsers);
    }
  }
};
AromaAction.prototype = {};
AromaAction.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.postToSlackChannel = new ttypes.ActionPostToSlackChannel();
        this.postToSlackChannel.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.postToSlackUser = new ttypes.ActionPostToSlackUser();
        this.postToSlackUser.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.sendEmail = new ttypes.ActionSendEmail();
        this.sendEmail.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.ignore = new ttypes.ActionIgnore();
        this.ignore.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.deleteMessage = new ttypes.ActionDeleteMessage();
        this.deleteMessage.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRUCT) {
        this.respondToCode = new ttypes.ActionRespondToCode();
        this.respondToCode.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRUCT) {
        this.forwardToUsers = new ttypes.ActionForwardToUsers();
        this.forwardToUsers.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

AromaAction.prototype.write = function(output) {
  output.writeStructBegin('AromaAction');
  if (this.postToSlackChannel !== null && this.postToSlackChannel !== undefined) {
    output.writeFieldBegin('postToSlackChannel', Thrift.Type.STRUCT, 1);
    this.postToSlackChannel.write(output);
    output.writeFieldEnd();
  }
  if (this.postToSlackUser !== null && this.postToSlackUser !== undefined) {
    output.writeFieldBegin('postToSlackUser', Thrift.Type.STRUCT, 2);
    this.postToSlackUser.write(output);
    output.writeFieldEnd();
  }
  if (this.sendEmail !== null && this.sendEmail !== undefined) {
    output.writeFieldBegin('sendEmail', Thrift.Type.STRUCT, 3);
    this.sendEmail.write(output);
    output.writeFieldEnd();
  }
  if (this.ignore !== null && this.ignore !== undefined) {
    output.writeFieldBegin('ignore', Thrift.Type.STRUCT, 4);
    this.ignore.write(output);
    output.writeFieldEnd();
  }
  if (this.deleteMessage !== null && this.deleteMessage !== undefined) {
    output.writeFieldBegin('deleteMessage', Thrift.Type.STRUCT, 5);
    this.deleteMessage.write(output);
    output.writeFieldEnd();
  }
  if (this.respondToCode !== null && this.respondToCode !== undefined) {
    output.writeFieldBegin('respondToCode', Thrift.Type.STRUCT, 6);
    this.respondToCode.write(output);
    output.writeFieldEnd();
  }
  if (this.forwardToUsers !== null && this.forwardToUsers !== undefined) {
    output.writeFieldBegin('forwardToUsers', Thrift.Type.STRUCT, 7);
    this.forwardToUsers.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Reaction = module.exports.Reaction = function(args) {
  this.matcher = null;
  this.action = null;
  if (args) {
    if (args.matcher !== undefined && args.matcher !== null) {
      this.matcher = new ttypes.AromaMatcher(args.matcher);
    }
    if (args.action !== undefined && args.action !== null) {
      this.action = new ttypes.AromaAction(args.action);
    }
  }
};
Reaction.prototype = {};
Reaction.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.matcher = new ttypes.AromaMatcher();
        this.matcher.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.action = new ttypes.AromaAction();
        this.action.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Reaction.prototype.write = function(output) {
  output.writeStructBegin('Reaction');
  if (this.matcher !== null && this.matcher !== undefined) {
    output.writeFieldBegin('matcher', Thrift.Type.STRUCT, 1);
    this.matcher.write(output);
    output.writeFieldEnd();
  }
  if (this.action !== null && this.action !== undefined) {
    output.writeFieldBegin('action', Thrift.Type.STRUCT, 2);
    this.action.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

