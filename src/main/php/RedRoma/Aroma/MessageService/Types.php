<?php
namespace RedRoma\Aroma\MessageService;

/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;


final class Constant extends \Thrift\Type\TConstant {
  static protected $SERVICE_PORT;
  static protected $PRODUCTION_ENDPOINT;
  static protected $BETA_ENDPOINT;
  static protected $DEFAULT_MESSAGE_LIFETIME;

  static protected function init_SERVICE_PORT() {
    return 7011;
  }

  static protected function init_PRODUCTION_ENDPOINT() {
    return new \RedRoma\Aroma\Endpoint\TcpEndpoint(array(
      "hostname" => "message-srv.aroma.tech",
      "port" => 7011,
    ));
  }

  static protected function init_BETA_ENDPOINT() {
    return new \RedRoma\Aroma\Endpoint\TcpEndpoint(array(
      "hostname" => "message-srv.beta.aroma.tech",
      "port" => 7011,
    ));
  }

  static protected function init_DEFAULT_MESSAGE_LIFETIME() {
    return     /**
     * The Default lifetime of a Regular Message sent to Aroma.
     */
new \RedRoma\Aroma\LengthOfTime(array(
      "value" => 1,
      "unit" =>       5,
    ));
  }
}


