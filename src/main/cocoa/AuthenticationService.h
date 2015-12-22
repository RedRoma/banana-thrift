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

enum AuthenticationService_TokenType {
  TokenType_APPLICATION = 1,
  TokenType_USER = 2
};

typedef Banana_int AuthenticationService_int;

typedef Banana_long AuthenticationService_long;

typedef Banana_timestamp AuthenticationService_timestamp;

typedef Banana_TimePeriod * AuthenticationService_TimePeriod;

typedef BananaAuthentication_ApplicationToken * AuthenticationService_ApplicationToken;

typedef BananaAuthentication_UserToken * AuthenticationService_UserToken;

typedef BananaException_AccountAlreadyExistsException * AuthenticationService_AccountAlreadyExistsException;

typedef BananaException_InvalidArgumentException * AuthenticationService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * AuthenticationService_InvalidCredentialsException;

typedef BananaException_InvalidTokenException * AuthenticationService_InvalidTokenException;

typedef BananaException_OperationFailedException * AuthenticationService_OperationFailedException;

typedef BananaException_UnauthorizedException * AuthenticationService_UnauthorizedException;

@interface AuthenticationService_CreateUserTokenRequest : NSObject <TBase, NSCoding> {
  NSString * __userId;
  AuthenticationService_TimePeriod __lifetime;

  BOOL __userId_isset;
  BOOL __lifetime_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=userId, setter=setUserId:) NSString * userId;
@property (nonatomic, retain, getter=lifetime, setter=setLifetime:) AuthenticationService_TimePeriod lifetime;
#endif

- (id) init;
- (id) initWithUserId: (NSString *) userId lifetime: (AuthenticationService_TimePeriod) lifetime;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) userId;
- (void) setUserId: (NSString *) userId;
#endif
- (BOOL) userIdIsSet;

#if !__has_feature(objc_arc)
- (AuthenticationService_TimePeriod) lifetime;
- (void) setLifetime: (AuthenticationService_TimePeriod) lifetime;
#endif
- (BOOL) lifetimeIsSet;

@end

@interface AuthenticationService_CreateUserTokenResponse : NSObject <TBase, NSCoding> {
  AuthenticationService_UserToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_UserToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_UserToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_UserToken) token;
- (void) setToken: (AuthenticationService_UserToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_CreateApplicationTokenRequest : NSObject <TBase, NSCoding> {
  NSString * __applicationId;
  AuthenticationService_TimePeriod __lifetime;

  BOOL __applicationId_isset;
  BOOL __lifetime_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) NSString * applicationId;
@property (nonatomic, retain, getter=lifetime, setter=setLifetime:) AuthenticationService_TimePeriod lifetime;
#endif

- (id) init;
- (id) initWithApplicationId: (NSString *) applicationId lifetime: (AuthenticationService_TimePeriod) lifetime;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) applicationId;
- (void) setApplicationId: (NSString *) applicationId;
#endif
- (BOOL) applicationIdIsSet;

#if !__has_feature(objc_arc)
- (AuthenticationService_TimePeriod) lifetime;
- (void) setLifetime: (AuthenticationService_TimePeriod) lifetime;
#endif
- (BOOL) lifetimeIsSet;

@end

@interface AuthenticationService_CreateApplicationTokenResponse : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_GetApplicationTokenInfoRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_GetApplicationTokenInfoResponse : NSObject <TBase, NSCoding> {
  NSString * __applicationId;

  BOOL __applicationId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) NSString * applicationId;
#endif

- (id) init;
- (id) initWithApplicationId: (NSString *) applicationId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) applicationId;
- (void) setApplicationId: (NSString *) applicationId;
#endif
- (BOOL) applicationIdIsSet;

@end

