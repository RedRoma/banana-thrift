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

typedef Banana_int ApplicationService_int;

typedef Banana_long ApplicationService_long;

typedef Banana_timestamp ApplicationService_timestamp;

typedef BananaAuthentication_ApplicationToken * ApplicationService_ApplicationToken;

typedef Banana_Application * ApplicationService_Application;

typedef int ApplicationService_Urgency;

typedef BananaException_AccountAlreadyExistsException * ApplicationService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * ApplicationService_InvalidArgumentException;

typedef BananaException_InvalidTokenException * ApplicationService_InvalidTokenException;

typedef BananaException_OperationFailedException * ApplicationService_OperationFailedException;

typedef BananaException_ApplicationAlreadyRegisteredException * ApplicationService_ApplicationAlreadyRegisteredException;

typedef BananaException_ApplicationDoesNotExistException * ApplicationService_ApplicationDoesNotExistException;

typedef BananaException_CustomChannelUnreachableException * ApplicationService_CustomChannelUnreachableException;

typedef BananaException_ChannelDoesNotExistException * ApplicationService_ChannelDoesNotExistException;

typedef BananaException_UnauthorizedException * ApplicationService_UnauthorizedException;

@interface ApplicationService_SendMessageRequest : NSObject <TBase, NSCoding> {
  ApplicationService_ApplicationToken __applicationToken;
  NSString * __body;
  ApplicationService_Urgency __urgency;
  ApplicationService_timestamp __timeOfMessage;
  NSString * __title;

  BOOL __applicationToken_isset;
  BOOL __body_isset;
  BOOL __urgency_isset;
  BOOL __timeOfMessage_isset;
  BOOL __title_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationToken, setter=setApplicationToken:) ApplicationService_ApplicationToken applicationToken;
@property (nonatomic, retain, getter=body, setter=setBody:) NSString * body;
@property (nonatomic, getter=urgency, setter=setUrgency:) ApplicationService_Urgency urgency;
@property (nonatomic, getter=timeOfMessage, setter=setTimeOfMessage:) ApplicationService_timestamp timeOfMessage;
@property (nonatomic, retain, getter=title, setter=setTitle:) NSString * title;
#endif

- (id) init;
- (id) initWithApplicationToken: (ApplicationService_ApplicationToken) applicationToken body: (NSString *) body urgency: (ApplicationService_Urgency) urgency timeOfMessage: (ApplicationService_timestamp) timeOfMessage title: (NSString *) title;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (ApplicationService_ApplicationToken) applicationToken;
- (void) setApplicationToken: (ApplicationService_ApplicationToken) applicationToken;
#endif
- (BOOL) applicationTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) body;
- (void) setBody: (NSString *) body;
#endif
- (BOOL) bodyIsSet;

#if !__has_feature(objc_arc)
- (ApplicationService_Urgency) urgency;
- (void) setUrgency: (ApplicationService_Urgency) urgency;
#endif
- (BOOL) urgencyIsSet;

#if !__has_feature(objc_arc)
- (ApplicationService_timestamp) timeOfMessage;
- (void) setTimeOfMessage: (ApplicationService_timestamp) timeOfMessage;
#endif
- (BOOL) timeOfMessageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) title;
- (void) setTitle: (NSString *) title;
#endif
- (BOOL) titleIsSet;

@end

@interface ApplicationService_SendMessageResponse : NSObject <TBase, NSCoding> {
  NSString * __messageId;

  BOOL __messageId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=messageId, setter=setMessageId:) NSString * messageId;
#endif

- (id) init;
- (id) initWithMessageId: (NSString *) messageId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) messageId;
- (void) setMessageId: (NSString *) messageId;
#endif
- (BOOL) messageIdIsSet;

@end

@protocol ApplicationService_ApplicationService <NSObject>
- (double) getApiVersion;  // throws TException
- (ApplicationService_SendMessageResponse *) sendMessage: (ApplicationService_SendMessageRequest *) request;  // throws ApplicationService_OperationFailedException, ApplicationService_InvalidArgumentException, ApplicationService_InvalidTokenException, TException
- (void) sendMessageAsync: (ApplicationService_SendMessageRequest *) request;  // throws TException
@end

@interface ApplicationService_ApplicationServiceClient : TBaseClient <ApplicationService_ApplicationService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface ApplicationService_ApplicationServiceProcessor : NSObject <TProcessor> {
  id <ApplicationService_ApplicationService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithApplicationService: (id <ApplicationService_ApplicationService>) service;
- (id<ApplicationService_ApplicationService>) service;
@end

@interface ApplicationService_ApplicationServiceConstants : NSObject {
}
+ (ApplicationService_int) SERVICE_PORT;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end
