<?php
namespace RedRoma\Aroma\ApplicationService;
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


/**
 * The Application  Service is designed to be called by Applications, to send messages
 * and report alerts to people. It is designed to be used by machines, not humans.
 * This is where Incoming Messages are accepted, processed, and stored.
 */
interface ApplicationServiceIf {
  /**
   * @return double
   */
  public function getApiVersion();
  /**
   * Send a Message from your Application to Aroma.
   * 
   * @param \RedRoma\Aroma\ApplicationService\SendMessageRequest $request
   * @return \RedRoma\Aroma\ApplicationService\SendMessageResponse
   * @throws \RedRoma\Aroma\Exceptions\OperationFailedException
   * @throws \RedRoma\Aroma\Exceptions\InvalidArgumentException
   * @throws \RedRoma\Aroma\Exceptions\InvalidTokenException
   */
  public function sendMessage(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request);
  /**
   * Fire-And-Forget version of sendMessage() ;
   * With this operation, the client does not wait for the server
   * to finish processing. The only guarantees provided is that
   * the Message was successfully sent over the Transport.
   * 
   * @param \RedRoma\Aroma\ApplicationService\SendMessageRequest $request
   */
  public function sendMessageAsync(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request);
}


class ApplicationServiceClient implements \RedRoma\Aroma\ApplicationService\ApplicationServiceIf {
  protected $input_ = null;
  protected $output_ = null;

  protected $seqid_ = 0;

  public function __construct($input, $output=null) {
    $this->input_ = $input;
    $this->output_ = $output ? $output : $input;
  }

  public function getApiVersion()
  {
    $this->send_getApiVersion();
    return $this->recv_getApiVersion();
  }

  public function send_getApiVersion()
  {
    $args = new \RedRoma\Aroma\ApplicationService\ApplicationService_getApiVersion_args();
    $bin_accel = ($this->output_ instanceof TBinaryProtocolAccelerated) && function_exists('thrift_protocol_write_binary');
    if ($bin_accel)
    {
      thrift_protocol_write_binary($this->output_, 'getApiVersion', TMessageType::CALL, $args, $this->seqid_, $this->output_->isStrictWrite());
    }
    else
    {
      $this->output_->writeMessageBegin('getApiVersion', TMessageType::CALL, $this->seqid_);
      $args->write($this->output_);
      $this->output_->writeMessageEnd();
      $this->output_->getTransport()->flush();
    }
  }

  public function recv_getApiVersion()
  {
    $bin_accel = ($this->input_ instanceof TBinaryProtocolAccelerated) && function_exists('thrift_protocol_read_binary');
    if ($bin_accel) $result = thrift_protocol_read_binary($this->input_, '\RedRoma\Aroma\ApplicationService\ApplicationService_getApiVersion_result', $this->input_->isStrictRead());
    else
    {
      $rseqid = 0;
      $fname = null;
      $mtype = 0;

      $this->input_->readMessageBegin($fname, $mtype, $rseqid);
      if ($mtype == TMessageType::EXCEPTION) {
        $x = new TApplicationException();
        $x->read($this->input_);
        $this->input_->readMessageEnd();
        throw $x;
      }
      $result = new \RedRoma\Aroma\ApplicationService\ApplicationService_getApiVersion_result();
      $result->read($this->input_);
      $this->input_->readMessageEnd();
    }
    if ($result->success !== null) {
      return $result->success;
    }
    throw new \Exception("getApiVersion failed: unknown result");
  }

  public function sendMessage(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request)
  {
    $this->send_sendMessage($request);
    return $this->recv_sendMessage();
  }

  public function send_sendMessage(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request)
  {
    $args = new \RedRoma\Aroma\ApplicationService\ApplicationService_sendMessage_args();
    $args->request = $request;
    $bin_accel = ($this->output_ instanceof TBinaryProtocolAccelerated) && function_exists('thrift_protocol_write_binary');
    if ($bin_accel)
    {
      thrift_protocol_write_binary($this->output_, 'sendMessage', TMessageType::CALL, $args, $this->seqid_, $this->output_->isStrictWrite());
    }
    else
    {
      $this->output_->writeMessageBegin('sendMessage', TMessageType::CALL, $this->seqid_);
      $args->write($this->output_);
      $this->output_->writeMessageEnd();
      $this->output_->getTransport()->flush();
    }
  }

