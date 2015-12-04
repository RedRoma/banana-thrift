/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"


#import "Banana.h"

@implementation Banana_Message

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
  self.urgency = 2;

#endif
  return self;
}

- (id) initWithBody: (NSString *) body urgency: (int) urgency
{
  self = [super init];
  __body = [body retain_stub];
  __body_isset = YES;
  __urgency = urgency;
  __urgency_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"body"])
  {
    __body = [[decoder decodeObjectForKey: @"body"] retain_stub];
    __body_isset = YES;
  }
  if ([decoder containsValueForKey: @"urgency"])
  {
    __urgency = [decoder decodeIntForKey: @"urgency"];
    __urgency_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__body_isset)
  {
    [encoder encodeObject: __body forKey: @"body"];
  }
  if (__urgency_isset)
  {
    [encoder encodeInt: __urgency forKey: @"urgency"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __body_isset ? 2654435761 : 0;
  if (__body_isset)
  {
    hash = (hash * 31) ^ [__body hash];
  }
  hash = (hash * 31) ^ __urgency_isset ? 2654435761 : 0;
  if (__urgency_isset)
  {
    hash = (hash * 31) ^ [@(__urgency) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_Message class]]) {
    return NO;
  }
  Banana_Message *other = (Banana_Message *)anObject;
  if ((__body_isset != other->__body_isset) ||
      (__body_isset && ((__body || other->__body) && ![__body isEqual:other->__body]))) {
    return NO;
  }
  if ((__urgency_isset != other->__urgency_isset) ||
      (__urgency_isset && (__urgency != other->__urgency))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__body release_stub];
  [super dealloc_stub];
}

- (NSString *) body {
  return [[__body retain_stub] autorelease_stub];
}

- (void) setBody: (NSString *) body {
  [body retain_stub];
  [__body release_stub];
  __body = body;
  __body_isset = YES;
}

- (BOOL) bodyIsSet {
  return __body_isset;
}

- (void) unsetBody {
  [__body release_stub];
  __body = nil;
  __body_isset = NO;
}

- (int) urgency {
  return __urgency;
}

- (void) setUrgency: (int) urgency {
  __urgency = urgency;
  __urgency_isset = YES;
}

- (BOOL) urgencyIsSet {
  return __urgency_isset;
}

