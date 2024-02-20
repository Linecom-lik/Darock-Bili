//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIMutableAlertSceneClientSettings_h
#define WNUIMutableAlertSceneClientSettings_h
@import Foundation;

#include "PUICMutableApplicationSceneClientSettings.h"
#include "WNUIMutableAlertSceneClientSettings-Protocol.h"

@class NSArray, NSSet, NSString;

@interface WNUIMutableAlertSceneClientSettings : PUICMutableApplicationSceneClientSettings<WNUIMutableAlertSceneClientSettings>

@property (nonatomic) long long backgroundStyle;
@property (copy, @dynamic, nonatomic) NSSet *deactivationTriggers;
@property (@dynamic, nonatomic) BOOL playingContinuousAudioFeedback;
@property (@dynamic, nonatomic) unsigned long long allowedAudioFeedbackByOtherAlerts;
@property (@dynamic, nonatomic) BOOL canBeSilencedByDND;
@property (copy, @dynamic, nonatomic) NSSet *alertSuppressionContexts;
@property (@dynamic, nonatomic) long long lockInteractionBehavior;
@property (copy, @dynamic, nonatomic) NSArray *childSceneIDs;
@property (copy, nonatomic) NSString *alwaysOnPrivacyAppBundleID;
@property (copy, @dynamic, nonatomic) NSString *powerLogName;
@property (copy, @dynamic, nonatomic) NSSet *attributes;
@property (@dynamic, nonatomic) BOOL sticky;
@property (@dynamic, nonatomic) long long alertBackgroundStyle;
@property (@dynamic, nonatomic) long long reusePolicy;
@property (@dynamic, nonatomic) long long presentationStyle;
@property (@dynamic, nonatomic) BOOL wantsUserConfirmationEvents;
@property (nonatomic) BOOL allowsSilenceAudioByDNDGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isPlayingContinuousAudioFeedback;
- (BOOL)isWatchNotificationsSubclass;
- (BOOL)isSticky;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
- (id)settings:(id)settings valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (BOOL)settings:(id)settings appendDescriptionToBuilder:(id)builder forFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* WNUIMutableAlertSceneClientSettings_h */