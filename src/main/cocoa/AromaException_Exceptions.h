/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TProtocolFactory.h"
#import "TApplicationError.h"
#import "TProtocolError.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TBaseClient.h"


enum {
  AromaException_ExceptionsErrorInvalidArgumentException = -60000
};

@interface AromaException_InvalidArgumentException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorInvalidCredentialsException = -60001
};

@interface AromaException_InvalidCredentialsException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorInvalidTokenException = -60002
};

@interface AromaException_InvalidTokenException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorAccountAlreadyExistsException = -60003
};

@interface AromaException_AccountAlreadyExistsException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorInvalidCodeException = -60004
};

@interface AromaException_InvalidCodeException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorUnauthorizedException = -60005
};

@interface AromaException_UnauthorizedException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorDoesNotExistException = -60006
};

@interface AromaException_DoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorApplicationDoesNotExistException = -60007
};

@interface AromaException_ApplicationDoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorApplicationAlreadyRegisteredException = -60008
};

@interface AromaException_ApplicationAlreadyRegisteredException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorUserDoesNotExistException = -60009
};

@interface AromaException_UserDoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorThroughoutExceededException = -60010
};

@interface AromaException_ThroughoutExceededException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorCustomChannelUnreachableException = -60011
};

@interface AromaException_CustomChannelUnreachableException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorChannelDoesNotExistException = -60012
};

@interface AromaException_ChannelDoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorMessageDoesNotExistException = -60013
};

@interface AromaException_MessageDoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorOrganizationDoesNotExistException = -60014
};

@interface AromaException_OrganizationDoesNotExistException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

enum {
  AromaException_ExceptionsErrorOperationFailedException = -60015
};

@interface AromaException_OperationFailedException : NSError <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * message;
@property (assign, nonatomic) BOOL messageIsSet;
- (void) unsetMessage;


- (instancetype) initWithMessage: (NSString *) message;

@end

FOUNDATION_EXPORT NSString *AromaException_ExceptionsErrorDomain;


