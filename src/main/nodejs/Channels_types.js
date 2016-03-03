//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Aroma_ttypes = require('./Aroma_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
SlackChannel = module.exports.SlackChannel = function(args) {
  this.domainName = null;
  this.channelName = null;
  this.slackToken = null;
  if (args) {
    if (args.domainName !== undefined && args.domainName !== null) {
      this.domainName = args.domainName;
    }
    if (args.channelName !== undefined && args.channelName !== null) {
      this.channelName = args.channelName;
    }
    if (args.slackToken !== undefined && args.slackToken !== null) {
      this.slackToken = args.slackToken;
    }
  }
};
SlackChannel.prototype = {};
SlackChannel.prototype.read = function(input) {
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
        this.domainName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.channelName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.slackToken = input.readString();
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

SlackChannel.prototype.write = function(output) {
  output.writeStructBegin('SlackChannel');
  if (this.domainName !== null && this.domainName !== undefined) {
    output.writeFieldBegin('domainName', Thrift.Type.STRING, 1);
    output.writeString(this.domainName);
    output.writeFieldEnd();
  }
  if (this.channelName !== null && this.channelName !== undefined) {
    output.writeFieldBegin('channelName', Thrift.Type.STRING, 2);
    output.writeString(this.channelName);
    output.writeFieldEnd();
  }
  if (this.slackToken !== null && this.slackToken !== undefined) {
    output.writeFieldBegin('slackToken', Thrift.Type.STRING, 3);
    output.writeString(this.slackToken);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SlackUsername = module.exports.SlackUsername = function(args) {
  this.domainName = null;
  this.username = null;
  this.slackToken = null;
  if (args) {
    if (args.domainName !== undefined && args.domainName !== null) {
      this.domainName = args.domainName;
    }
    if (args.username !== undefined && args.username !== null) {
      this.username = args.username;
    }
    if (args.slackToken !== undefined && args.slackToken !== null) {
      this.slackToken = args.slackToken;
    }
  }
};
SlackUsername.prototype = {};
SlackUsername.prototype.read = function(input) {
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
        this.domainName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.username = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.slackToken = input.readString();
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

SlackUsername.prototype.write = function(output) {
  output.writeStructBegin('SlackUsername');
  if (this.domainName !== null && this.domainName !== undefined) {
    output.writeFieldBegin('domainName', Thrift.Type.STRING, 1);
    output.writeString(this.domainName);
    output.writeFieldEnd();
  }
  if (this.username !== null && this.username !== undefined) {
    output.writeFieldBegin('username', Thrift.Type.STRING, 2);
    output.writeString(this.username);
    output.writeFieldEnd();
  }
  if (this.slackToken !== null && this.slackToken !== undefined) {
    output.writeFieldBegin('slackToken', Thrift.Type.STRING, 3);
    output.writeString(this.slackToken);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Email = module.exports.Email = function(args) {
  this.emailAddress = null;
  this.subject = 'Aroma - New Message';
  if (args) {
    if (args.emailAddress !== undefined && args.emailAddress !== null) {
      this.emailAddress = args.emailAddress;
    }
    if (args.subject !== undefined && args.subject !== null) {
      this.subject = args.subject;
    }
  }
};
Email.prototype = {};
Email.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.STRING) {
        this.subject = input.readString();
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

Email.prototype.write = function(output) {
  output.writeStructBegin('Email');
  if (this.emailAddress !== null && this.emailAddress !== undefined) {
    output.writeFieldBegin('emailAddress', Thrift.Type.STRING, 1);
    output.writeString(this.emailAddress);
    output.writeFieldEnd();
  }
  if (this.subject !== null && this.subject !== undefined) {
    output.writeFieldBegin('subject', Thrift.Type.STRING, 2);
    output.writeString(this.subject);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

CustomChannel = module.exports.CustomChannel = function(args) {
  this.endpoint = null;
  if (args) {
    if (args.endpoint !== undefined && args.endpoint !== null) {
      this.endpoint = new Endpoint_ttypes.Endpoint(args.endpoint);
    }
  }
};
CustomChannel.prototype = {};
CustomChannel.prototype.read = function(input) {
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
        this.endpoint = new Endpoint_ttypes.Endpoint();
        this.endpoint.read(input);
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

CustomChannel.prototype.write = function(output) {
  output.writeStructBegin('CustomChannel');
  if (this.endpoint !== null && this.endpoint !== undefined) {
    output.writeFieldBegin('endpoint', Thrift.Type.STRUCT, 1);
    this.endpoint.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

AromaChannel = module.exports.AromaChannel = function(args) {
  this.slackChannel = null;
  this.slackUsername = null;
  this.email = null;
  this.customChannel = null;
  if (args) {
    if (args.slackChannel !== undefined && args.slackChannel !== null) {
      this.slackChannel = new ttypes.SlackChannel(args.slackChannel);
    }
    if (args.slackUsername !== undefined && args.slackUsername !== null) {
      this.slackUsername = new ttypes.SlackUsername(args.slackUsername);
    }
    if (args.email !== undefined && args.email !== null) {
      this.email = new ttypes.Email(args.email);
    }
    if (args.customChannel !== undefined && args.customChannel !== null) {
      this.customChannel = new ttypes.CustomChannel(args.customChannel);
    }
  }
};
AromaChannel.prototype = {};
AromaChannel.prototype.read = function(input) {
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
        this.slackChannel = new ttypes.SlackChannel();
        this.slackChannel.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.slackUsername = new ttypes.SlackUsername();
        this.slackUsername.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.email = new ttypes.Email();
        this.email.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.customChannel = new ttypes.CustomChannel();
        this.customChannel.read(input);
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

AromaChannel.prototype.write = function(output) {
  output.writeStructBegin('AromaChannel');
  if (this.slackChannel !== null && this.slackChannel !== undefined) {
    output.writeFieldBegin('slackChannel', Thrift.Type.STRUCT, 1);
    this.slackChannel.write(output);
    output.writeFieldEnd();
  }
  if (this.slackUsername !== null && this.slackUsername !== undefined) {
    output.writeFieldBegin('slackUsername', Thrift.Type.STRUCT, 2);
    this.slackUsername.write(output);
    output.writeFieldEnd();
  }
  if (this.email !== null && this.email !== undefined) {
    output.writeFieldBegin('email', Thrift.Type.STRUCT, 3);
    this.email.write(output);
    output.writeFieldEnd();
  }
  if (this.customChannel !== null && this.customChannel !== undefined) {
    output.writeFieldBegin('customChannel', Thrift.Type.STRUCT, 4);
    this.customChannel.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ChannelInfo = module.exports.ChannelInfo = function(args) {
  this.channel = null;
  this.timeRegistered = null;
  if (args) {
    if (args.channel !== undefined && args.channel !== null) {
      this.channel = new ttypes.AromaChannel(args.channel);
    }
    if (args.timeRegistered !== undefined && args.timeRegistered !== null) {
      this.timeRegistered = args.timeRegistered;
    }
  }
};
ChannelInfo.prototype = {};
ChannelInfo.prototype.read = function(input) {
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
        this.channel = new ttypes.AromaChannel();
        this.channel.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.timeRegistered = input.readI64();
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

ChannelInfo.prototype.write = function(output) {
  output.writeStructBegin('ChannelInfo');
  if (this.channel !== null && this.channel !== undefined) {
    output.writeFieldBegin('channel', Thrift.Type.STRUCT, 1);
    this.channel.write(output);
    output.writeFieldEnd();
  }
  if (this.timeRegistered !== null && this.timeRegistered !== undefined) {
    output.writeFieldBegin('timeRegistered', Thrift.Type.I64, 2);
    output.writeI64(this.timeRegistered);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ReceiveMessageRequest = module.exports.ReceiveMessageRequest = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = new Aroma_ttypes.Message(args.message);
    }
  }
};
ReceiveMessageRequest.prototype = {};
ReceiveMessageRequest.prototype.read = function(input) {
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
        this.message = new Aroma_ttypes.Message();
        this.message.read(input);
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

ReceiveMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('ReceiveMessageRequest');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 1);
    this.message.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

