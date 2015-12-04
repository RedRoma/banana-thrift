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
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
ProvisionServiceRequest = module.exports.ProvisionServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.programmingLanguage = null;
  this.organization = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = args.token;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.programmingLanguage !== undefined && args.programmingLanguage !== null) {
      this.programmingLanguage = args.programmingLanguage;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
  }
};
ProvisionServiceRequest.prototype = {};
ProvisionServiceRequest.prototype.read = function(input) {
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
        this.token = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.programmingLanguage = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString();
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

ProvisionServiceRequest.prototype.write = function(output) {
  output.writeStructBegin('ProvisionServiceRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRING, 1);
    output.writeString(this.token);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.programmingLanguage !== null && this.programmingLanguage !== undefined) {
    output.writeFieldBegin('programmingLanguage', Thrift.Type.STRING, 3);
    output.writeString(this.programmingLanguage);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 4);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ProvisionServiceResponse = module.exports.ProvisionServiceResponse = function(args) {
  this.bananaToken = null;
  this.serviceName = null;
  if (args) {
    if (args.bananaToken !== undefined && args.bananaToken !== null) {
      this.bananaToken = args.bananaToken;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
  }
};
ProvisionServiceResponse.prototype = {};
ProvisionServiceResponse.prototype.read = function(input) {
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
        this.bananaToken = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
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

ProvisionServiceResponse.prototype.write = function(output) {
  output.writeStructBegin('ProvisionServiceResponse');
  if (this.bananaToken !== null && this.bananaToken !== undefined) {
    output.writeFieldBegin('bananaToken', Thrift.Type.STRING, 1);
    output.writeString(this.bananaToken);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceRequest = module.exports.SubscribeToServiceRequest = function(args) {
  this.token = null;
  this.serviceName = null;
  this.organization = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = args.token;
    }
    if (args.serviceName !== undefined && args.serviceName !== null) {
      this.serviceName = args.serviceName;
    }
    if (args.organization !== undefined && args.organization !== null) {
      this.organization = args.organization;
    }
  }
};
SubscribeToServiceRequest.prototype = {};
SubscribeToServiceRequest.prototype.read = function(input) {
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
        this.token = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.serviceName = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.organization = input.readString();
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

SubscribeToServiceRequest.prototype.write = function(output) {
  output.writeStructBegin('SubscribeToServiceRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRING, 1);
    output.writeString(this.token);
    output.writeFieldEnd();
  }
  if (this.serviceName !== null && this.serviceName !== undefined) {
    output.writeFieldBegin('serviceName', Thrift.Type.STRING, 2);
    output.writeString(this.serviceName);
    output.writeFieldEnd();
  }
  if (this.organization !== null && this.organization !== undefined) {
    output.writeFieldBegin('organization', Thrift.Type.STRING, 3);
    output.writeString(this.organization);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SubscribeToServiceResponse = module.exports.SubscribeToServiceResponse = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = args.message;
    }
  }
};
SubscribeToServiceResponse.prototype = {};
SubscribeToServiceResponse.prototype.read = function(input) {
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

SubscribeToServiceResponse.prototype.write = function(output) {
  output.writeStructBegin('SubscribeToServiceResponse');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRING, 1);
    output.writeString(this.message);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckRequest = module.exports.RegisterHealthCheckRequest = function(args) {
  this.endpoint = null;
  if (args) {
    if (args.endpoint !== undefined && args.endpoint !== null) {
      this.endpoint = new Endpoint_ttypes.Endpoint(args.endpoint);
    }
  }
};
RegisterHealthCheckRequest.prototype = {};
RegisterHealthCheckRequest.prototype.read = function(input) {
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

RegisterHealthCheckRequest.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckRequest');
  if (this.endpoint !== null && this.endpoint !== undefined) {
    output.writeFieldBegin('endpoint', Thrift.Type.STRUCT, 1);
    this.endpoint.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckResponse = module.exports.RegisterHealthCheckResponse = function(args) {
};
RegisterHealthCheckResponse.prototype = {};
RegisterHealthCheckResponse.prototype.read = function(input) {
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

RegisterHealthCheckResponse.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

