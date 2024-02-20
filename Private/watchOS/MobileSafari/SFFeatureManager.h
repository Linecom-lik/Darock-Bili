//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFFeatureManager_h
#define SFFeatureManager_h
@import Foundation;

#include "WBUFeatureManager.h"

@interface SFFeatureManager : WBUFeatureManager

@property (readonly, nonatomic) BOOL addToHomeScreenAvailable;
@property (readonly, nonatomic) BOOL searchHelperEnabled;

/* class methods */
+ (id)sharedFeatureManager;

/* instance methods */
- (id)init;
- (void)_updateAccessLevel;
- (BOOL)isSearchHelperEnabled;
- (BOOL)isAddToHomeScreenAvailable;
@end

#endif /* SFFeatureManager_h */