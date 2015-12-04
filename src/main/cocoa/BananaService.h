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

typedef int32_t BananaService_int;

typedef int64_t BananaService_long;

typedef int64_t BananaService_timestamp;

typedef BananaException_InvalidArgumentException * BananaService_InvalidArgumentException;

typedef BananaException_InvalidCredentialsException * BananaService_InvalidCredentialsException;

typedef BananaException_OperationFailedException * BananaService_OperationFailedException;

typedef BananaException_ServiceDoesNotExistException * BananaService_ServiceDoesNotExistException;

@interface BananaService_ProvisionServiceRequest : NSObject <TBase, NSCoding> {
  NSString * __token;
  NSString * __serviceName;
  NSString * __programmingLanguage;
  NSString * __organization;

  BOOL __token_isset;
  BOOL __serviceName_isset;
  BOOL __programmingLanguage_isset;
  BOOL __organization_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=programmingLanguage, setter=setProgrammingLanguage:) NSString * programmingLanguage;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token serviceName: (NSString *) serviceName programmingLanguage: (NSString *) programmingLanguage organization: (NSString *) organization;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) programmingLanguage;
- (void) setProgrammingLanguage: (NSString *) programmingLanguage;
#endif
- (BOOL) programmingLanguageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organization;
- (void) setOrganization: (NSString *) organization;
#endif
- (BOOL) organizationIsSet;

@end

@interface BananaService_ProvisionServiceResponse : NSObject <TBase, NSCoding> {
  NSString * __bananaToken;
  NSString * __serviceName;

  BOOL __bananaToken_isset;
  BOOL __serviceName_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=bananaToken, setter=setBananaToken:) NSString * bananaToken;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
#endif

- (id) init;
- (id) initWithBananaToken: (NSString *) bananaToken serviceName: (NSString *) serviceName;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) bananaToken;
- (void) setBananaToken: (NSString *) bananaToken;
#endif
- (BOOL) bananaTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

@end

@interface BananaService_SubscribeToServiceRequest : NSObject <TBase, NSCoding> {
  NSString * __token;
  NSString * __serviceName;
  NSString * __organization;

  BOOL __token_isset;
  BOOL __serviceName_isset;
  BOOL __organization_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=token, setter=setToken:) NSString * token;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
#endif

- (id) init;
- (id) initWithToken: (NSString *) token serviceName: (NSString *) serviceName organization: (NSString *) organization;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) token;
- (void) setToken: (NSString *) token;
#endif
- (BOOL) tokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) serviceName;
- (void) setServiceName: (NSString *) serviceName;
#endif
- (BOOL) serviceNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organization;
- (void) setOrganization: (NSString *) organization;
#endif
- (BOOL) organizationIsSet;

@end

@interface BananaService_SubscribeToServiceResponse : NSObject <TBase, NSCoding> {
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

@interface BananaService_RegisterHealthCheckRequest : NSObject <TBase, NSCoding> {
  BananaEndpoint_Endpoint * __endpoint;

  BOOL __endpoint_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=endpoint, setter=setEndpoint:) BananaEndpoint_Endpoint * endpoint;
#endif

- (id) init;
- (id) initWithEndpoint: (BananaEndpoint_Endpoint *) endpoint;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaEndpoint_Endpoint *) endpoint;
- (void) setEndpoint: (BananaEndpoint_Endpoint *) endpoint;
#endif
- (BOOL) endpointIsSet;

@end

@interface BananaService_RegisterHealthCheckResponse : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@protocol BananaService_BananaService <NSObject>
- (BananaService_ProvisionServiceResponse *) provisionService: (BananaService_ProvisionServiceRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, TException
- (BananaService_SubscribeToServiceResponse *) subscribeToService: (BananaService_SubscribeToServiceRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, TException
- (BananaService_RegisterHealthCheckResponse *) registerHealthCheck: (BananaService_RegisterHealthCheckRequest *) request;  // throws BananaService_OperationFailedException, BananaService_InvalidArgumentException, BananaService_InvalidCredentialsException, BananaService_ServiceDoesNotExistException, TException
@end

@interface BananaService_BananaServiceClient : TBaseClient <BananaService_BananaService> - (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface BananaService_BananaServiceProcessor : NSObject <TProcessor> {
  id <BananaService_BananaService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithBananaService: (id <BananaService_BananaService>) service;
- (id<BananaService_BananaService>) service;
@end

@interface BananaService_BananaServiceConstants : NSObject {
}
@end
