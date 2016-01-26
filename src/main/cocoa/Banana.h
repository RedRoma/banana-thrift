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


enum Banana_ImageType {
  ImageType_JPEG = 1,
  ImageType_PNG = 2
};

enum Banana_Industry {
  Industry_BANKING = 0,
  Industry_ECOMMERCE = 1,
  Industry_EDUCATION = 2,
  Industry_GOVERMENT = 3,
  Industry_MARKETING = 4,
  Industry_RETAIL = 5,
  Industry_TECH = 6
};

enum Banana_Tier {
  Tier_FREE = 0,
  Tier_PAID = 1
};

enum Banana_TimeUnit {
  TimeUnit_MILLIS = 0,
  TimeUnit_SECONDS = 1,
  TimeUnit_MINUTES = 2,
  TimeUnit_HOURS = 3,
  TimeUnit_DAYS = 4,
  TimeUnit_WEEKS = 5
};

enum Banana_ProgrammingLanguage {
  ProgrammingLanguage_JAVA = 0,
  ProgrammingLanguage_CPP = 1,
  ProgrammingLanguage_C_SHARP = 2,
  ProgrammingLanguage_C = 3,
  ProgrammingLanguage_OBJECTIVE_C = 4,
  ProgrammingLanguage_SWIFT = 5,
  ProgrammingLanguage_DOT_NET = 6,
  ProgrammingLanguage_RUBY = 7,
  ProgrammingLanguage_GROOVY = 8,
  ProgrammingLanguage_PYTHON = 9,
  ProgrammingLanguage_PHP = 10,
  ProgrammingLanguage_NODE = 11,
  ProgrammingLanguage_DART = 12,
  ProgrammingLanguage_OTHER = 13
};

enum Banana_Role {
  Role_DEVELOPER = 1,
  Role_OPERATIONS = 2,
  Role_MANAGER = 3,
  Role_PRODUCT = 4,
  Role_QA = 5
};

enum Banana_Urgency {
  Urgency_LOW = 1,
  Urgency_MEDIUM = 2,
  Urgency_HIGH = 3
};

typedef int32_t Banana_int;

typedef int64_t Banana_long;

typedef int64_t Banana_timestamp;

typedef NSString * Banana_uuid;

@interface Banana_LengthOfTime : NSObject <TBase, NSCoding> {
  int __unit;
  Banana_long __value;

  BOOL __unit_isset;
  BOOL __value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=unit, setter=setUnit:) int unit;
@property (nonatomic, getter=value, setter=setValue:) Banana_long value;
#endif

- (id) init;
- (id) initWithUnit: (int) unit value: (Banana_long) value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) unit;
- (void) setUnit: (int) unit;
#endif
- (BOOL) unitIsSet;

#if !__has_feature(objc_arc)
- (Banana_long) value;
- (void) setValue: (Banana_long) value;
#endif
- (BOOL) valueIsSet;

@end

@interface Banana_Dimension : NSObject <TBase, NSCoding> {
  Banana_int __width;
  Banana_int __height;

  BOOL __width_isset;
  BOOL __height_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=width, setter=setWidth:) Banana_int width;
@property (nonatomic, getter=height, setter=setHeight:) Banana_int height;
#endif

- (id) init;
- (id) initWithWidth: (Banana_int) width height: (Banana_int) height;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_int) width;
- (void) setWidth: (Banana_int) width;
#endif
- (BOOL) widthIsSet;

#if !__has_feature(objc_arc)
- (Banana_int) height;
- (void) setHeight: (Banana_int) height;
#endif
- (BOOL) heightIsSet;

@end

@interface Banana_Image : NSObject <TBase, NSCoding> {
  int __imageType;
  NSData * __data;
  Banana_Dimension * __dimension;

  BOOL __imageType_isset;
  BOOL __data_isset;
  BOOL __dimension_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=imageType, setter=setImageType:) int imageType;
@property (nonatomic, retain, getter=data, setter=setData:) NSData * data;
@property (nonatomic, retain, getter=dimension, setter=setDimension:) Banana_Dimension * dimension;
#endif

