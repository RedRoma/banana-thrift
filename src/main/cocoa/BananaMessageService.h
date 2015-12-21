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

#import "Authentication.h"
#import "Banana.h"
#import "Endpoint.h"
#import "Exceptions.h"

typedef Banana_int BananaService_int;

typedef Banana_long BananaService_long;

typedef Banana_timestamp BananaService_timestamp;

typedef BananaAuthentication_ApplicationToken * BananaService_ApplicationToken;

typedef Banana_Application * BananaService_Application;

typedef int BananaService_Urgency;

typedef BananaService_Channels.BananaChannel BananaService_BananaChannel;

typedef BananaException_AccountAlreadyExistsException * BananaService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * BananaService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * BananaService_InvalidCredentialsException;

typedef BananaException_OperationFailedException * BananaService_OperationFailedException;

typedef BananaException_ApplicationAlreadyRegisteredException * BananaService_ApplicationAlreadyRegisteredException;

typedef BananaException_ApplicationDoesNotExistException * BananaService_ApplicationDoesNotExistException;

typedef BananaException_CustomChannelUnreachableException * BananaService_CustomChannelUnreachableException;

typedef BananaException_ChannelDoesNotExistException * BananaService_ChannelDoesNotExistException;

typedef BananaException_UnauthorizedException * BananaService_UnauthorizedException;

@interface BananaService_SendMessageRequest : NSObject <TBase, NSCoding> {
  BananaService_ApplicationToken __applicationToken;
  NSString * __message;
  BananaService_Urgency __urgency;

  BOOL __applicationToken_isset;
  BOOL __message_isset;
  BOOL __urgency_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationToken, setter=setApplicationToken:) BananaService_ApplicationToken applicationToken;
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
@property (nonatomic, getter=urgency, setter=setUrgency:) BananaService_Urgency urgency;
#endif

- (id) init;
- (id) initWithApplicationToken: (BananaService_ApplicationToken) applicationToken message: (NSString *) message urgency: (BananaService_Urgency) urgency;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaService_ApplicationToken) applicationToken;
- (void) setApplicationToken: (BananaService_ApplicationToken) applicationToken;
#endif
- (BOOL) applicationTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (BananaService_Urgency) urgency;
- (void) setUrgency: (BananaService_Urgency) urgency;
#endif
- (BOOL) urgencyIsSet;

@end

@interface BananaService_SendMessageResponse : NSObject <TBase, NSCoding> {
  NSString * __message;

  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
#endif

- (id) init;
- (id) initWithMessage: (NSString *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

@end

@protocol BananaService_BananaMessageService <NSObject>
- (double) getApiVersion;  // throws TException
- (BananaService_SendMessageResponse *) sendMessage: (BananaService_SendMessageRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, TException
- (void) sendMessageAsync: (BananaService_SendMessageRequest *) request;  // throws TException
@end

@interface BananaService_BananaMessageServiceClient : TBaseClient <BananaService_BananaMessageService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface BananaService_BananaMessageServiceProcessor : NSObject <TProcessor> {
  id <BananaService_BananaMessageService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithBananaMessageService: (id <BananaService_BananaMessageService>) service;
- (id<BananaService_BananaMessageService>) service;
@end

@interface BananaService_BananaMessageServiceConstants : NSObject {
}
+ (double) API_VERSION;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end
