//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 232.0.0.0.0
//
#ifndef TCSTinCanUserDefaults_h
#define TCSTinCanUserDefaults_h
@import Foundation;

#include "NSUserDefaults.h"

@interface TCSTinCanUserDefaults : NSUserDefaults
/* class methods */
+ (id)allowListKey;
+ (id)storeDemoAllowlistKey;
+ (id)suggestionExpiryReasonAllowlistedValue;
+ (id)defaults;

/* instance methods */
- (void)clearUserData;
@end

#endif /* TCSTinCanUserDefaults_h */