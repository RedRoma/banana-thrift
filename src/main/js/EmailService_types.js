//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


SendEmailRequest = function(args) {
  this.token = null;
  this.emailAddress = null;
  this.emailMessage = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new AuthenticationToken(args.token);
    }
    if (args.emailAddress !== undefined && args.emailAddress !== null) {
      this.emailAddress = args.emailAddress;
    }
    if (args.emailMessage !== undefined && args.emailMessage !== null) {
      this.emailMessage = new EmailMessage(args.emailMessage);
    }
  }
};
SendEmailRequest.prototype = {};
SendEmailRequest.prototype.read = function(input) {
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
        this.token = new AuthenticationToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.emailAddress = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.emailMessage = new EmailMessage();
        this.emailMessage.read(input);
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

SendEmailRequest.prototype.write = function(output) {
  output.writeStructBegin('SendEmailRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.emailAddress !== null && this.emailAddress !== undefined) {
    output.writeFieldBegin('emailAddress', Thrift.Type.STRING, 2);
    output.writeString(this.emailAddress);
    output.writeFieldEnd();
  }
  if (this.emailMessage !== null && this.emailMessage !== undefined) {
    output.writeFieldBegin('emailMessage', Thrift.Type.STRUCT, 3);
    this.emailMessage.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendEmailResponse = function(args) {
};
SendEmailResponse.prototype = {};
SendEmailResponse.prototype.read = function(input) {
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

SendEmailResponse.prototype.write = function(output) {
  output.writeStructBegin('SendEmailResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SERVICE_PORT = 7017;
PRODUCTION_ENDPOINT = new TcpEndpoint({
'hostname' : 'email-srv.aroma.tech','port' : 7017});
BETA_ENDPOINT = new TcpEndpoint({
'hostname' : 'email-srv.beta.aroma.tech','port' : 7017});
AROMA_EMAIL_ADDRESS = 'Aroma@RedRoma.tech';