- (id) init;
- (id) initWithImageType: (int) imageType data: (NSData *) data dimension: (Banana_Dimension *) dimension;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) imageType;
- (void) setImageType: (int) imageType;
#endif
- (BOOL) imageTypeIsSet;

#if !__has_feature(objc_arc)
- (NSData *) data;
- (void) setData: (NSData *) data;
#endif
- (BOOL) dataIsSet;

#if !__has_feature(objc_arc)
- (Banana_Dimension *) dimension;
- (void) setDimension: (Banana_Dimension *) dimension;
#endif
- (BOOL) dimensionIsSet;

@end

@interface Banana_Message : NSObject <TBase, NSCoding> {
  Banana_uuid __messageId;
  NSString * __body;
  int __urgency;
  Banana_timestamp __timeOfCreation;
  Banana_timestamp __timeMessageReceived;
  NSString * __applicationName;
  NSString * __hostname;
  NSString * __macAddress;
  BOOL __isTruncated;
  NSString * __title;
  Banana_uuid __applicationId;

  BOOL __messageId_isset;
  BOOL __body_isset;
  BOOL __urgency_isset;
  BOOL __timeOfCreation_isset;
  BOOL __timeMessageReceived_isset;
  BOOL __applicationName_isset;
  BOOL __hostname_isset;
  BOOL __macAddress_isset;
  BOOL __isTruncated_isset;
  BOOL __title_isset;
  BOOL __applicationId_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=messageId, setter=setMessageId:) Banana_uuid messageId;
@property (nonatomic, retain, getter=body, setter=setBody:) NSString * body;
@property (nonatomic, getter=urgency, setter=setUrgency:) int urgency;
@property (nonatomic, getter=timeOfCreation, setter=setTimeOfCreation:) Banana_timestamp timeOfCreation;
@property (nonatomic, getter=timeMessageReceived, setter=setTimeMessageReceived:) Banana_timestamp timeMessageReceived;
@property (nonatomic, retain, getter=applicationName, setter=setApplicationName:) NSString * applicationName;
@property (nonatomic, retain, getter=hostname, setter=setHostname:) NSString * hostname;
@property (nonatomic, retain, getter=macAddress, setter=setMacAddress:) NSString * macAddress;
@property (nonatomic, getter=isTruncated, setter=setIsTruncated:) BOOL isTruncated;
@property (nonatomic, retain, getter=title, setter=setTitle:) NSString * title;
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) Banana_uuid applicationId;
#endif

- (id) init;
- (id) initWithMessageId: (Banana_uuid) messageId body: (NSString *) body urgency: (int) urgency timeOfCreation: (Banana_timestamp) timeOfCreation timeMessageReceived: (Banana_timestamp) timeMessageReceived applicationName: (NSString *) applicationName hostname: (NSString *) hostname macAddress: (NSString *) macAddress isTruncated: (BOOL) isTruncated title: (NSString *) title applicationId: (Banana_uuid) applicationId;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_uuid) messageId;
- (void) setMessageId: (Banana_uuid) messageId;
#endif
- (BOOL) messageIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) body;
- (void) setBody: (NSString *) body;
#endif
- (BOOL) bodyIsSet;

#if !__has_feature(objc_arc)
- (int) urgency;
- (void) setUrgency: (int) urgency;
#endif
- (BOOL) urgencyIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeOfCreation;
- (void) setTimeOfCreation: (Banana_timestamp) timeOfCreation;
#endif
- (BOOL) timeOfCreationIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeMessageReceived;
- (void) setTimeMessageReceived: (Banana_timestamp) timeMessageReceived;
#endif
- (BOOL) timeMessageReceivedIsSet;

#if !__has_feature(objc_arc)
- (NSString *) applicationName;
- (void) setApplicationName: (NSString *) applicationName;
#endif
- (BOOL) applicationNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) hostname;
- (void) setHostname: (NSString *) hostname;
#endif
- (BOOL) hostnameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) macAddress;
- (void) setMacAddress: (NSString *) macAddress;
#endif
- (BOOL) macAddressIsSet;

