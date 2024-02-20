//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDeepestPreferredEnvironmentSearch_h
#define _UIDeepestPreferredEnvironmentSearch_h
@import Foundation;

#include "_UIDebugLogNode.h"

@interface _UIDeepestPreferredEnvironmentSearch : NSObject

@property (nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (retain, nonatomic) _UIDebugLogNode *debugLog;

/* instance methods */
- (id)deepestPreferredFocusableItemForEnvironment:(id)environment withRequest:(id)request;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)environment;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)environment visitedFocusEnvironments:(id)environments;
- (void)_reportStartingSearch;
- (void)_reportFoundFocusableItem:(id)item inContext:(id)context;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)context result:(long long)result;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)item;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)environment source:(id)source;
- (void)_reportDidFindLockedFocusEnvironment:(id)environment;
@end

#endif /* _UIDeepestPreferredEnvironmentSearch_h */