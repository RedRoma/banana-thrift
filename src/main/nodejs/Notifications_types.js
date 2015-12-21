//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types')
var Banana_ttypes = require('./Banana_types')


var ttypes = module.exports = {};
HealthCheckFailed = module.exports.HealthCheckFailed = function(args) {
  this.message = null;
  this.hostname = null;
  this.application = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.hostname !== undefined && args.hostname !== null) {
      this.hostname = args.hostname;
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Banana_ttypes.Application(args.application);
    }
  }
};
HealthCheckFailed.prototype = {};
HealthCheckFailed.prototype.read = function(input) {
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
        this.message = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.hostname = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Banana_ttypes.Application();
        this.application.read(input);
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

HealthCheckFailed.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckFailed');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  if (this.hostname !== null && this.hostname !== undefined) {
    output.writeFieldBegin('hostname', Thrift.Type.STRING, 2);
    output.writeString(this.hostname);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 3);
    this.application.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

HealthCheckBackToNormal = module.exports.HealthCheckBackToNormal = function(args) {
  this.message = null;
  this.application = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Banana_ttypes.Application(args.application);
    }
  }
};
HealthCheckBackToNormal.prototype = {};
HealthCheckBackToNormal.prototype.read = function(input) {
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
        this.message = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Banana_ttypes.Application();
        this.application.read(input);
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

HealthCheckBackToNormal.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckBackToNormal');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 2);
    this.application.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationTokenRenewed = module.exports.ApplicationTokenRenewed = function(args) {
  this.user = null;
  this.applicationToken = null;
  this.application = null;
  if (args) {
    if (args.user !== undefined && args.user !== null) {
      this.user = new Banana_ttypes.User(args.user);
    }
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new Authentication_ttypes.ApplicationToken(args.applicationToken);
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Banana_ttypes.Application(args.application);
    }
  }
};
ApplicationTokenRenewed.prototype = {};
ApplicationTokenRenewed.prototype.read = function(input) {
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
        this.user = new Banana_ttypes.User();
        this.user.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationToken = new Authentication_ttypes.ApplicationToken();
        this.applicationToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Banana_ttypes.Application();
        this.application.read(input);
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

ApplicationTokenRenewed.prototype.write = function(output) {
  output.writeStructBegin('ApplicationTokenRenewed');
  if (this.user !== null && this.user !== undefined) {
    output.writeFieldBegin('user', Thrift.Type.STRUCT, 1);
    this.user.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 2);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 3);
    this.application.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationTokenRegenerated = module.exports.ApplicationTokenRegenerated = function(args) {
  this.user = null;
  this.applicationToken = null;
  this.application = null;
  if (args) {
    if (args.user !== undefined && args.user !== null) {
      this.user = new Banana_ttypes.User(args.user);
    }
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new Authentication_ttypes.ApplicationToken(args.applicationToken);
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Banana_ttypes.Application(args.application);
    }
  }
};
ApplicationTokenRegenerated.prototype = {};
ApplicationTokenRegenerated.prototype.read = function(input) {
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
        this.user = new Banana_ttypes.User();
        this.user.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationToken = new Authentication_ttypes.ApplicationToken();
        this.applicationToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Banana_ttypes.Application();
        this.application.read(input);
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

ApplicationTokenRegenerated.prototype.write = function(output) {
  output.writeStructBegin('ApplicationTokenRegenerated');
  if (this.user !== null && this.user !== undefined) {
    output.writeFieldBegin('user', Thrift.Type.STRUCT, 1);
    this.user.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 2);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 3);
    this.application.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ApplicationSentMessage = module.exports.ApplicationSentMessage = function(args) {
  this.message = null;
  this.application = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = new Banana_ttypes.Message(args.message);
    }
    if (args.application !== undefined && args.application !== null) {
      this.application = new Banana_ttypes.Application(args.application);
    }
  }
};
ApplicationSentMessage.prototype = {};
ApplicationSentMessage.prototype.read = function(input) {
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
        this.message = new Banana_ttypes.Message();
        this.message.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.application = new Banana_ttypes.Application();
        this.application.read(input);
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

ApplicationSentMessage.prototype.write = function(output) {
  output.writeStructBegin('ApplicationSentMessage');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 1);
    this.message.write(output);
    output.writeFieldEnd();
  }
  if (this.application !== null && this.application !== undefined) {
    output.writeFieldBegin('application', Thrift.Type.STRUCT, 2);
    this.application.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Event = module.exports.Event = function(args) {
  this.healthCheckFailed = null;
  this.healthCheckBackToNormal = null;
  this.applicationTokenRenewed = null;
  this.applicationTokenRegenerated = null;
  this.applicationSentMessage = null;
  if (args) {
    if (args.healthCheckFailed !== undefined && args.healthCheckFailed !== null) {
      this.healthCheckFailed = new ttypes.HealthCheckFailed(args.healthCheckFailed);
    }
    if (args.healthCheckBackToNormal !== undefined && args.healthCheckBackToNormal !== null) {
      this.healthCheckBackToNormal = new ttypes.HealthCheckBackToNormal(args.healthCheckBackToNormal);
    }
    if (args.applicationTokenRenewed !== undefined && args.applicationTokenRenewed !== null) {
      this.applicationTokenRenewed = new ttypes.ApplicationTokenRenewed(args.applicationTokenRenewed);
    }
    if (args.applicationTokenRegenerated !== undefined && args.applicationTokenRegenerated !== null) {
      this.applicationTokenRegenerated = new ttypes.ApplicationTokenRegenerated(args.applicationTokenRegenerated);
    }
    if (args.applicationSentMessage !== undefined && args.applicationSentMessage !== null) {
      this.applicationSentMessage = new ttypes.ApplicationSentMessage(args.applicationSentMessage);
    }
  }
};
Event.prototype = {};
Event.prototype.read = function(input) {
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
        this.healthCheckFailed = new ttypes.HealthCheckFailed();
        this.healthCheckFailed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.healthCheckBackToNormal = new ttypes.HealthCheckBackToNormal();
        this.healthCheckBackToNormal.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationTokenRenewed = new ttypes.ApplicationTokenRenewed();
        this.applicationTokenRenewed.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationTokenRegenerated = new ttypes.ApplicationTokenRegenerated();
        this.applicationTokenRegenerated.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRUCT) {
        this.applicationSentMessage = new ttypes.ApplicationSentMessage();
        this.applicationSentMessage.read(input);
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

Event.prototype.write = function(output) {
  output.writeStructBegin('Event');
  if (this.healthCheckFailed !== null && this.healthCheckFailed !== undefined) {
    output.writeFieldBegin('healthCheckFailed', Thrift.Type.STRUCT, 1);
    this.healthCheckFailed.write(output);
    output.writeFieldEnd();
  }
  if (this.healthCheckBackToNormal !== null && this.healthCheckBackToNormal !== undefined) {
    output.writeFieldBegin('healthCheckBackToNormal', Thrift.Type.STRUCT, 2);
    this.healthCheckBackToNormal.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationTokenRenewed !== null && this.applicationTokenRenewed !== undefined) {
    output.writeFieldBegin('applicationTokenRenewed', Thrift.Type.STRUCT, 3);
    this.applicationTokenRenewed.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationTokenRegenerated !== null && this.applicationTokenRegenerated !== undefined) {
    output.writeFieldBegin('applicationTokenRegenerated', Thrift.Type.STRUCT, 4);
    this.applicationTokenRegenerated.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationSentMessage !== null && this.applicationSentMessage !== undefined) {
    output.writeFieldBegin('applicationSentMessage', Thrift.Type.STRUCT, 5);
    this.applicationSentMessage.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Notification = module.exports.Notification = function(args) {
  this.event = null;
  this.timestamp = null;
  if (args) {
    if (args.event !== undefined && args.event !== null) {
      this.event = new ttypes.Event(args.event);
    }
    if (args.timestamp !== undefined && args.timestamp !== null) {
      this.timestamp = args.timestamp;
    }
  }
};
Notification.prototype = {};
Notification.prototype.read = function(input) {
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
        this.event = new ttypes.Event();
        this.event.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.timestamp = input.readI64();
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

Notification.prototype.write = function(output) {
  output.writeStructBegin('Notification');
  if (this.event !== null && this.event !== undefined) {
    output.writeFieldBegin('event', Thrift.Type.STRUCT, 1);
    this.event.write(output);
    output.writeFieldEnd();
  }
  if (this.timestamp !== null && this.timestamp !== undefined) {
    output.writeFieldBegin('timestamp', Thrift.Type.I64, 2);
    output.writeI64(this.timestamp);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

