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

typedef Banana_int BananaAuthentication_int;

typedef Banana_long BananaAuthentication_long;

typedef Banana_timestamp BananaAuthentication_timestamp;

@interface BananaAuthentication_ServiceToken : NSObject <TBase, NSCoding> {
  NSString * __id;
  NSString * __serviceName;
  NSString * __organization;
  BananaAuthentication_timestamp __timeOfExpiration;

  BOOL __id_isset;
  BOOL __serviceName_isset;
  BOOL __organization_isset;
  BOOL __timeOfExpiration_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=id, setter=setId:) NSString * id;
@property (nonatomic, retain, getter=serviceName, setter=setServiceName:) NSString * serviceName;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, getter=timeOfExpiration, setter=setTimeOfExpiration:) BananaAuthentication_timestamp timeOfExpiration;
#endif

- (id) init;
- (id) initWithId: (NSString *) id serviceName: (NSString *) serviceName organization: (NSString *) organization timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) id;
- (void) setId: (NSString *) id;
#endif
- (BOOL) idIsSet;

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

#if !__has_feature(objc_arc)
- (BananaAuthentication_timestamp) timeOfExpiration;
- (void) setTimeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration;
#endif
- (BOOL) timeOfExpirationIsSet;

@end

@interface BananaAuthentication_DeveloperToken : NSObject <TBase, NSCoding> {
  NSString * __id;
  BananaAuthentication_timestamp __timeOfExpiration;
  NSString * __organization;
  BOOL __oauthToken;
  NSString * __oauthProvider;

  BOOL __id_isset;
  BOOL __timeOfExpiration_isset;
  BOOL __organization_isset;
  BOOL __oauthToken_isset;
  BOOL __oauthProvider_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=id, setter=setId:) NSString * id;
@property (nonatomic, getter=timeOfExpiration, setter=setTimeOfExpiration:) BananaAuthentication_timestamp timeOfExpiration;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, getter=oauthToken, setter=setOauthToken:) BOOL oauthToken;
@property (nonatomic, retain, getter=oauthProvider, setter=setOauthProvider:) NSString * oauthProvider;
#endif

- (id) init;
- (id) initWithId: (NSString *) id timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration organization: (NSString *) organization oauthToken: (BOOL) oauthToken oauthProvider: (NSString *) oauthProvider;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) id;
- (void) setId: (NSString *) id;
#endif
- (BOOL) idIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_timestamp) timeOfExpiration;
- (void) setTimeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration;
#endif
- (BOOL) timeOfExpirationIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organization;
- (void) setOrganization: (NSString *) organization;
#endif
- (BOOL) organizationIsSet;

#if !__has_feature(objc_arc)
- (BOOL) oauthToken;
- (void) setOauthToken: (BOOL) oauthToken;
#endif
- (BOOL) oauthTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) oauthProvider;
- (void) setOauthProvider: (NSString *) oauthProvider;
#endif
- (BOOL) oauthProviderIsSet;

@end

@interface BananaAuthentication_GithubToken : NSObject <TBase, NSCoding> {
  NSString * __username;
  NSString * __email;
  NSString * __oauthToken;

  BOOL __username_isset;
  BOOL __email_isset;
  BOOL __oauthToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=username, setter=setUsername:) NSString * username;
@property (nonatomic, retain, getter=email, setter=setEmail:) NSString * email;
@property (nonatomic, retain, getter=oauthToken, setter=setOauthToken:) NSString * oauthToken;
#endif

- (id) init;
- (id) initWithUsername: (NSString *) username email: (NSString *) email oauthToken: (NSString *) oauthToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) username;
- (void) setUsername: (NSString *) username;
#endif
- (BOOL) usernameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) email;
- (void) setEmail: (NSString *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (NSString *) oauthToken;
- (void) setOauthToken: (NSString *) oauthToken;
#endif
- (BOOL) oauthTokenIsSet;

@end

@interface BananaAuthentication_Password : NSObject <TBase, NSCoding> {
  NSString * __encryptedPassword;

  BOOL __encryptedPassword_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=encryptedPassword, setter=setEncryptedPassword:) NSString * encryptedPassword;
#endif

- (id) init;
- (id) initWithEncryptedPassword: (NSString *) encryptedPassword;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) encryptedPassword;
- (void) setEncryptedPassword: (NSString *) encryptedPassword;
#endif
- (BOOL) encryptedPasswordIsSet;

@end

@interface BananaAuthentication_AromaAccount : NSObject <TBase, NSCoding> {
  NSString * __email;
  BananaAuthentication_Password * __password;
  NSString * __name;
  Banana_Image * __profileImage;

  BOOL __email_isset;
  BOOL __password_isset;
  BOOL __name_isset;
  BOOL __profileImage_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=email, setter=setEmail:) NSString * email;
@property (nonatomic, retain, getter=password, setter=setPassword:) BananaAuthentication_Password * password;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=profileImage, setter=setProfileImage:) Banana_Image * profileImage;
#endif

- (id) init;
- (id) initWithEmail: (NSString *) email password: (BananaAuthentication_Password *) password name: (NSString *) name profileImage: (Banana_Image *) profileImage;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) email;
- (void) setEmail: (NSString *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_Password *) password;
- (void) setPassword: (BananaAuthentication_Password *) password;
#endif
- (BOOL) passwordIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (Banana_Image *) profileImage;
- (void) setProfileImage: (Banana_Image *) profileImage;
#endif
- (BOOL) profileImageIsSet;

@end

@interface BananaAuthentication_Credentials : NSObject <TBase, NSCoding> {
  BananaAuthentication_GithubToken * __githubToken;
  BananaAuthentication_AromaAccount * __aromaAccount;

  BOOL __githubToken_isset;
  BOOL __aromaAccount_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=githubToken, setter=setGithubToken:) BananaAuthentication_GithubToken * githubToken;
@property (nonatomic, retain, getter=aromaAccount, setter=setAromaAccount:) BananaAuthentication_AromaAccount * aromaAccount;
#endif

- (id) init;
- (id) initWithGithubToken: (BananaAuthentication_GithubToken *) githubToken aromaAccount: (BananaAuthentication_AromaAccount *) aromaAccount;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaAuthentication_GithubToken *) githubToken;
- (void) setGithubToken: (BananaAuthentication_GithubToken *) githubToken;
#endif
- (BOOL) githubTokenIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_AromaAccount *) aromaAccount;
- (void) setAromaAccount: (BananaAuthentication_AromaAccount *) aromaAccount;
#endif
- (BOOL) aromaAccountIsSet;

@end

@interface BananaAuthentication_AuthenticationConstants : NSObject {
}
+ (NSString *) OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY;
@end
