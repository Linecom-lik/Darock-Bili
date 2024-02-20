//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSUserNotificationTextFieldDefinition_h
#define SBSUserNotificationTextFieldDefinition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject<NSCopying, NSMutableCopying> {
  /* instance variables */
  BOOL _isSecure;
  BOOL _hasSetMaxLength;
}

@property (readonly, nonatomic) BOOL _hasSetMaxLength;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL secure;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;

/* class methods */
+ (id)_definitionsFromSerializedDefinitions:(id)definitions;

/* instance methods */
- (id)init;
- (id)_initWithDictionary:(id)dictionary;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_copyPropertiesToDefinition:(id)definition;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isSecure;
@end

#endif /* SBSUserNotificationTextFieldDefinition_h */