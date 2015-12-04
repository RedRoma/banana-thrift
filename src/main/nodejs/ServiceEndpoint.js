//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Banana_ttypes = require('./Banana_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = require('./Endpoint_types');
//HELPER FUNCTIONS AND STRUCTURES

ServiceEndpoint_healthPoke_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.HealthPokeRequest(args.request);
    }
  }
};
ServiceEndpoint_healthPoke_args.prototype = {};
ServiceEndpoint_healthPoke_args.prototype.read = function(input) {
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
        this.request = new ttypes.HealthPokeRequest();
        this.request.read(input);
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

ServiceEndpoint_healthPoke_args.prototype.write = function(output) {
  output.writeStructBegin('ServiceEndpoint_healthPoke_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceEndpoint_healthPoke_result = function(args) {
  this.success = null;
  this.ex1 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.HealthPokeResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
  }
};
ServiceEndpoint_healthPoke_result.prototype = {};
ServiceEndpoint_healthPoke_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.HealthPokeResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
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

ServiceEndpoint_healthPoke_result.prototype.write = function(output) {
  output.writeStructBegin('ServiceEndpoint_healthPoke_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceEndpointClient = exports.Client = function(output, pClass) {
    this.output = output;
    this.pClass = pClass;
    this._seqid = 0;
    this._reqs = {};
};
ServiceEndpointClient.prototype = {};
ServiceEndpointClient.prototype.seqid = function() { return this._seqid; }
ServiceEndpointClient.prototype.new_seqid = function() { return this._seqid += 1; }
ServiceEndpointClient.prototype.healthPoke = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_healthPoke(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_healthPoke(request);
  }
};

ServiceEndpointClient.prototype.send_healthPoke = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('healthPoke', Thrift.MessageType.CALL, this.seqid());
  var args = new ServiceEndpoint_healthPoke_args();
  args.request = request;
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

ServiceEndpointClient.prototype.recv_healthPoke = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new ServiceEndpoint_healthPoke_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('healthPoke failed: unknown result');
};
ServiceEndpointProcessor = exports.Processor = function(handler) {
  this._handler = handler
}
ServiceEndpointProcessor.prototype.process = function(input, output) {
  var r = input.readMessageBegin();
  if (this['process_' + r.fname]) {
    return this['process_' + r.fname].call(this, r.rseqid, input, output);
  } else {
    input.skip(Thrift.Type.STRUCT);
    input.readMessageEnd();
    var x = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN_METHOD, 'Unknown function ' + r.fname);
    output.writeMessageBegin(r.fname, Thrift.MessageType.EXCEPTION, r.rseqid);
    x.write(output);
    output.writeMessageEnd();
    output.flush();
  }
}

ServiceEndpointProcessor.prototype.process_healthPoke = function(seqid, input, output) {
  var args = new ServiceEndpoint_healthPoke_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.healthPoke.length === 1) {
    Q.fcall(this._handler.healthPoke, args.request)
      .then(function(result) {
        var result = new ServiceEndpoint_healthPoke_result({success: result});
        output.writeMessageBegin("healthPoke", Thrift.MessageType.REPLY, seqid);
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        if (err instanceof Exceptions_ttypes.OperationFailedException) {
          var result = new ServiceEndpoint_healthPoke_result(err);
          output.writeMessageBegin("healthPoke", Thrift.MessageType.REPLY, seqid);
        } else {
          var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("healthPoke", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.healthPoke(args.request, function (err, result) {
      if (err == null || err instanceof Exceptions_ttypes.OperationFailedException) {
        var result = new ServiceEndpoint_healthPoke_result((err != null ? err : {success: result}));
        output.writeMessageBegin("healthPoke", Thrift.MessageType.REPLY, seqid);
      } else {
        var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("healthPoke", Thrift.MessageType.EXCEPTION, seqid);
      }
      result.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
}

