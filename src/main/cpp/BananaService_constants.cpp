/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "BananaService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

const BananaServiceConstants g_BananaService_constants;

BananaServiceConstants::BananaServiceConstants() {
  API_VERSION = 1.4;

  PRODUCTION_ENDPOINT.hostname = "banana-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp151;
  tmp151 = 7001;

  PRODUCTION_ENDPOINT.port = tmp151;

  BETA_ENDPOINT.hostname = "banana-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp152;
  tmp152 = 7001;

  BETA_ENDPOINT.port = tmp152;

   ::aroma::banana::thrift::int tmp153;
  tmp153 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.width = tmp153;
   ::aroma::banana::thrift::int tmp154;
  tmp154 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.height = tmp154;

   ::aroma::banana::thrift::int tmp155;
  tmp155 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.width = tmp155;
   ::aroma::banana::thrift::int tmp156;
  tmp156 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.height = tmp156;

  MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

  MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

}

}}}} // namespace

