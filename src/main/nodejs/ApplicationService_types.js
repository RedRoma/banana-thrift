//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types')
var Aroma_ttypes = require('./Aroma_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
SendMessageRequest = module.exports.SendMessageRequest = function(args) {
  this.applicationToken = null;
  this.body = null;
  this.urgency = 1;
  this.timeOfMessage = null;
  this.title = null;
  this.hostname = null;
  this.macAddress = null;
  this.ipv4Address = null;
  if (args) {
    if (args.applicationToken !== undefined && args.applicationToken !== null) {
      this.applicationToken = new Authentication_ttypes.ApplicationToken(args.applicationToken);
    }
    if (args.body !== undefined && args.body !== null) {
      this.body = args.body;
    }
    if (args.urgency !== undefined && args.urgency !== null) {
      this.urgency = args.urgency;
    }
    if (args.timeOfMessage !== undefined && args.timeOfMessage !== null) {
      this.timeOfMessage = args.timeOfMessage;
    }
    if (args.title !== undefined && args.title !== null) {
      this.title = args.title;
    }
    if (args.hostname !== undefined && args.hostname !== null) {
      this.hostname = args.hostname;
    }
    if (args.macAddress !== undefined && args.macAddress !== null) {
      this.macAddress = args.macAddress;
    }
    if (args.ipv4Address !== undefined && args.ipv4Address !== null) {
      this.ipv4Address = args.ipv4Address;
    }
  }
};
SendMessageRequest.prototype = {};
SendMessageRequest.prototype.read = function(input) {
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
        this.applicationToken = new Authentication_ttypes.ApplicationToken();
        this.applicationToken.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.body = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.urgency = input.readI32();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I64) {
        this.timeOfMessage = input.readI64();
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.title = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.hostname = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRING) {
        this.macAddress = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.STRING) {
        this.ipv4Address = input.readString();
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

SendMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('SendMessageRequest');
  if (this.applicationToken !== null && this.applicationToken !== undefined) {
    output.writeFieldBegin('applicationToken', Thrift.Type.STRUCT, 1);
    this.applicationToken.write(output);
    output.writeFieldEnd();
  }
  if (this.body !== null && this.body !== undefined) {
    output.writeFieldBegin('body', Thrift.Type.STRING, 2);
    output.writeString(this.body);
    output.writeFieldEnd();
  }
  if (this.urgency !== null && this.urgency !== undefined) {
    output.writeFieldBegin('urgency', Thrift.Type.I32, 3);
    output.writeI32(this.urgency);
    output.writeFieldEnd();
  }
  if (this.timeOfMessage !== null && this.timeOfMessage !== undefined) {
    output.writeFieldBegin('timeOfMessage', Thrift.Type.I64, 4);
    output.writeI64(this.timeOfMessage);
    output.writeFieldEnd();
  }
  if (this.title !== null && this.title !== undefined) {
    output.writeFieldBegin('title', Thrift.Type.STRING, 5);
    output.writeString(this.title);
    output.writeFieldEnd();
  }
  if (this.hostname !== null && this.hostname !== undefined) {
    output.writeFieldBegin('hostname', Thrift.Type.STRING, 6);
    output.writeString(this.hostname);
    output.writeFieldEnd();
  }
  if (this.macAddress !== null && this.macAddress !== undefined) {
    output.writeFieldBegin('macAddress', Thrift.Type.STRING, 7);
    output.writeString(this.macAddress);
    output.writeFieldEnd();
  }
  if (this.ipv4Address !== null && this.ipv4Address !== undefined) {
    output.writeFieldBegin('ipv4Address', Thrift.Type.STRING, 8);
    output.writeString(this.ipv4Address);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendMessageResponse = module.exports.SendMessageResponse = function(args) {
  this.messageId = null;
  if (args) {
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
  }
};
SendMessageResponse.prototype = {};
SendMessageResponse.prototype.read = function(input) {
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
        this.messageId = input.readString();
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

SendMessageResponse.prototype.write = function(output) {
  output.writeStructBegin('SendMessageResponse');
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 1);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.SERVICE_PORT = 7002;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'application-srv.aroma.tech','port' : 7002});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'application-srv.beta.aroma.tech','port' : 7002});
