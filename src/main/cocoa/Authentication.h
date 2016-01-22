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

enum BananaAuthentication_TokenType {
  TokenType_APPLICATION = 1,
  TokenType_USER = 2
};

typedef Banana_int BananaAuthentication_int;

typedef Banana_long BananaAuthentication_long;

typedef Banana_timestamp BananaAuthentication_timestamp;

typedef Banana_uuid BananaAuthentication_uuid;

@interface BananaAuthentication_ApplicationToken : NSObject <TBase, NSCoding> {
  NSString * __tokenId;
  NSString * __organization;
  BananaAuthentication_timestamp __timeOfExpiration;
  BananaAuthentication_uuid __applicationId;
  NSString * __applicationName;

  BOOL __tokenId_isset;
  BOOL __organization_isset;
  BOOL __timeOfExpiration_isset;
  BOOL __applicationId_isset;
  BOOL __applicationName_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=tokenId, setter=setTokenId:) NSString * tokenId;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, getter=timeOfExpiration, setter=setTimeOfExpiration:) BananaAuthentication_timestamp timeOfExpiration;
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) BananaAuthentication_uuid applicationId;
@property (nonatomic, retain, getter=applicationName, setter=setApplicationName:) NSString * applicationName;
#endif

- (id) init;
- (id) initWithTokenId: (NSString *) tokenId organization: (NSString *) organization timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration applicationId: (BananaAuthentication_uuid) applicationId applicationName: (NSString *) applicationName;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) tokenId;
- (void) setTokenId: (NSString *) tokenId;
#endif
- (BOOL) tokenIdIsSet;

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

#if !__has_feature(objc_arc)
- (BananaAuthentication_uuid) applicationId;
- (void) setApplicationId: (BananaAuthentication_uuid) applicationId;
#endif
- (BOOL) applicationIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) applicationName;
- (void) setApplicationName: (NSString *) applicationName;
#endif
- (BOOL) applicationNameIsSet;

@end

@interface BananaAuthentication_UserToken : NSObject <TBase, NSCoding> {
  NSString * __tokenId;
  BananaAuthentication_timestamp __timeOfExpiration;
  NSString * __organization;
  BOOL __isOauthToken;
  NSString * __oauthProvider;
  BananaAuthentication_uuid __userId;

  BOOL __tokenId_isset;
  BOOL __timeOfExpiration_isset;
  BOOL __organization_isset;
  BOOL __isOauthToken_isset;
  BOOL __oauthProvider_isset;
  BOOL __userId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=tokenId, setter=setTokenId:) NSString * tokenId;
@property (nonatomic, getter=timeOfExpiration, setter=setTimeOfExpiration:) BananaAuthentication_timestamp timeOfExpiration;
@property (nonatomic, retain, getter=organization, setter=setOrganization:) NSString * organization;
@property (nonatomic, getter=isOauthToken, setter=setIsOauthToken:) BOOL isOauthToken;
@property (nonatomic, retain, getter=oauthProvider, setter=setOauthProvider:) NSString * oauthProvider;
@property (nonatomic, retain, getter=userId, setter=setUserId:) BananaAuthentication_uuid userId;
#endif

- (id) init;
- (id) initWithTokenId: (NSString *) tokenId timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration organization: (NSString *) organization isOauthToken: (BOOL) isOauthToken oauthProvider: (NSString *) oauthProvider userId: (BananaAuthentication_uuid) userId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) tokenId;
- (void) setTokenId: (NSString *) tokenId;
#endif
- (BOOL) tokenIdIsSet;

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
- (BOOL) isOauthToken;
- (void) setIsOauthToken: (BOOL) isOauthToken;
#endif
- (BOOL) isOauthTokenIsSet;

#if !__has_feature(objc_arc)
- (NSString *) oauthProvider;
- (void) setOauthProvider: (NSString *) oauthProvider;
#endif
- (BOOL) oauthProviderIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_uuid) userId;
- (void) setUserId: (BananaAuthentication_uuid) userId;
#endif
- (BOOL) userIdIsSet;

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
  int __role;

  BOOL __email_isset;
  BOOL __password_isset;
  BOOL __name_isset;
  BOOL __profileImage_isset;
  BOOL __role_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=email, setter=setEmail:) NSString * email;
@property (nonatomic, retain, getter=password, setter=setPassword:) BananaAuthentication_Password * password;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=profileImage, setter=setProfileImage:) Banana_Image * profileImage;
@property (nonatomic, getter=role, setter=setRole:) int role;
#endif

- (id) init;
- (id) initWithEmail: (NSString *) email password: (BananaAuthentication_Password *) password name: (NSString *) name profileImage: (Banana_Image *) profileImage role: (int) role;

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

#if !__has_feature(objc_arc)
- (int) role;
- (void) setRole: (int) role;
#endif
- (BOOL) roleIsSet;

@end

@interface BananaAuthentication_Credentials : NSObject <TBase, NSCoding> {
  BananaAuthentication_GithubToken * __githubToken;
  BananaAuthentication_Password * __aromaPassword;

  BOOL __githubToken_isset;
  BOOL __aromaPassword_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=githubToken, setter=setGithubToken:) BananaAuthentication_GithubToken * githubToken;
@property (nonatomic, retain, getter=aromaPassword, setter=setAromaPassword:) BananaAuthentication_Password * aromaPassword;
#endif

- (id) init;
- (id) initWithGithubToken: (BananaAuthentication_GithubToken *) githubToken aromaPassword: (BananaAuthentication_Password *) aromaPassword;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaAuthentication_GithubToken *) githubToken;
- (void) setGithubToken: (BananaAuthentication_GithubToken *) githubToken;
#endif
- (BOOL) githubTokenIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_Password *) aromaPassword;
- (void) setAromaPassword: (BananaAuthentication_Password *) aromaPassword;
#endif
- (BOOL) aromaPasswordIsSet;

@end

@interface BananaAuthentication_AuthenticationToken : NSObject <TBase, NSCoding> {
  BananaAuthentication_ApplicationToken * __applicationToken;
  BananaAuthentication_UserToken * __userToken;

  BOOL __applicationToken_isset;
  BOOL __userToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=applicationToken, setter=setApplicationToken:) BananaAuthentication_ApplicationToken * applicationToken;
@property (nonatomic, retain, getter=userToken, setter=setUserToken:) BananaAuthentication_UserToken * userToken;
#endif

- (id) init;
- (id) initWithApplicationToken: (BananaAuthentication_ApplicationToken *) applicationToken userToken: (BananaAuthentication_UserToken *) userToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (BananaAuthentication_ApplicationToken *) applicationToken;
- (void) setApplicationToken: (BananaAuthentication_ApplicationToken *) applicationToken;
#endif
- (BOOL) applicationTokenIsSet;

#if !__has_feature(objc_arc)
- (BananaAuthentication_UserToken *) userToken;
- (void) setUserToken: (BananaAuthentication_UserToken *) userToken;
#endif
- (BOOL) userTokenIsSet;

@end

@interface BananaAuthentication_AuthenticationConstants : NSObject {
}
+ (NSString *) OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY;
@end
