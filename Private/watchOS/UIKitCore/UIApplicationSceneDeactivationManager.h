//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIApplicationSceneDeactivationManager_h
#define UIApplicationSceneDeactivationManager_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"

@class FBScene, NSHashTable, NSMutableSet, NSString;

@interface UIApplicationSceneDeactivationManager : NSObject<BSDescriptionProviding> {
  /* instance variables */
  NSHashTable *_assertions;
  NSMutableSet *_eligibleScenes;
  FBScene *_updatingScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)newAssertionWithReason:(long long)reason;
- (void)beginTrackingScene:(id)scene;
- (void)endTrackingScene:(id)scene;
- (void)amendSceneSettings:(id)settings forScene:(id)scene;
- (id)eligibleScenes;
- (id)assertions;
- (void)addAssertion:(id)assertion withTransitionContext:(id)context;
- (void)removeAssertion:(id)assertion;
- (BOOL)_isEligibleScene:(id)scene;
- (BOOL)_areEligibleSettings:(id)settings;
- (BOOL)_isEligibleScene:(id)scene withSettings:(id)settings;
- (void)_setDeactivationReasons:(unsigned long long)reasons onScene:(id)scene withSettings:(id)settings reason:(id)reason;
- (void)_updateScenesWithTransitionContext:(id)context reason:(id)reason;
- (unsigned long long)_deactivationReasonsForScene:(id)scene withSettings:(id)settings;
- (void)_trackScene:(id)scene;
- (void)_untrackScene:(id)scene;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* UIApplicationSceneDeactivationManager_h */