#if !__has_feature(objc_arc)
- (BOOL) isTruncated;
- (void) setIsTruncated: (BOOL) isTruncated;
#endif
- (BOOL) isTruncatedIsSet;

#if !__has_feature(objc_arc)
- (NSString *) title;
- (void) setTitle: (NSString *) title;
#endif
- (BOOL) titleIsSet;

#if !__has_feature(objc_arc)
- (Banana_uuid) applicationId;
- (void) setApplicationId: (Banana_uuid) applicationId;
#endif
- (BOOL) applicationIdIsSet;

@end

@interface Banana_Organization : NSObject <TBase, NSCoding> {
  Banana_uuid __organizationId;
  NSString * __organizationName;
  NSString * __website;
  Banana_Image * __logo;
  NSString * __techStack;
  NSMutableArray * __owners;
  NSString * __organizationEmail;
  NSString * __stockMarketSymbol;
  NSString * __logoLink;
  int __industry;
  int __tier;
  NSString * __organizationDescription;
  NSString * __githubProfile;

  BOOL __organizationId_isset;
  BOOL __organizationName_isset;
  BOOL __website_isset;
  BOOL __logo_isset;
  BOOL __techStack_isset;
  BOOL __owners_isset;
  BOOL __organizationEmail_isset;
  BOOL __stockMarketSymbol_isset;
  BOOL __logoLink_isset;
  BOOL __industry_isset;
  BOOL __tier_isset;
  BOOL __organizationDescription_isset;
  BOOL __githubProfile_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=organizationId, setter=setOrganizationId:) Banana_uuid organizationId;
@property (nonatomic, retain, getter=organizationName, setter=setOrganizationName:) NSString * organizationName;
@property (nonatomic, retain, getter=website, setter=setWebsite:) NSString * website;
@property (nonatomic, retain, getter=logo, setter=setLogo:) Banana_Image * logo;
@property (nonatomic, retain, getter=techStack, setter=setTechStack:) NSString * techStack;
@property (nonatomic, retain, getter=owners, setter=setOwners:) NSMutableArray * owners;
@property (nonatomic, retain, getter=organizationEmail, setter=setOrganizationEmail:) NSString * organizationEmail;
@property (nonatomic, retain, getter=stockMarketSymbol, setter=setStockMarketSymbol:) NSString * stockMarketSymbol;
@property (nonatomic, retain, getter=logoLink, setter=setLogoLink:) NSString * logoLink;
@property (nonatomic, getter=industry, setter=setIndustry:) int industry;
@property (nonatomic, getter=tier, setter=setTier:) int tier;
@property (nonatomic, retain, getter=organizationDescription, setter=setOrganizationDescription:) NSString * organizationDescription;
@property (nonatomic, retain, getter=githubProfile, setter=setGithubProfile:) NSString * githubProfile;
#endif

- (id) init;
- (id) initWithOrganizationId: (Banana_uuid) organizationId organizationName: (NSString *) organizationName website: (NSString *) website logo: (Banana_Image *) logo techStack: (NSString *) techStack owners: (NSMutableArray *) owners organizationEmail: (NSString *) organizationEmail stockMarketSymbol: (NSString *) stockMarketSymbol logoLink: (NSString *) logoLink industry: (int) industry tier: (int) tier organizationDescription: (NSString *) organizationDescription githubProfile: (NSString *) githubProfile;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_uuid) organizationId;
- (void) setOrganizationId: (Banana_uuid) organizationId;
#endif
- (BOOL) organizationIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organizationName;
- (void) setOrganizationName: (NSString *) organizationName;
#endif
- (BOOL) organizationNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) website;
- (void) setWebsite: (NSString *) website;
#endif
- (BOOL) websiteIsSet;

#if !__has_feature(objc_arc)
- (Banana_Image *) logo;
- (void) setLogo: (Banana_Image *) logo;
#endif
- (BOOL) logoIsSet;

