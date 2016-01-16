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
#import "Channels.h"
#import "Endpoint.h"
#import "Events.h"
#import "Exceptions.h"

typedef Banana_int MessageService_int;

typedef Banana_long MessageService_long;

typedef Banana_timestamp MessageService_timestamp;

typedef BananaAuthentication_AuthenticationToken * MessageService_AuthenticationToken;

typedef BananaAuthentication_UserToken * MessageService_UserToken;

typedef Banana_Application * MessageService_Application;

typedef int MessageService_Urgency;

typedef BananaChannels_BananaChannel * MessageService_BananaChannel;

typedef BananaEvents_Event * MessageService_Event;

typedef BananaException_AccountAlreadyExistsException * MessageService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * MessageService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * MessageService_InvalidCredentialsException;

typedef BananaException_InvalidTokenException * MessageService_InvalidTokenException;

typedef BananaException_OperationFailedException * MessageService_OperationFailedException;

typedef BananaException_ApplicationAlreadyRegisteredException * MessageService_ApplicationAlreadyRegisteredException;

typedef BananaException_ApplicationDoesNotExistException * MessageService_ApplicationDoesNotExistException;

typedef BananaException_CustomChannelUnreachableException * MessageService_CustomChannelUnreachableException;

typedef BananaException_ChannelDoesNotExistException * MessageService_ChannelDoesNotExistException;

typedef BananaException_UnauthorizedException * MessageService_UnauthorizedException;

@interface MessageService_DeleteMessageRequest : NSObject <TBase, NSCoding> {
  MessageService_UserToken __token;
  NSString * __messageId;
  NSString * __applicationId;
  NSMutableArray * __messageIds;

  BOOL __token_isset;
  BOOL __messageId_isset;
  BOOL __applicationId_isset;
  BOOL __messageIds_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) MessageService_UserToken token;
@property (nonatomic, retain, getter=messageId, setter=setMessageId:) NSString * messageId;
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) NSString * applicationId;
@property (nonatomic, retain, getter=messageIds, setter=setMessageIds:) NSMutableArray * messageIds;
#endif

- (id) init;
- (id) initWithToken: (MessageService_UserToken) token messageId: (NSString *) messageId applicationId: (NSString *) applicationId messageIds: (NSMutableArray *) messageIds;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (MessageService_UserToken) token;
- (void) setToken: (MessageService_UserToken) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) messageId;
- (void) setMessageId: (NSString *) messageId;
#endif
- (BOOL) messageIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) applicationId;
- (void) setApplicationId: (NSString *) applicationId;
#endif
- (BOOL) applicationIdIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) messageIds;
- (void) setMessageIds: (NSMutableArray *) messageIds;
#endif
- (BOOL) messageIdsIsSet;

@end

@interface MessageService_DeleteMessageResponse : NSObject <TBase, NSCoding> {
  MessageService_int __messagesDeleted;

  BOOL __messagesDeleted_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=messagesDeleted, setter=setMessagesDeleted:) MessageService_int messagesDeleted;
#endif

- (id) init;
- (id) initWithMessagesDeleted: (MessageService_int) messagesDeleted;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (MessageService_int) messagesDeleted;
- (void) setMessagesDeleted: (MessageService_int) messagesDeleted;
#endif
- (BOOL) messagesDeletedIsSet;

@end

@protocol MessageService_MessageService <NSObject>
- (double) getApiVersion;  // throws TException
@end

@interface MessageService_MessageServiceClient : TBaseClient <MessageService_MessageService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface MessageService_MessageServiceProcessor : NSObject <TProcessor> {
  id <MessageService_MessageService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithMessageService: (id <MessageService_MessageService>) service;
- (id<MessageService_MessageService>) service;
@end

@interface MessageService_MessageServiceConstants : NSObject {
}
+ (MessageService_int) SERVICE_PORT;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end
