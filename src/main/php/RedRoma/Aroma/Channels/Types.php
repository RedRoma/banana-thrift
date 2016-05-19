<?php
namespace RedRoma\Aroma\Channels;

/**
 * Autogenerated by Thrift Compiler (0.9.3)
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


class IOSDevice {
  static $_TSPEC;

  /**
   * Device Token is serialized and stored as a Base64 encoded String of the original binary token.
   * 
   * @var string
   */
  public $deviceToken = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'deviceToken',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['deviceToken'])) {
        $this->deviceToken = $vals['deviceToken'];
      }
    }
  }

  public function getName() {
    return 'IOSDevice';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->deviceToken);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('IOSDevice');
    if ($this->deviceToken !== null) {
      $xfer += $output->writeFieldBegin('deviceToken', TType::STRING, 1);
      $xfer += $output->writeString($this->deviceToken);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class AndroidDevice {
  static $_TSPEC;

  /**
   * @var string
   */
  public $registrationId = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'registrationId',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['registrationId'])) {
        $this->registrationId = $vals['registrationId'];
      }
    }
  }

  public function getName() {
    return 'AndroidDevice';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->registrationId);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('AndroidDevice');
    if ($this->registrationId !== null) {
      $xfer += $output->writeFieldBegin('registrationId', TType::STRING, 1);
      $xfer += $output->writeString($this->registrationId);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class WindowsPhoneDevice {
  static $_TSPEC;


  public function __construct() {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        );
    }
  }

  public function getName() {
    return 'WindowsPhoneDevice';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('WindowsPhoneDevice');
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * A Mobile Device is capable of receiving Push Notifications
 * using one of the Established platforms.
 */
class MobileDevice {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\Channels\IOSDevice
   */
  public $iosDevice = null;
  /**
   * @var \RedRoma\Aroma\Channels\AndroidDevice
   */
  public $androidDevice = null;
  /**
   * @var \RedRoma\Aroma\Channels\WindowsPhoneDevice
   */
  public $windowsPhoneDevice = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'iosDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\IOSDevice',
          ),
        2 => array(
          'var' => 'androidDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\AndroidDevice',
          ),
        3 => array(
          'var' => 'windowsPhoneDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\WindowsPhoneDevice',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['iosDevice'])) {
        $this->iosDevice = $vals['iosDevice'];
      }
      if (isset($vals['androidDevice'])) {
        $this->androidDevice = $vals['androidDevice'];
      }
      if (isset($vals['windowsPhoneDevice'])) {
        $this->windowsPhoneDevice = $vals['windowsPhoneDevice'];
      }
    }
  }

  public function getName() {
    return 'MobileDevice';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->iosDevice = new \RedRoma\Aroma\Channels\IOSDevice();
            $xfer += $this->iosDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRUCT) {
            $this->androidDevice = new \RedRoma\Aroma\Channels\AndroidDevice();
            $xfer += $this->androidDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRUCT) {
            $this->windowsPhoneDevice = new \RedRoma\Aroma\Channels\WindowsPhoneDevice();
            $xfer += $this->windowsPhoneDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MobileDevice');
    if ($this->iosDevice !== null) {
      if (!is_object($this->iosDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('iosDevice', TType::STRUCT, 1);
      $xfer += $this->iosDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->androidDevice !== null) {
      if (!is_object($this->androidDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('androidDevice', TType::STRUCT, 2);
      $xfer += $this->androidDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->windowsPhoneDevice !== null) {
      if (!is_object($this->windowsPhoneDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('windowsPhoneDevice', TType::STRUCT, 3);
      $xfer += $this->windowsPhoneDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * This is the Payload sent with Push Notifications. It is serialized as JSON. *
 */
class PushNotificationPayload {
  static $_TSPEC;

  /**
   * @var string
   */
  public $messageId = null;
  /**
   * @var string
   */
  public $applicationId = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'messageId',
          'type' => TType::STRING,
          ),
        2 => array(
          'var' => 'applicationId',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['messageId'])) {
        $this->messageId = $vals['messageId'];
      }
      if (isset($vals['applicationId'])) {
        $this->applicationId = $vals['applicationId'];
      }
    }
  }

  public function getName() {
    return 'PushNotificationPayload';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->messageId);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->applicationId);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('PushNotificationPayload');
    if ($this->messageId !== null) {
      $xfer += $output->writeFieldBegin('messageId', TType::STRING, 1);
      $xfer += $output->writeString($this->messageId);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->applicationId !== null) {
      $xfer += $output->writeFieldBegin('applicationId', TType::STRING, 2);
      $xfer += $output->writeString($this->applicationId);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * It's a bit confusing, but "Channel" here refers to
 * a specific "Slack Channel" in a Team Slack Account,
 * for example, #operations, #development.
 */
class SlackChannel {
  static $_TSPEC;

  /**
   * @var string
   */
  public $domainName = null;
  /**
   * @var string
   */
  public $channelName = null;
  /**
   * @var string
   */
  public $slackToken = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'domainName',
          'type' => TType::STRING,
          ),
        2 => array(
          'var' => 'channelName',
          'type' => TType::STRING,
          ),
        3 => array(
          'var' => 'slackToken',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['domainName'])) {
        $this->domainName = $vals['domainName'];
      }
      if (isset($vals['channelName'])) {
        $this->channelName = $vals['channelName'];
      }
      if (isset($vals['slackToken'])) {
        $this->slackToken = $vals['slackToken'];
      }
    }
  }

  public function getName() {
    return 'SlackChannel';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->domainName);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->channelName);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->slackToken);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('SlackChannel');
    if ($this->domainName !== null) {
      $xfer += $output->writeFieldBegin('domainName', TType::STRING, 1);
      $xfer += $output->writeString($this->domainName);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->channelName !== null) {
      $xfer += $output->writeFieldBegin('channelName', TType::STRING, 2);
      $xfer += $output->writeString($this->channelName);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->slackToken !== null) {
      $xfer += $output->writeFieldBegin('slackToken', TType::STRING, 3);
      $xfer += $output->writeString($this->slackToken);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * This Channel refers to a Slack User, referenced directly by their
 * username.
 */
class SlackUsername {
  static $_TSPEC;

  /**
   * @var string
   */
  public $domainName = null;
  /**
   * @var string
   */
  public $username = null;
  /**
   * @var string
   */
  public $slackToken = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'domainName',
          'type' => TType::STRING,
          ),
        2 => array(
          'var' => 'username',
          'type' => TType::STRING,
          ),
        3 => array(
          'var' => 'slackToken',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['domainName'])) {
        $this->domainName = $vals['domainName'];
      }
      if (isset($vals['username'])) {
        $this->username = $vals['username'];
      }
      if (isset($vals['slackToken'])) {
        $this->slackToken = $vals['slackToken'];
      }
    }
  }

  public function getName() {
    return 'SlackUsername';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->domainName);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->username);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->slackToken);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('SlackUsername');
    if ($this->domainName !== null) {
      $xfer += $output->writeFieldBegin('domainName', TType::STRING, 1);
      $xfer += $output->writeString($this->domainName);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->username !== null) {
      $xfer += $output->writeFieldBegin('username', TType::STRING, 2);
      $xfer += $output->writeString($this->username);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->slackToken !== null) {
      $xfer += $output->writeFieldBegin('slackToken', TType::STRING, 3);
      $xfer += $output->writeString($this->slackToken);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Email will be sent from the Aroma Tech domain, "aroma.tech".
 */
class Email {
  static $_TSPEC;

  /**
   * @var string
   */
  public $emailAddress = null;
  /**
   * @var string
   */
  public $subject = "Aroma - New Message";

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'emailAddress',
          'type' => TType::STRING,
          ),
        2 => array(
          'var' => 'subject',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['emailAddress'])) {
        $this->emailAddress = $vals['emailAddress'];
      }
      if (isset($vals['subject'])) {
        $this->subject = $vals['subject'];
      }
    }
  }

  public function getName() {
    return 'Email';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->emailAddress);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->subject);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('Email');
    if ($this->emailAddress !== null) {
      $xfer += $output->writeFieldBegin('emailAddress', TType::STRING, 1);
      $xfer += $output->writeString($this->emailAddress);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->subject !== null) {
      $xfer += $output->writeFieldBegin('subject', TType::STRING, 2);
      $xfer += $output->writeString($this->subject);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * Allows for messages to be sent to a custom Channel
 */
class CustomChannel {
  static $_TSPEC;

  /**
   * This endpoint will be hit with a message each time.
   * 
   * @var \RedRoma\Aroma\Endpoint\Endpoint
   */
  public $endpoint = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'endpoint',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Endpoint\Endpoint',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['endpoint'])) {
        $this->endpoint = $vals['endpoint'];
      }
    }
  }

  public function getName() {
    return 'CustomChannel';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->endpoint = new \RedRoma\Aroma\Endpoint\Endpoint();
            $xfer += $this->endpoint->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('CustomChannel');
    if ($this->endpoint !== null) {
      if (!is_object($this->endpoint)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('endpoint', TType::STRUCT, 1);
      $xfer += $this->endpoint->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * This Union represents the Abstract concept of an AromaChannel
 */
class AromaChannel {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\Channels\SlackChannel
   */
  public $slackChannel = null;
  /**
   * @var \RedRoma\Aroma\Channels\SlackUsername
   */
  public $slackUsername = null;
  /**
   * @var \RedRoma\Aroma\Channels\Email
   */
  public $email = null;
  /**
   * @var \RedRoma\Aroma\Channels\CustomChannel
   */
  public $customChannel = null;
  /**
   * @var \RedRoma\Aroma\Channels\IOSDevice
   */
  public $iosDevice = null;
  /**
   * @var \RedRoma\Aroma\Channels\AndroidDevice
   */
  public $androidDevice = null;
  /**
   * @var \RedRoma\Aroma\Channels\WindowsPhoneDevice
   */
  public $windowsPhoneDevice = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'slackChannel',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\SlackChannel',
          ),
        2 => array(
          'var' => 'slackUsername',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\SlackUsername',
          ),
        3 => array(
          'var' => 'email',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\Email',
          ),
        4 => array(
          'var' => 'customChannel',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\CustomChannel',
          ),
        5 => array(
          'var' => 'iosDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\IOSDevice',
          ),
        6 => array(
          'var' => 'androidDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\AndroidDevice',
          ),
        7 => array(
          'var' => 'windowsPhoneDevice',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\WindowsPhoneDevice',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['slackChannel'])) {
        $this->slackChannel = $vals['slackChannel'];
      }
      if (isset($vals['slackUsername'])) {
        $this->slackUsername = $vals['slackUsername'];
      }
      if (isset($vals['email'])) {
        $this->email = $vals['email'];
      }
      if (isset($vals['customChannel'])) {
        $this->customChannel = $vals['customChannel'];
      }
      if (isset($vals['iosDevice'])) {
        $this->iosDevice = $vals['iosDevice'];
      }
      if (isset($vals['androidDevice'])) {
        $this->androidDevice = $vals['androidDevice'];
      }
      if (isset($vals['windowsPhoneDevice'])) {
        $this->windowsPhoneDevice = $vals['windowsPhoneDevice'];
      }
    }
  }

  public function getName() {
    return 'AromaChannel';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->slackChannel = new \RedRoma\Aroma\Channels\SlackChannel();
            $xfer += $this->slackChannel->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRUCT) {
            $this->slackUsername = new \RedRoma\Aroma\Channels\SlackUsername();
            $xfer += $this->slackUsername->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRUCT) {
            $this->email = new \RedRoma\Aroma\Channels\Email();
            $xfer += $this->email->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 4:
          if ($ftype == TType::STRUCT) {
            $this->customChannel = new \RedRoma\Aroma\Channels\CustomChannel();
            $xfer += $this->customChannel->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 5:
          if ($ftype == TType::STRUCT) {
            $this->iosDevice = new \RedRoma\Aroma\Channels\IOSDevice();
            $xfer += $this->iosDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 6:
          if ($ftype == TType::STRUCT) {
            $this->androidDevice = new \RedRoma\Aroma\Channels\AndroidDevice();
            $xfer += $this->androidDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 7:
          if ($ftype == TType::STRUCT) {
            $this->windowsPhoneDevice = new \RedRoma\Aroma\Channels\WindowsPhoneDevice();
            $xfer += $this->windowsPhoneDevice->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('AromaChannel');
    if ($this->slackChannel !== null) {
      if (!is_object($this->slackChannel)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('slackChannel', TType::STRUCT, 1);
      $xfer += $this->slackChannel->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->slackUsername !== null) {
      if (!is_object($this->slackUsername)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('slackUsername', TType::STRUCT, 2);
      $xfer += $this->slackUsername->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->email !== null) {
      if (!is_object($this->email)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('email', TType::STRUCT, 3);
      $xfer += $this->email->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->customChannel !== null) {
      if (!is_object($this->customChannel)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('customChannel', TType::STRUCT, 4);
      $xfer += $this->customChannel->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->iosDevice !== null) {
      if (!is_object($this->iosDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('iosDevice', TType::STRUCT, 5);
      $xfer += $this->iosDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->androidDevice !== null) {
      if (!is_object($this->androidDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('androidDevice', TType::STRUCT, 6);
      $xfer += $this->androidDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->windowsPhoneDevice !== null) {
      if (!is_object($this->windowsPhoneDevice)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('windowsPhoneDevice', TType::STRUCT, 7);
      $xfer += $this->windowsPhoneDevice->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class ChannelInfo {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\Channels\AromaChannel
   */
  public $channel = null;
  /**
   * @var int
   */
  public $timeRegistered = null;
  /**
   * @var string
   */
  public $channelId = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'channel',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Channels\AromaChannel',
          ),
        2 => array(
          'var' => 'timeRegistered',
          'type' => TType::I64,
          ),
        3 => array(
          'var' => 'channelId',
          'type' => TType::STRING,
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['channel'])) {
        $this->channel = $vals['channel'];
      }
      if (isset($vals['timeRegistered'])) {
        $this->timeRegistered = $vals['timeRegistered'];
      }
      if (isset($vals['channelId'])) {
        $this->channelId = $vals['channelId'];
      }
    }
  }

  public function getName() {
    return 'ChannelInfo';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->channel = new \RedRoma\Aroma\Channels\AromaChannel();
            $xfer += $this->channel->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::I64) {
            $xfer += $input->readI64($this->timeRegistered);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRING) {
            $xfer += $input->readString($this->channelId);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ChannelInfo');
    if ($this->channel !== null) {
      if (!is_object($this->channel)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('channel', TType::STRUCT, 1);
      $xfer += $this->channel->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->timeRegistered !== null) {
      $xfer += $output->writeFieldBegin('timeRegistered', TType::I64, 2);
      $xfer += $output->writeI64($this->timeRegistered);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->channelId !== null) {
      $xfer += $output->writeFieldBegin('channelId', TType::STRING, 3);
      $xfer += $output->writeString($this->channelId);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

/**
 * This is the Request Body that will be sent to any
 * Custom Channels registered to a service.
 */
class ReceiveMessageRequest {
  static $_TSPEC;

  /**
   * @var \RedRoma\Aroma\Message
   */
  public $message = null;

  public function __construct($vals=null) {
    if (!isset(self::$_TSPEC)) {
      self::$_TSPEC = array(
        1 => array(
          'var' => 'message',
          'type' => TType::STRUCT,
          'class' => '\RedRoma\Aroma\Message',
          ),
        );
    }
    if (is_array($vals)) {
      if (isset($vals['message'])) {
        $this->message = $vals['message'];
      }
    }
  }

  public function getName() {
    return 'ReceiveMessageRequest';
  }

  public function read($input)
  {
    $xfer = 0;
    $fname = null;
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == TType::STOP) {
        break;
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->message = new \RedRoma\Aroma\Message();
            $xfer += $this->message->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write($output) {
    $xfer = 0;
    $xfer += $output->writeStructBegin('ReceiveMessageRequest');
    if ($this->message !== null) {
      if (!is_object($this->message)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('message', TType::STRUCT, 1);
      $xfer += $this->message->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

final class Constant extends \Thrift\Type\TConstant {
  static protected $PUSH_NOTIFICATION_KEY_FOR_PAYLOAD;

  static protected function init_PUSH_NOTIFICATION_KEY_FOR_PAYLOAD() {
    return     /**
     * The key used to store the Message ID. *
     */
"aroma.notification.payload";
  }
}


