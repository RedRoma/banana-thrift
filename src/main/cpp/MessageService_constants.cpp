/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MessageService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace message { namespace service {

const MessageServiceConstants g_MessageService_constants;

MessageServiceConstants::MessageServiceConstants() {
  SERVICE_PORT = 7011;

  PRODUCTION_ENDPOINT.hostname = "message-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp0;
  tmp0 = 7011;

  PRODUCTION_ENDPOINT.port = tmp0;

  BETA_ENDPOINT.hostname = "message-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp1;
  tmp1 = 7011;

  BETA_ENDPOINT.port = tmp1;

   ::aroma::banana::thrift::long tmp2;
  tmp2 = 1LL;

  DEFAULT_MESSAGE_LIFETIME.value = tmp2;
  DEFAULT_MESSAGE_LIFETIME.unit = ( ::aroma::banana::thrift::TimeUnit::type)4;

}

}}}}} // namespace