  public function recv_sendMessage()
  {
    $bin_accel = ($this->input_ instanceof TBinaryProtocolAccelerated) && function_exists('thrift_protocol_read_binary');
    if ($bin_accel) $result = thrift_protocol_read_binary($this->input_, '\RedRoma\Aroma\ApplicationService\ApplicationService_sendMessage_result', $this->input_->isStrictRead());
    else
    {
      $rseqid = 0;
      $fname = null;
      $mtype = 0;

      $this->input_->readMessageBegin($fname, $mtype, $rseqid);
      if ($mtype == TMessageType::EXCEPTION) {
        $x = new TApplicationException();
        $x->read($this->input_);
        $this->input_->readMessageEnd();
        throw $x;
      }
      $result = new \RedRoma\Aroma\ApplicationService\ApplicationService_sendMessage_result();
      $result->read($this->input_);
      $this->input_->readMessageEnd();
    }
    if ($result->success !== null) {
      return $result->success;
    }
    if ($result->ex1 !== null) {
      throw $result->ex1;
    }
    if ($result->ex2 !== null) {
      throw $result->ex2;
    }
    if ($result->ex3 !== null) {
      throw $result->ex3;
    }
    throw new \Exception("sendMessage failed: unknown result");
  }

  public function sendMessageAsync(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request)
  {
    $this->send_sendMessageAsync($request);
  }

  public function send_sendMessageAsync(\RedRoma\Aroma\ApplicationService\SendMessageRequest $request)
  {
    $args = new \RedRoma\Aroma\ApplicationService\ApplicationService_sendMessageAsync_args();
    $args->request = $request;
    $bin_accel = ($this->output_ instanceof TBinaryProtocolAccelerated) && function_exists('thrift_protocol_write_binary');
    if ($bin_accel)
    {
      thrift_protocol_write_binary($this->output_, 'sendMessageAsync', TMessageType::ONEWAY, $args, $this->seqid_, $this->output_->isStrictWrite());
    }
    else
    {
      $this->output_->writeMessageBegin('sendMessageAsync', TMessageType::ONEWAY, $this->seqid_);
      $args->write($this->output_);
      $this->output_->writeMessageEnd();
      $this->output_->getTransport()->flush();
    }
  }
}


// HELPER FUNCTIONS AND STRUCTURES

class ApplicationService_getApiVersion_args {
  static $isValidate = false;

  static $_TSPEC = array(
    );


  public function __construct() {
  }

