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

#import "Aroma.h"

typedef Aroma_int AromaEmail_int;

typedef Aroma_long AromaEmail_long;

typedef Aroma_timestamp AromaEmail_timestamp;

typedef Aroma_User * AromaEmail_User;

@interface AromaEmail_EmailNewRegistration : NSObject <TBase, NSCoding> {
  AromaEmail_User __infoOfNewUser;

  BOOL __infoOfNewUser_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=infoOfNewUser, setter=setInfoOfNewUser:) AromaEmail_User infoOfNewUser;
#endif

- (id) init;
- (id) initWithInfoOfNewUser: (AromaEmail_User) infoOfNewUser;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEmail_User) infoOfNewUser;
- (void) setInfoOfNewUser: (AromaEmail_User) infoOfNewUser;
#endif
- (BOOL) infoOfNewUserIsSet;

@end

@interface AromaEmail_EmailMessage : NSObject <TBase, NSCoding> {
  AromaEmail_EmailNewRegistration * __newRegistration;

  BOOL __newRegistration_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=newRegistration, setter=setNewRegistration:) AromaEmail_EmailNewRegistration * newRegistration;
#endif

- (id) init;
- (id) initWithNewRegistration: (AromaEmail_EmailNewRegistration *) newRegistration;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEmail_EmailNewRegistration *) newRegistration;
- (void) setNewRegistration: (AromaEmail_EmailNewRegistration *) newRegistration;
#endif
- (BOOL) newRegistrationIsSet;

@end

@interface AromaEmail_EmailConstants : NSObject {
}
@end
