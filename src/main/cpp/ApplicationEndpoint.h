/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ApplicationEndpoint_H
#define ApplicationEndpoint_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "Endpoint_types.h"

namespace aroma { namespace thrift { namespace endpoint {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ApplicationEndpointIf {
 public:
  virtual ~ApplicationEndpointIf() {}
  virtual void healthPoke(HealthPokeResponse& _return, const HealthPokeRequest& request) = 0;
};

class ApplicationEndpointIfFactory {
 public:
  typedef ApplicationEndpointIf Handler;

  virtual ~ApplicationEndpointIfFactory() {}

  virtual ApplicationEndpointIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ApplicationEndpointIf* /* handler */) = 0;
};

class ApplicationEndpointIfSingletonFactory : virtual public ApplicationEndpointIfFactory {
 public:
  ApplicationEndpointIfSingletonFactory(const boost::shared_ptr<ApplicationEndpointIf>& iface) : iface_(iface) {}
  virtual ~ApplicationEndpointIfSingletonFactory() {}

  virtual ApplicationEndpointIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ApplicationEndpointIf* /* handler */) {}

 protected:
  boost::shared_ptr<ApplicationEndpointIf> iface_;
};

class ApplicationEndpointNull : virtual public ApplicationEndpointIf {
 public:
  virtual ~ApplicationEndpointNull() {}
  void healthPoke(HealthPokeResponse& /* _return */, const HealthPokeRequest& /* request */) {
    return;
  }
};

typedef struct _ApplicationEndpoint_healthPoke_args__isset {
  _ApplicationEndpoint_healthPoke_args__isset() : request(false) {}
  bool request :1;
} _ApplicationEndpoint_healthPoke_args__isset;

class ApplicationEndpoint_healthPoke_args {
 public:

  ApplicationEndpoint_healthPoke_args(const ApplicationEndpoint_healthPoke_args&);
  ApplicationEndpoint_healthPoke_args& operator=(const ApplicationEndpoint_healthPoke_args&);
  ApplicationEndpoint_healthPoke_args() {
  }

  virtual ~ApplicationEndpoint_healthPoke_args() throw();
  HealthPokeRequest request;

  _ApplicationEndpoint_healthPoke_args__isset __isset;

  void __set_request(const HealthPokeRequest& val);

  bool operator == (const ApplicationEndpoint_healthPoke_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const ApplicationEndpoint_healthPoke_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationEndpoint_healthPoke_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ApplicationEndpoint_healthPoke_pargs {
 public:


  virtual ~ApplicationEndpoint_healthPoke_pargs() throw();
  const HealthPokeRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationEndpoint_healthPoke_result__isset {
  _ApplicationEndpoint_healthPoke_result__isset() : success(false), ex1(false) {}
  bool success :1;
  bool ex1 :1;
} _ApplicationEndpoint_healthPoke_result__isset;

class ApplicationEndpoint_healthPoke_result {
 public:

  ApplicationEndpoint_healthPoke_result(const ApplicationEndpoint_healthPoke_result&);
  ApplicationEndpoint_healthPoke_result& operator=(const ApplicationEndpoint_healthPoke_result&);
  ApplicationEndpoint_healthPoke_result() {
  }

  virtual ~ApplicationEndpoint_healthPoke_result() throw();
  HealthPokeResponse success;
  OperationFailedException ex1;

  _ApplicationEndpoint_healthPoke_result__isset __isset;

  void __set_success(const HealthPokeResponse& val);

  void __set_ex1(const OperationFailedException& val);

  bool operator == (const ApplicationEndpoint_healthPoke_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    return true;
  }
  bool operator != (const ApplicationEndpoint_healthPoke_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationEndpoint_healthPoke_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationEndpoint_healthPoke_presult__isset {
  _ApplicationEndpoint_healthPoke_presult__isset() : success(false), ex1(false) {}
  bool success :1;
  bool ex1 :1;
} _ApplicationEndpoint_healthPoke_presult__isset;

class ApplicationEndpoint_healthPoke_presult {
 public:


  virtual ~ApplicationEndpoint_healthPoke_presult() throw();
  HealthPokeResponse* success;
  OperationFailedException* ex1;

  _ApplicationEndpoint_healthPoke_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ApplicationEndpointClient : virtual public ApplicationEndpointIf {
 public:
  ApplicationEndpointClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ApplicationEndpointClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void healthPoke(HealthPokeResponse& _return, const HealthPokeRequest& request);
  void send_healthPoke(const HealthPokeRequest& request);
  void recv_healthPoke(HealthPokeResponse& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ApplicationEndpointProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ApplicationEndpointIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ApplicationEndpointProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_healthPoke(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ApplicationEndpointProcessor(boost::shared_ptr<ApplicationEndpointIf> iface) :
    iface_(iface) {
    processMap_["healthPoke"] = &ApplicationEndpointProcessor::process_healthPoke;
  }

  virtual ~ApplicationEndpointProcessor() {}
};

class ApplicationEndpointProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ApplicationEndpointProcessorFactory(const ::boost::shared_ptr< ApplicationEndpointIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ApplicationEndpointIfFactory > handlerFactory_;
};

class ApplicationEndpointMultiface : virtual public ApplicationEndpointIf {
 public:
  ApplicationEndpointMultiface(std::vector<boost::shared_ptr<ApplicationEndpointIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ApplicationEndpointMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ApplicationEndpointIf> > ifaces_;
  ApplicationEndpointMultiface() {}
  void add(boost::shared_ptr<ApplicationEndpointIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void healthPoke(HealthPokeResponse& _return, const HealthPokeRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->healthPoke(_return, request);
    }
    ifaces_[i]->healthPoke(_return, request);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ApplicationEndpointConcurrentClient : virtual public ApplicationEndpointIf {
 public:
  ApplicationEndpointConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ApplicationEndpointConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void healthPoke(HealthPokeResponse& _return, const HealthPokeRequest& request);
  int32_t send_healthPoke(const HealthPokeRequest& request);
  void recv_healthPoke(HealthPokeResponse& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}} // namespace

#endif