  public function getName() {
    return 'ApplicationService_getApiVersion_args';
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
    $xfer += $output->writeStructBegin('ApplicationService_getApiVersion_args');
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class ApplicationService_getApiVersion_result {
  static $isValidate = false;

  static $_TSPEC = array(
    0 => array(
      'var' => 'success',
      'isRequired' => false,
      'type' => TType::DOUBLE,
      ),
    );

  /**
   * @var double
   */
  public $success = null;

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['success'])) {
        $this->success = $vals['success'];
      }
    }
  }

  public function getName() {
    return 'ApplicationService_getApiVersion_result';
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
        case 0:
          if ($ftype == TType::DOUBLE) {
            $xfer += $input->readDouble($this->success);
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
    $xfer += $output->writeStructBegin('ApplicationService_getApiVersion_result');
    if ($this->success !== null) {
      $xfer += $output->writeFieldBegin('success', TType::DOUBLE, 0);
      $xfer += $output->writeDouble($this->success);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class ApplicationService_sendMessage_args {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'request',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\ApplicationService\SendMessageRequest',
      ),
    );

  /**
   * @var \RedRoma\Aroma\ApplicationService\SendMessageRequest
   */
  public $request = null;

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['request'])) {
        $this->request = $vals['request'];
      }
    }
  }

  public function getName() {
    return 'ApplicationService_sendMessage_args';
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
            $this->request = new \RedRoma\Aroma\ApplicationService\SendMessageRequest();
            $xfer += $this->request->read($input);
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
    $xfer += $output->writeStructBegin('ApplicationService_sendMessage_args');
    if ($this->request !== null) {
      if (!is_object($this->request)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('request', TType::STRUCT, 1);
      $xfer += $this->request->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class ApplicationService_sendMessage_result {
  static $isValidate = false;

  static $_TSPEC = array(
    0 => array(
      'var' => 'success',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\ApplicationService\SendMessageResponse',
      ),
    1 => array(
      'var' => 'ex1',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\Exceptions\OperationFailedException',
      ),
    2 => array(
      'var' => 'ex2',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\Exceptions\InvalidArgumentException',
      ),
    3 => array(
      'var' => 'ex3',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\Exceptions\InvalidTokenException',
      ),
    );

  /**
   * @var \RedRoma\Aroma\ApplicationService\SendMessageResponse
   */
  public $success = null;
  /**
   * @var \RedRoma\Aroma\Exceptions\OperationFailedException
   */
  public $ex1 = null;
  /**
   * @var \RedRoma\Aroma\Exceptions\InvalidArgumentException
   */
  public $ex2 = null;
  /**
   * @var \RedRoma\Aroma\Exceptions\InvalidTokenException
   */
  public $ex3 = null;

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['success'])) {
        $this->success = $vals['success'];
      }
      if (isset($vals['ex1'])) {
        $this->ex1 = $vals['ex1'];
      }
      if (isset($vals['ex2'])) {
        $this->ex2 = $vals['ex2'];
      }
      if (isset($vals['ex3'])) {
        $this->ex3 = $vals['ex3'];
      }
    }
  }

  public function getName() {
    return 'ApplicationService_sendMessage_result';
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
        case 0:
          if ($ftype == TType::STRUCT) {
            $this->success = new \RedRoma\Aroma\ApplicationService\SendMessageResponse();
            $xfer += $this->success->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 1:
          if ($ftype == TType::STRUCT) {
            $this->ex1 = new \RedRoma\Aroma\Exceptions\OperationFailedException();
            $xfer += $this->ex1->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == TType::STRUCT) {
            $this->ex2 = new \RedRoma\Aroma\Exceptions\InvalidArgumentException();
            $xfer += $this->ex2->read($input);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 3:
          if ($ftype == TType::STRUCT) {
            $this->ex3 = new \RedRoma\Aroma\Exceptions\InvalidTokenException();
            $xfer += $this->ex3->read($input);
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
    $xfer += $output->writeStructBegin('ApplicationService_sendMessage_result');
    if ($this->success !== null) {
      if (!is_object($this->success)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('success', TType::STRUCT, 0);
      $xfer += $this->success->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->ex1 !== null) {
      $xfer += $output->writeFieldBegin('ex1', TType::STRUCT, 1);
      $xfer += $this->ex1->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->ex2 !== null) {
      $xfer += $output->writeFieldBegin('ex2', TType::STRUCT, 2);
      $xfer += $this->ex2->write($output);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->ex3 !== null) {
      $xfer += $output->writeFieldBegin('ex3', TType::STRUCT, 3);
      $xfer += $this->ex3->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

class ApplicationService_sendMessageAsync_args {
  static $isValidate = false;

  static $_TSPEC = array(
    1 => array(
      'var' => 'request',
      'isRequired' => false,
      'type' => TType::STRUCT,
      'class' => '\RedRoma\Aroma\ApplicationService\SendMessageRequest',
      ),
    );

  /**
   * @var \RedRoma\Aroma\ApplicationService\SendMessageRequest
   */
  public $request = null;

  public function __construct($vals=null) {
    if (is_array($vals)) {
      if (isset($vals['request'])) {
        $this->request = $vals['request'];
      }
    }
  }

  public function getName() {
    return 'ApplicationService_sendMessageAsync_args';
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
            $this->request = new \RedRoma\Aroma\ApplicationService\SendMessageRequest();
            $xfer += $this->request->read($input);
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
    $xfer += $output->writeStructBegin('ApplicationService_sendMessageAsync_args');
    if ($this->request !== null) {
      if (!is_object($this->request)) {
        throw new TProtocolException('Bad type in structure.', TProtocolException::INVALID_DATA);
      }
      $xfer += $output->writeFieldBegin('request', TType::STRUCT, 1);
      $xfer += $this->request->write($output);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}