#if !__has_feature(objc_arc)
- (NSString *) techStack;
- (void) setTechStack: (NSString *) techStack;
#endif
- (BOOL) techStackIsSet;

#if !__has_feature(objc_arc)
- (NSMutableArray *) owners;
- (void) setOwners: (NSMutableArray *) owners;
#endif
- (BOOL) ownersIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organizationEmail;
- (void) setOrganizationEmail: (NSString *) organizationEmail;
#endif
- (BOOL) organizationEmailIsSet;

#if !__has_feature(objc_arc)
- (NSString *) stockMarketSymbol;
- (void) setStockMarketSymbol: (NSString *) stockMarketSymbol;
#endif
- (BOOL) stockMarketSymbolIsSet;

#if !__has_feature(objc_arc)
- (NSString *) logoLink;
- (void) setLogoLink: (NSString *) logoLink;
#endif
- (BOOL) logoLinkIsSet;

#if !__has_feature(objc_arc)
- (int) industry;
- (void) setIndustry: (int) industry;
#endif
- (BOOL) industryIsSet;

#if !__has_feature(objc_arc)
- (int) tier;
- (void) setTier: (int) tier;
#endif
- (BOOL) tierIsSet;

#if !__has_feature(objc_arc)
- (NSString *) organizationDescription;
- (void) setOrganizationDescription: (NSString *) organizationDescription;
#endif
- (BOOL) organizationDescriptionIsSet;

#if !__has_feature(objc_arc)
- (NSString *) githubProfile;
- (void) setGithubProfile: (NSString *) githubProfile;
#endif
- (BOOL) githubProfileIsSet;

@end

@interface Banana_User : NSObject <TBase, NSCoding> {
  NSString * __email;
  Banana_uuid __userId;
  NSString * __name;
  NSMutableSet * __roles;
  Banana_Image * __profileImage;
  NSString * __profileImageLink;
  NSString * __githubProfile;
  NSString * __firstName;
  NSString * __middleName;
  NSString * __lastName;
  Banana_timestamp __birthdate;
  Banana_timestamp __timeUserJoined;

  BOOL __email_isset;
  BOOL __userId_isset;
  BOOL __name_isset;
  BOOL __roles_isset;
  BOOL __profileImage_isset;
  BOOL __profileImageLink_isset;
  BOOL __githubProfile_isset;
  BOOL __firstName_isset;
  BOOL __middleName_isset;
  BOOL __lastName_isset;
  BOOL __birthdate_isset;
  BOOL __timeUserJoined_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=email, setter=setEmail:) NSString * email;
@property (nonatomic, retain, getter=userId, setter=setUserId:) Banana_uuid userId;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=roles, setter=setRoles:) NSMutableSet * roles;
@property (nonatomic, retain, getter=profileImage, setter=setProfileImage:) Banana_Image * profileImage;
@property (nonatomic, retain, getter=profileImageLink, setter=setProfileImageLink:) NSString * profileImageLink;
@property (nonatomic, retain, getter=githubProfile, setter=setGithubProfile:) NSString * githubProfile;
@property (nonatomic, retain, getter=firstName, setter=setFirstName:) NSString * firstName;
@property (nonatomic, retain, getter=middleName, setter=setMiddleName:) NSString * middleName;
@property (nonatomic, retain, getter=lastName, setter=setLastName:) NSString * lastName;
@property (nonatomic, getter=birthdate, setter=setBirthdate:) Banana_timestamp birthdate;
@property (nonatomic, getter=timeUserJoined, setter=setTimeUserJoined:) Banana_timestamp timeUserJoined;
#endif

- (id) init;
- (id) initWithEmail: (NSString *) email userId: (Banana_uuid) userId name: (NSString *) name roles: (NSMutableSet *) roles profileImage: (Banana_Image *) profileImage profileImageLink: (NSString *) profileImageLink githubProfile: (NSString *) githubProfile firstName: (NSString *) firstName middleName: (NSString *) middleName lastName: (NSString *) lastName birthdate: (Banana_timestamp) birthdate timeUserJoined: (Banana_timestamp) timeUserJoined;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) email;
- (void) setEmail: (NSString *) email;
#endif
- (BOOL) emailIsSet;

