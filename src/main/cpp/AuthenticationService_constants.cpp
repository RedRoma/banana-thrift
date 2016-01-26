/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "AuthenticationService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace authentication { namespace service {

const AuthenticationServiceConstants g_AuthenticationService_constants;

AuthenticationServiceConstants::AuthenticationServiceConstants() {
  SERVICE_PORT = 7026;

  PRODUCTION_ENDPOINT.hostname = "authentication-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp24;
  tmp24 = 7026;

  PRODUCTION_ENDPOINT.port = tmp24;

  BETA_ENDPOINT.hostname = "authentication-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp25;
  tmp25 = 7026;

  BETA_ENDPOINT.port = tmp25;

   ::aroma::banana::thrift::long tmp26;
  tmp26 = 60LL;

  DEFAULT_TOKEN_LIFETIME.value = tmp26;
  DEFAULT_TOKEN_LIFETIME.unit = ( ::aroma::banana::thrift::TimeUnit::type)4;

}

}}}}} // namespace