@interface AuthenticationService_GetUserTokenInfoRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_UserToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_UserToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_UserToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_UserToken) token;
- (void) setToken: (AuthenticationService_UserToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_GetUserTokenInfoResponse : NSObject <TBase, NSCoding> {
  NSString * __userId;

  BOOL __userId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=userId, setter=setUserId:) NSString * userId;
#endif

- (id) init;
- (id) initWithUserId: (NSString *) userId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) userId;
- (void) setUserId: (NSString *) userId;
#endif
- (BOOL) userIdIsSet;

@end

@interface AuthenticationService_InvalidateApplicationTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_InvalidateApplicationTokenResponse : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface AuthenticationService_InvalidateUserTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;

  BOOL __token_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

@end

@interface AuthenticationService_InvalidateUserTokenResponse : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface AuthenticationService_VerifyUserTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_UserToken __token;
  NSString * __userId;

  BOOL __token_isset;
  BOOL __userId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_UserToken token;
@property (nonatomic, retain, getter=userId, setter=setUserId:) NSString * userId;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_UserToken) token userId: (NSString *) userId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_UserToken) token;
- (void) setToken: (AuthenticationService_UserToken) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) userId;
- (void) setUserId: (NSString *) userId;
#endif
- (BOOL) userIdIsSet;

@end

@interface AuthenticationService_VerifyUserTokenResponse : NSObject <TBase, NSCoding> {
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

@interface AuthenticationService_VerifyApplicationTokenRequest : NSObject <TBase, NSCoding> {
  AuthenticationService_ApplicationToken __token;
  NSString * __applicationId;

  BOOL __token_isset;
  BOOL __applicationId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) AuthenticationService_ApplicationToken token;
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) NSString * applicationId;
#endif

- (id) init;
- (id) initWithToken: (AuthenticationService_ApplicationToken) token applicationId: (NSString *) applicationId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AuthenticationService_ApplicationToken) token;
- (void) setToken: (AuthenticationService_ApplicationToken) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) applicationId;
- (void) setApplicationId: (NSString *) applicationId;
#endif
- (BOOL) applicationIdIsSet;

@end

@interface AuthenticationService_VerifyApplicationTokenResponse : NSObject <TBase, NSCoding> {
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

@protocol AuthenticationService_AuthenticationService <NSObject>
- (double) getApiVersion;  // throws TException
- (AuthenticationService_CreateApplicationTokenResponse *) createApplicationToken: (AuthenticationService_CreateApplicationTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, TException
- (AuthenticationService_CreateUserTokenResponse *) createUserToken: (AuthenticationService_CreateUserTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, TException
- (AuthenticationService_GetApplicationTokenInfoResponse *) getApplicationTokenInfo: (AuthenticationService_GetApplicationTokenInfoRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_GetUserTokenInfoResponse *) getUserTokenInfo: (AuthenticationService_GetUserTokenInfoRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_InvalidateApplicationTokenResponse *) invalidateApplicationToken: (AuthenticationService_InvalidateApplicationTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_InvalidateUserTokenResponse *) invalidateUserToken: (AuthenticationService_InvalidateUserTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_VerifyApplicationTokenResponse *) verifyApplicationToken: (AuthenticationService_VerifyApplicationTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
- (AuthenticationService_VerifyUserTokenResponse *) verifyUserToken: (AuthenticationService_VerifyUserTokenRequest *) request;  // throws AuthenticationService_OperationFailedException, AuthenticationService_InvalidTokenException, TException
@end

@interface AuthenticationService_AuthenticationServiceClient : TBaseClient <AuthenticationService_AuthenticationService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface AuthenticationService_AuthenticationServiceProcessor : NSObject <TProcessor> {
  id <AuthenticationService_AuthenticationService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithAuthenticationService: (id <AuthenticationService_AuthenticationService>) service;
- (id<AuthenticationService_AuthenticationService>) service;
@end

@interface AuthenticationService_AuthenticationServiceConstants : NSObject {
}
+ (double) API_VERSION;
+ (AuthenticationService_int) SERVICE_PORT;
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT;
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT;
@end