#if !__has_feature(objc_arc)
- (Banana_uuid) userId;
- (void) setUserId: (Banana_uuid) userId;
#endif
- (BOOL) userIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSMutableSet *) roles;
- (void) setRoles: (NSMutableSet *) roles;
#endif
- (BOOL) rolesIsSet;

#if !__has_feature(objc_arc)
- (Banana_Image *) profileImage;
- (void) setProfileImage: (Banana_Image *) profileImage;
#endif
- (BOOL) profileImageIsSet;

#if !__has_feature(objc_arc)
- (NSString *) profileImageLink;
- (void) setProfileImageLink: (NSString *) profileImageLink;
#endif
- (BOOL) profileImageLinkIsSet;

#if !__has_feature(objc_arc)
- (NSString *) githubProfile;
- (void) setGithubProfile: (NSString *) githubProfile;
#endif
- (BOOL) githubProfileIsSet;

#if !__has_feature(objc_arc)
- (NSString *) firstName;
- (void) setFirstName: (NSString *) firstName;
#endif
- (BOOL) firstNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) middleName;
- (void) setMiddleName: (NSString *) middleName;
#endif
- (BOOL) middleNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) lastName;
- (void) setLastName: (NSString *) lastName;
#endif
- (BOOL) lastNameIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) birthdate;
- (void) setBirthdate: (Banana_timestamp) birthdate;
#endif
- (BOOL) birthdateIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeUserJoined;
- (void) setTimeUserJoined: (Banana_timestamp) timeUserJoined;
#endif
- (BOOL) timeUserJoinedIsSet;

@end

@interface Banana_Application : NSObject <TBase, NSCoding> {
  NSMutableSet * __owners;
  Banana_timestamp __timeOfProvisioning;
  NSString * __name;
  Banana_uuid __applicationId;
  Banana_long __totalMessagesSent;
  Banana_Image * __icon;
  int __programmingLanguage;
  NSMutableSet * __followers;
  NSString * __applicationDescription;
  Banana_uuid __organizationId;
  int __tier;
  Banana_timestamp __timeOfTokenExpiration;

  BOOL __owners_isset;
  BOOL __timeOfProvisioning_isset;
  BOOL __name_isset;
  BOOL __applicationId_isset;
  BOOL __totalMessagesSent_isset;
  BOOL __icon_isset;
  BOOL __programmingLanguage_isset;
  BOOL __followers_isset;
  BOOL __applicationDescription_isset;
  BOOL __organizationId_isset;
  BOOL __tier_isset;
  BOOL __timeOfTokenExpiration_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=owners, setter=setOwners:) NSMutableSet * owners;
@property (nonatomic, getter=timeOfProvisioning, setter=setTimeOfProvisioning:) Banana_timestamp timeOfProvisioning;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=applicationId, setter=setApplicationId:) Banana_uuid applicationId;
@property (nonatomic, getter=totalMessagesSent, setter=setTotalMessagesSent:) Banana_long totalMessagesSent;
@property (nonatomic, retain, getter=icon, setter=setIcon:) Banana_Image * icon;
@property (nonatomic, getter=programmingLanguage, setter=setProgrammingLanguage:) int programmingLanguage;
@property (nonatomic, retain, getter=followers, setter=setFollowers:) NSMutableSet * followers;
@property (nonatomic, retain, getter=applicationDescription, setter=setApplicationDescription:) NSString * applicationDescription;
@property (nonatomic, retain, getter=organizationId, setter=setOrganizationId:) Banana_uuid organizationId;
@property (nonatomic, getter=tier, setter=setTier:) int tier;
@property (nonatomic, getter=timeOfTokenExpiration, setter=setTimeOfTokenExpiration:) Banana_timestamp timeOfTokenExpiration;
#endif