- (void) unsetUrgency {
  __urgency_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setBody: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_I32) {
          int fieldValue = [inProtocol readI32];
          [self setUrgency: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Message"];
  if (__body_isset) {
    if (__body != nil) {
      [outProtocol writeFieldBeginWithName: @"body" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __body];
      [outProtocol writeFieldEnd];
    }
  }
  if (__urgency_isset) {
    [outProtocol writeFieldBeginWithName: @"urgency" type: TType_I32 fieldID: 2];
    [outProtocol writeI32: __urgency];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_Message("];
  [ms appendString: @"body:"];
  [ms appendFormat: @"\"%@\"", __body];
  [ms appendString: @",urgency:"];
  [ms appendFormat: @"%i", __urgency];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation Banana_Call

- (id) init
{
  self = [super init];
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_Call class]]) {
    return NO;
  }
  Banana_Call *other = (Banana_Call *)anObject;
  return YES;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Call"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_Call("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation Banana_Service

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithOwner: (NSString *) owner timeOfRegistration: (Banana_timestamp) timeOfRegistration name: (NSString *) name
{
  self = [super init];
  __owner = [owner retain_stub];
  __owner_isset = YES;
  __timeOfRegistration = timeOfRegistration;
  __timeOfRegistration_isset = YES;
  __name = [name retain_stub];
  __name_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"owner"])
  {
    __owner = [[decoder decodeObjectForKey: @"owner"] retain_stub];
    __owner_isset = YES;
  }
  if ([decoder containsValueForKey: @"timeOfRegistration"])
  {
    __timeOfRegistration = [decoder decodeInt64ForKey: @"timeOfRegistration"];
    __timeOfRegistration_isset = YES;
  }
  if ([decoder containsValueForKey: @"name"])
  {
    __name = [[decoder decodeObjectForKey: @"name"] retain_stub];
    __name_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__owner_isset)
  {
    [encoder encodeObject: __owner forKey: @"owner"];
  }
  if (__timeOfRegistration_isset)
  {
    [encoder encodeInt64: __timeOfRegistration forKey: @"timeOfRegistration"];
  }
  if (__name_isset)
  {
    [encoder encodeObject: __name forKey: @"name"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __owner_isset ? 2654435761 : 0;
  if (__owner_isset)
  {
    hash = (hash * 31) ^ [__owner hash];
  }
  hash = (hash * 31) ^ __timeOfRegistration_isset ? 2654435761 : 0;
  if (__timeOfRegistration_isset)
  {
    hash = (hash * 31) ^ [@(__timeOfRegistration) hash];
  }
  hash = (hash * 31) ^ __name_isset ? 2654435761 : 0;
  if (__name_isset)
  {
    hash = (hash * 31) ^ [__name hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_Service class]]) {
    return NO;
  }
  Banana_Service *other = (Banana_Service *)anObject;
  if ((__owner_isset != other->__owner_isset) ||
      (__owner_isset && ((__owner || other->__owner) && ![__owner isEqual:other->__owner]))) {
    return NO;
  }
  if ((__timeOfRegistration_isset != other->__timeOfRegistration_isset) ||
      (__timeOfRegistration_isset && (__timeOfRegistration != other->__timeOfRegistration))) {
    return NO;
  }
  if ((__name_isset != other->__name_isset) ||
      (__name_isset && ((__name || other->__name) && ![__name isEqual:other->__name]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__owner release_stub];
  [__name release_stub];
  [super dealloc_stub];
}

- (NSString *) owner {
  return [[__owner retain_stub] autorelease_stub];
}

- (void) setOwner: (NSString *) owner {
  [owner retain_stub];
  [__owner release_stub];
  __owner = owner;
  __owner_isset = YES;
}

- (BOOL) ownerIsSet {
  return __owner_isset;
}

- (void) unsetOwner {
  [__owner release_stub];
  __owner = nil;
  __owner_isset = NO;
}

- (int64_t) timeOfRegistration {
  return __timeOfRegistration;
}

- (void) setTimeOfRegistration: (int64_t) timeOfRegistration {
  __timeOfRegistration = timeOfRegistration;
  __timeOfRegistration_isset = YES;
}

- (BOOL) timeOfRegistrationIsSet {
  return __timeOfRegistration_isset;
}

- (void) unsetTimeOfRegistration {
  __timeOfRegistration_isset = NO;
}

- (NSString *) name {
  return [[__name retain_stub] autorelease_stub];
}

- (void) setName: (NSString *) name {
  [name retain_stub];
  [__name release_stub];
  __name = name;
  __name_isset = YES;
}

- (BOOL) nameIsSet {
  return __name_isset;
}

- (void) unsetName {
  [__name release_stub];
  __name = nil;
  __name_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setOwner: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_I64) {
          int64_t fieldValue = [inProtocol readI64];
          [self setTimeOfRegistration: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setName: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Service"];
  if (__owner_isset) {
    if (__owner != nil) {
      [outProtocol writeFieldBeginWithName: @"owner" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __owner];
      [outProtocol writeFieldEnd];
    }
  }
  if (__timeOfRegistration_isset) {
    [outProtocol writeFieldBeginWithName: @"timeOfRegistration" type: TType_I64 fieldID: 2];
    [outProtocol writeI64: __timeOfRegistration];
    [outProtocol writeFieldEnd];
  }
  if (__name_isset) {
    if (__name != nil) {
      [outProtocol writeFieldBeginWithName: @"name" type: TType_STRING fieldID: 3];
      [outProtocol writeString: __name];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_Service("];
  [ms appendString: @"owner:"];
  [ms appendFormat: @"\"%@\"", __owner];
  [ms appendString: @",timeOfRegistration:"];
  [ms appendFormat: @"%qi", __timeOfRegistration];
  [ms appendString: @",name:"];
  [ms appendFormat: @"\"%@\"", __name];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation Banana_TimePeriod

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithUnit: (int) unit value: (Banana_int) value
{
  self = [super init];
  __unit = unit;
  __unit_isset = YES;
  __value = value;
  __value_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"unit"])
  {
    __unit = [decoder decodeIntForKey: @"unit"];
    __unit_isset = YES;
  }
  if ([decoder containsValueForKey: @"value"])
  {
    __value = [decoder decodeInt32ForKey: @"value"];
    __value_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__unit_isset)
  {
    [encoder encodeInt: __unit forKey: @"unit"];
  }
  if (__value_isset)
  {
    [encoder encodeInt32: __value forKey: @"value"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __unit_isset ? 2654435761 : 0;
  if (__unit_isset)
  {
    hash = (hash * 31) ^ [@(__unit) hash];
  }
  hash = (hash * 31) ^ __value_isset ? 2654435761 : 0;
  if (__value_isset)
  {
    hash = (hash * 31) ^ [@(__value) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_TimePeriod class]]) {
    return NO;
  }
  Banana_TimePeriod *other = (Banana_TimePeriod *)anObject;
  if ((__unit_isset != other->__unit_isset) ||
      (__unit_isset && (__unit != other->__unit))) {
    return NO;
  }
  if ((__value_isset != other->__value_isset) ||
      (__value_isset && (__value != other->__value))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [super dealloc_stub];
}

- (int) unit {
  return __unit;
}

- (void) setUnit: (int) unit {
  __unit = unit;
  __unit_isset = YES;
}

- (BOOL) unitIsSet {
  return __unit_isset;
}

- (void) unsetUnit {
  __unit_isset = NO;
}

- (int32_t) value {
  return __value;
}

- (void) setValue: (int32_t) value {
  __value = value;
  __value_isset = YES;
}

- (BOOL) valueIsSet {
  return __value_isset;
}

- (void) unsetValue {
  __value_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_I32) {
          int fieldValue = [inProtocol readI32];
          [self setUnit: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_I32) {
          int32_t fieldValue = [inProtocol readI32];
          [self setValue: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"TimePeriod"];
  if (__unit_isset) {
    [outProtocol writeFieldBeginWithName: @"unit" type: TType_I32 fieldID: 1];
    [outProtocol writeI32: __unit];
    [outProtocol writeFieldEnd];
  }
  if (__value_isset) {
    [outProtocol writeFieldBeginWithName: @"value" type: TType_I32 fieldID: 2];
    [outProtocol writeI32: __value];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
  if (!__unit_isset) {
    @throw [TProtocolException exceptionWithName: @"TProtocolException"
                               reason: @"Required field 'unit' is not set."];
  }
  if (!__value_isset) {
    @throw [TProtocolException exceptionWithName: @"TProtocolException"
                               reason: @"Required field 'value' is not set."];
  }
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_TimePeriod("];
  [ms appendString: @"unit:"];
  [ms appendFormat: @"%i", __unit];
  [ms appendString: @",value:"];
  [ms appendFormat: @"%i", __value];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation Banana_Dimension

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithWidth: (Banana_int) width height: (Banana_int) height
{
  self = [super init];
  __width = width;
  __width_isset = YES;
  __height = height;
  __height_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"width"])
  {
    __width = [decoder decodeInt32ForKey: @"width"];
    __width_isset = YES;
  }
  if ([decoder containsValueForKey: @"height"])
  {
    __height = [decoder decodeInt32ForKey: @"height"];
    __height_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__width_isset)
  {
    [encoder encodeInt32: __width forKey: @"width"];
  }
  if (__height_isset)
  {
    [encoder encodeInt32: __height forKey: @"height"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __width_isset ? 2654435761 : 0;
  if (__width_isset)
  {
    hash = (hash * 31) ^ [@(__width) hash];
  }
  hash = (hash * 31) ^ __height_isset ? 2654435761 : 0;
  if (__height_isset)
  {
    hash = (hash * 31) ^ [@(__height) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_Dimension class]]) {
    return NO;
  }
  Banana_Dimension *other = (Banana_Dimension *)anObject;
  if ((__width_isset != other->__width_isset) ||
      (__width_isset && (__width != other->__width))) {
    return NO;
  }
  if ((__height_isset != other->__height_isset) ||
      (__height_isset && (__height != other->__height))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [super dealloc_stub];
}

- (int32_t) width {
  return __width;
}

- (void) setWidth: (int32_t) width {
  __width = width;
  __width_isset = YES;
}

- (BOOL) widthIsSet {
  return __width_isset;
}

- (void) unsetWidth {
  __width_isset = NO;
}

- (int32_t) height {
  return __height;
}

- (void) setHeight: (int32_t) height {
  __height = height;
  __height_isset = YES;
}

- (BOOL) heightIsSet {
  return __height_isset;
}

- (void) unsetHeight {
  __height_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_I32) {
          int32_t fieldValue = [inProtocol readI32];
          [self setWidth: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_I32) {
          int32_t fieldValue = [inProtocol readI32];
          [self setHeight: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Dimension"];
  if (__width_isset) {
    [outProtocol writeFieldBeginWithName: @"width" type: TType_I32 fieldID: 1];
    [outProtocol writeI32: __width];
    [outProtocol writeFieldEnd];
  }
  if (__height_isset) {
    [outProtocol writeFieldBeginWithName: @"height" type: TType_I32 fieldID: 2];
    [outProtocol writeI32: __height];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
  if (!__width_isset) {
    @throw [TProtocolException exceptionWithName: @"TProtocolException"
                               reason: @"Required field 'width' is not set."];
  }
  if (!__height_isset) {
    @throw [TProtocolException exceptionWithName: @"TProtocolException"
                               reason: @"Required field 'height' is not set."];
  }
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_Dimension("];
  [ms appendString: @"width:"];
  [ms appendFormat: @"%i", __width];
  [ms appendString: @",height:"];
  [ms appendFormat: @"%i", __height];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation Banana_Image

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithImageType: (int) imageType data: (NSData *) data dimension: (Banana_Dimension *) dimension
{
  self = [super init];
  __imageType = imageType;
  __imageType_isset = YES;
  __data = [data retain_stub];
  __data_isset = YES;
  __dimension = [dimension retain_stub];
  __dimension_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"imageType"])
  {
    __imageType = [decoder decodeIntForKey: @"imageType"];
    __imageType_isset = YES;
  }
  if ([decoder containsValueForKey: @"data"])
  {
    __data = [[decoder decodeObjectForKey: @"data"] retain_stub];
    __data_isset = YES;
  }
  if ([decoder containsValueForKey: @"dimension"])
  {
    __dimension = [[decoder decodeObjectForKey: @"dimension"] retain_stub];
    __dimension_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__imageType_isset)
  {
    [encoder encodeInt: __imageType forKey: @"imageType"];
  }
  if (__data_isset)
  {
    [encoder encodeObject: __data forKey: @"data"];
  }
  if (__dimension_isset)
  {
    [encoder encodeObject: __dimension forKey: @"dimension"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __imageType_isset ? 2654435761 : 0;
  if (__imageType_isset)
  {
    hash = (hash * 31) ^ [@(__imageType) hash];
  }
  hash = (hash * 31) ^ __data_isset ? 2654435761 : 0;
  if (__data_isset)
  {
    hash = (hash * 31) ^ [__data hash];
  }
  hash = (hash * 31) ^ __dimension_isset ? 2654435761 : 0;
  if (__dimension_isset)
  {
    hash = (hash * 31) ^ [__dimension hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[Banana_Image class]]) {
    return NO;
  }
  Banana_Image *other = (Banana_Image *)anObject;
  if ((__imageType_isset != other->__imageType_isset) ||
      (__imageType_isset && (__imageType != other->__imageType))) {
    return NO;
  }
  if ((__data_isset != other->__data_isset) ||
      (__data_isset && ((__data || other->__data) && ![__data isEqual:other->__data]))) {
    return NO;
  }
  if ((__dimension_isset != other->__dimension_isset) ||
      (__dimension_isset && ((__dimension || other->__dimension) && ![__dimension isEqual:other->__dimension]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__data release_stub];
  [__dimension release_stub];
  [super dealloc_stub];
}

- (int) imageType {
  return __imageType;
}

- (void) setImageType: (int) imageType {
  __imageType = imageType;
  __imageType_isset = YES;
}

- (BOOL) imageTypeIsSet {
  return __imageType_isset;
}

- (void) unsetImageType {
  __imageType_isset = NO;
}

- (NSData *) data {
  return [[__data retain_stub] autorelease_stub];
}

- (void) setData: (NSData *) data {
  [data retain_stub];
  [__data release_stub];
  __data = data;
  __data_isset = YES;
}

- (BOOL) dataIsSet {
  return __data_isset;
}

- (void) unsetData {
  [__data release_stub];
  __data = nil;
  __data_isset = NO;
}

- (Banana_Dimension *) dimension {
  return [[__dimension retain_stub] autorelease_stub];
}

- (void) setDimension: (Banana_Dimension *) dimension {
  [dimension retain_stub];
  [__dimension release_stub];
  __dimension = dimension;
  __dimension_isset = YES;
}

- (BOOL) dimensionIsSet {
  return __dimension_isset;
}

- (void) unsetDimension {
  [__dimension release_stub];
  __dimension = nil;
  __dimension_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_I32) {
          int fieldValue = [inProtocol readI32];
          [self setImageType: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRING) {
          NSData * fieldValue = [inProtocol readBinary];
          [self setData: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_STRUCT) {
          Banana_Dimension *fieldValue = [[Banana_Dimension alloc] init];
          [fieldValue read: inProtocol];
          [self setDimension: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Image"];
  if (__imageType_isset) {
    [outProtocol writeFieldBeginWithName: @"imageType" type: TType_I32 fieldID: 1];
    [outProtocol writeI32: __imageType];
    [outProtocol writeFieldEnd];
  }
  if (__data_isset) {
    if (__data != nil) {
      [outProtocol writeFieldBeginWithName: @"data" type: TType_STRING fieldID: 2];
      [outProtocol writeBinary: __data];
      [outProtocol writeFieldEnd];
    }
  }
  if (__dimension_isset) {
    if (__dimension != nil) {
      [outProtocol writeFieldBeginWithName: @"dimension" type: TType_STRUCT fieldID: 3];
      [__dimension write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"Banana_Image("];
  [ms appendString: @"imageType:"];
  [ms appendFormat: @"%i", __imageType];
  [ms appendString: @",data:"];
  [ms appendFormat: @"\"%@\"", __data];
  [ms appendString: @",dimension:"];
  [ms appendFormat: @"%@", __dimension];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end


@implementation Banana_BananaConstants
+ (void) initialize {
}
@end
