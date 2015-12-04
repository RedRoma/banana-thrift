// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "BananaService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::tech::aroma::banana::thrift::service;

class BananaServiceHandler : virtual public BananaServiceIf {
 public:
  BananaServiceHandler() {
    // Your initialization goes here
  }

  void provisionService(ProvisionServiceResponse& _return, const ProvisionServiceRequest& request) {
    // Your implementation goes here
    printf("provisionService\n");
  }

  void registerHealthCheck(RegisterHealthCheckResponse& _return, const RegisterHealthCheckRequest& request) {
    // Your implementation goes here
    printf("registerHealthCheck\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<BananaServiceHandler> handler(new BananaServiceHandler());
  shared_ptr<TProcessor> processor(new BananaServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