- (id) init;
- (id) initWithOwners: (NSMutableSet *) owners timeOfProvisioning: (Banana_timestamp) timeOfProvisioning name: (NSString *) name applicationId: (Banana_uuid) applicationId totalMessagesSent: (Banana_long) totalMessagesSent icon: (Banana_Image *) icon programmingLanguage: (int) programmingLanguage followers: (NSMutableSet *) followers applicationDescription: (NSString *) applicationDescription organizationId: (Banana_uuid) organizationId tier: (int) tier timeOfTokenExpiration: (Banana_timestamp) timeOfTokenExpiration;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSMutableSet *) owners;
- (void) setOwners: (NSMutableSet *) owners;
#endif
- (BOOL) ownersIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeOfProvisioning;
- (void) setTimeOfProvisioning: (Banana_timestamp) timeOfProvisioning;
#endif
- (BOOL) timeOfProvisioningIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (Banana_uuid) applicationId;
- (void) setApplicationId: (Banana_uuid) applicationId;
#endif
- (BOOL) applicationIdIsSet;

#if !__has_feature(objc_arc)
- (Banana_long) totalMessagesSent;
- (void) setTotalMessagesSent: (Banana_long) totalMessagesSent;
#endif
- (BOOL) totalMessagesSentIsSet;

#if !__has_feature(objc_arc)
- (Banana_Image *) icon;
- (void) setIcon: (Banana_Image *) icon;
#endif
- (BOOL) iconIsSet;

#if !__has_feature(objc_arc)
- (int) programmingLanguage;
- (void) setProgrammingLanguage: (int) programmingLanguage;
#endif
- (BOOL) programmingLanguageIsSet;

#if !__has_feature(objc_arc)
- (NSMutableSet *) followers;
- (void) setFollowers: (NSMutableSet *) followers;
#endif
- (BOOL) followersIsSet;

#if !__has_feature(objc_arc)
- (NSString *) applicationDescription;
- (void) setApplicationDescription: (NSString *) applicationDescription;
#endif
- (BOOL) applicationDescriptionIsSet;

#if !__has_feature(objc_arc)
- (Banana_uuid) organizationId;
- (void) setOrganizationId: (Banana_uuid) organizationId;
#endif
- (BOOL) organizationIdIsSet;

#if !__has_feature(objc_arc)
- (int) tier;
- (void) setTier: (int) tier;
#endif
- (BOOL) tierIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeOfTokenExpiration;
- (void) setTimeOfTokenExpiration: (Banana_timestamp) timeOfTokenExpiration;
#endif
- (BOOL) timeOfTokenExpirationIsSet;

@end

@interface Banana_ServiceAnnouncement : NSObject <TBase, NSCoding> {
  NSString * __message;
  int __importance;
  Banana_uuid __id;
  Banana_timestamp __timeOfExpiration;

  BOOL __message_isset;
  BOOL __importance_isset;
  BOOL __id_isset;
  BOOL __timeOfExpiration_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
@property (nonatomic, getter=importance, setter=setImportance:) int importance;
@property (nonatomic, retain, getter=id, setter=setId:) Banana_uuid id;
@property (nonatomic, getter=timeOfExpiration, setter=setTimeOfExpiration:) Banana_timestamp timeOfExpiration;
#endif

- (id) init;
- (id) initWithMessage: (NSString *) message importance: (int) importance id: (Banana_uuid) id timeOfExpiration: (Banana_timestamp) timeOfExpiration;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

#if !__has_feature(objc_arc)
- (int) importance;
- (void) setImportance: (int) importance;
#endif
- (BOOL) importanceIsSet;

#if !__has_feature(objc_arc)
- (Banana_uuid) id;
- (void) setId: (Banana_uuid) id;
#endif
- (BOOL) idIsSet;

#if !__has_feature(objc_arc)
- (Banana_timestamp) timeOfExpiration;
- (void) setTimeOfExpiration: (Banana_timestamp) timeOfExpiration;
#endif
- (BOOL) timeOfExpirationIsSet;

@end

@interface Banana_BananaConstants : NSObject {
}
@end
