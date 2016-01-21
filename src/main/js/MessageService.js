//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


//HELPER FUNCTIONS AND STRUCTURES

MessageService_getApiVersion_args = function(args) {
};
MessageService_getApiVersion_args.prototype = {};
MessageService_getApiVersion_args.prototype.read = function(input) {
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

MessageService_getApiVersion_args.prototype.write = function(output) {
        output.writeStructBegin('MessageService_getApiVersion_args');
        output.writeFieldStop();
        output.writeStructEnd();
        return;
      };

MessageService_getApiVersion_result = function(args) {
        this.success = null;
        if (args) {
                if (args.success !== undefined && args.success !== null) {
                        this.success = args.success;
                }
        }
};
MessageService_getApiVersion_result.prototype = {};
MessageService_getApiVersion_result.prototype.read = function(input) {
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
            if (ftype == Thrift.Type.DOUBLE) {
              this.success = input.readDouble().value;
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

MessageService_getApiVersion_result.prototype.write = function(output) {
        output.writeStructBegin('MessageService_getApiVersion_result');
        if (this.success !== null && this.success !== undefined) {
          output.writeFieldBegin('success', Thrift.Type.DOUBLE, 0);
          output.writeDouble(this.success);
          output.writeFieldEnd();
        }
        output.writeFieldStop();
        output.writeStructEnd();
        return;
      };

MessageServiceClient = function(input, output) {
          this.input = input;
          this.output = (!output) ? input : output;
          this.seqid = 0;
      };
      MessageServiceClient.prototype = {};
MessageServiceClient.prototype.getApiVersion = function(callback) {
        this.send_getApiVersion(callback); 
        if (!callback) {
          return this.recv_getApiVersion();
        }
};

MessageServiceClient.prototype.send_getApiVersion = function(callback) {
        this.output.writeMessageBegin('getApiVersion', Thrift.MessageType.CALL, this.seqid);
        var args = new MessageService_getApiVersion_args();
        args.write(this.output);
        this.output.writeMessageEnd();
        if (callback) {
          var self = this;
          this.output.getTransport().flush(true, function() {
            var result = null;
            try {
              result = self.recv_getApiVersion();
            } catch (e) {
              result = e;
            }
            callback(result);
          });
        } else {
          return this.output.getTransport().flush();
        }
};

MessageServiceClient.prototype.recv_getApiVersion = function() {
        var ret = this.input.readMessageBegin();
        var fname = ret.fname;
        var mtype = ret.mtype;
        var rseqid = ret.rseqid;
        if (mtype == Thrift.MessageType.EXCEPTION) {
          var x = new Thrift.TApplicationException();
          x.read(this.input);
          this.input.readMessageEnd();
          throw x;
        }
        var result = new MessageService_getApiVersion_result();
        result.read(this.input);
        this.input.readMessageEnd();

        if (null !== result.success) {
          return result.success;
        }
        throw 'getApiVersion failed: unknown result';
};
