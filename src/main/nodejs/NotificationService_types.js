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
var Channels_ttypes = require('./Channels_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Events_ttypes = require('./Events_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
GetEventsRequest = module.exports.GetEventsRequest = function(args) {
  this.token = null;
  this.forUser = null;
  this.byApplication = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
    if (args.forUser !== undefined && args.forUser !== null) {
      this.forUser = args.forUser;
    }
    if (args.byApplication !== undefined && args.byApplication !== null) {
      this.byApplication = args.byApplication;
    }
  }
};
GetEventsRequest.prototype = {};
GetEventsRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.forUser = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.byApplication = input.readString();
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

GetEventsRequest.prototype.write = function(output) {
  output.writeStructBegin('GetEventsRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.forUser !== null && this.forUser !== undefined) {
    output.writeFieldBegin('forUser', Thrift.Type.STRING, 2);
    output.writeString(this.forUser);
    output.writeFieldEnd();
  }
  if (this.byApplication !== null && this.byApplication !== undefined) {
    output.writeFieldBegin('byApplication', Thrift.Type.STRING, 3);
    output.writeString(this.byApplication);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetEventsResponse = module.exports.GetEventsResponse = function(args) {
  this.events = null;
  if (args) {
    if (args.events !== undefined && args.events !== null) {
      this.events = Thrift.copyList(args.events, [null]);
    }
  }
};
GetEventsResponse.prototype = {};
GetEventsResponse.prototype.read = function(input) {
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
        this.events = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = new Events_ttypes.Event();
          elem6.read(input);
          this.events.push(elem6);
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

GetEventsResponse.prototype.write = function(output) {
  output.writeStructBegin('GetEventsResponse');
  if (this.events !== null && this.events !== undefined) {
    output.writeFieldBegin('events', Thrift.Type.LIST, 1);
    output.writeListBegin(Thrift.Type.STRUCT, this.events.length);
    for (var iter7 in this.events)
    {
      if (this.events.hasOwnProperty(iter7))
      {
        iter7 = this.events[iter7];
        iter7.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendNotificationRequest = module.exports.SendNotificationRequest = function(args) {
  this.token = null;
  this.event = null;
  this.channelsByUser = null;
  this.storeEvent = false;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.AuthenticationToken(args.token);
    }
    if (args.event !== undefined && args.event !== null) {
      this.event = new Events_ttypes.Event(args.event);
    }
    if (args.channelsByUser !== undefined && args.channelsByUser !== null) {
      this.channelsByUser = Thrift.copyMap(args.channelsByUser, [Thrift.copyList, null]);
    }
    if (args.storeEvent !== undefined && args.storeEvent !== null) {
      this.storeEvent = args.storeEvent;
    }
  }
};
SendNotificationRequest.prototype = {};
SendNotificationRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.AuthenticationToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.event = new Events_ttypes.Event();
        this.event.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.MAP) {
        var _size8 = 0;
        var _rtmp312;
        this.channelsByUser = {};
        var _ktype9 = 0;
        var _vtype10 = 0;
        _rtmp312 = input.readMapBegin();
        _ktype9 = _rtmp312.ktype;
        _vtype10 = _rtmp312.vtype;
        _size8 = _rtmp312.size;
        for (var _i13 = 0; _i13 < _size8; ++_i13)
        {
          var key14 = null;
          var val15 = null;
          key14 = new Aroma_ttypes.User();
          key14.read(input);
          var _size16 = 0;
          var _rtmp320;
          val15 = [];
          var _etype19 = 0;
          _rtmp320 = input.readListBegin();
          _etype19 = _rtmp320.etype;
          _size16 = _rtmp320.size;
          for (var _i21 = 0; _i21 < _size16; ++_i21)
          {
            var elem22 = null;
            elem22 = new Channels_ttypes.AromaChannel();
            elem22.read(input);
            val15.push(elem22);
          }
          input.readListEnd();
          this.channelsByUser[key14] = val15;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.BOOL) {
        this.storeEvent = input.readBool();
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

SendNotificationRequest.prototype.write = function(output) {
  output.writeStructBegin('SendNotificationRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.event !== null && this.event !== undefined) {
    output.writeFieldBegin('event', Thrift.Type.STRUCT, 2);
    this.event.write(output);
    output.writeFieldEnd();
  }
  if (this.channelsByUser !== null && this.channelsByUser !== undefined) {
    output.writeFieldBegin('channelsByUser', Thrift.Type.MAP, 3);
    output.writeMapBegin(Thrift.Type.STRUCT, Thrift.Type.LIST, Thrift.objectLength(this.channelsByUser));
    for (var kiter23 in this.channelsByUser)
    {
      if (this.channelsByUser.hasOwnProperty(kiter23))
      {
        var viter24 = this.channelsByUser[kiter23];
        kiter23.write(output);
        output.writeListBegin(Thrift.Type.STRUCT, viter24.length);
        for (var iter25 in viter24)
        {
          if (viter24.hasOwnProperty(iter25))
          {
            iter25 = viter24[iter25];
            iter25.write(output);
          }
        }
        output.writeListEnd();
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.storeEvent !== null && this.storeEvent !== undefined) {
    output.writeFieldBegin('storeEvent', Thrift.Type.BOOL, 4);
    output.writeBool(this.storeEvent);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendNotificationResponse = module.exports.SendNotificationResponse = function(args) {
  this.notificationId = null;
  if (args) {
    if (args.notificationId !== undefined && args.notificationId !== null) {
      this.notificationId = args.notificationId;
    }
  }
};
SendNotificationResponse.prototype = {};
SendNotificationResponse.prototype.read = function(input) {
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
        this.notificationId = input.readString();
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

SendNotificationResponse.prototype.write = function(output) {
  output.writeStructBegin('SendNotificationResponse');
  if (this.notificationId !== null && this.notificationId !== undefined) {
    output.writeFieldBegin('notificationId', Thrift.Type.STRING, 1);
    output.writeString(this.notificationId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.SERVICE_PORT = 7009;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'notification-srv.aroma.tech','port' : 7009});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'notification-srv.beta.aroma.tech','port' : 7009});
