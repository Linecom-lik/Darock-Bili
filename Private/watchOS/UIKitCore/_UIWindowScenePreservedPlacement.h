//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWindowScenePreservedPlacement_h
#define _UIWindowScenePreservedPlacement_h
@import Foundation;

#include "UIWindowScenePlacement.h"

@interface _UIWindowScenePreservedPlacement : UIWindowScenePlacement

@property (nonatomic) BOOL keepInBackground;

/* class methods */
+ (unsigned long long)_placementType;

/* instance methods */
- (id)_init;
- (id)init;
- (id)_createConfigurationWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_preserveLayout;
- (BOOL)_requestBackground;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* _UIWindowScenePreservedPlacement_h */