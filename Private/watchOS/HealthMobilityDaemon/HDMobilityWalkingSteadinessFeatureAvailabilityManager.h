//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMobilityWalkingSteadinessFeatureAvailabilityManager_h
#define HDMobilityWalkingSteadinessFeatureAvailabilityManager_h
@import Foundation;

#include "HDFeatureAvailabilityExtension-Protocol.h"
#include "HDMobilityRegionSupportedDeterminer-Protocol.h"

@class HDFeatureAvailabilityManager, HDProfile, NSString;
@protocol HDRegionAvailabilityProviding;

@interface HDMobilityWalkingSteadinessFeatureAvailabilityManager : NSObject<HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer> {
  /* instance variables */
  HDProfile *_profile;
  long long _currentOnboardingVersion;
  NSObject<HDRegionAvailabilityProviding> *_supportedRegionProvider;
  HDFeatureAvailabilityManager *_manager;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

/* instance methods */
- (id)initWithProfile:(id)profile regionAvailabilityProvider:(id)provider;
- (id)description;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)code;
- (void)registerObserver:(id)observer queue:(id)queue;
- (void)unregisterObserver:(id)observer;
- (id)featureOnboardingRecordWithError:(id *)error;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)completion;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)error;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)completion;
- (id)canCompleteOnboardingForCountryCode:(id)code error:(id *)error;
- (id)onboardingEligibilityForCountryCode:(id)code error:(id *)error;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)error;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)error;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)error;
- (id)pairedFeatureAttributesWithError:(id *)error;
- (id)featureAvailabilityRequirementsWithError:(id *)error;
- (id)regionAvailabilityWithError:(id *)error;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)code countryCodeProvenance:(long long)provenance date:(id)date settings:(id)settings completion:(id /* block */)completion;
- (void)saveOnboardingCompletion:(id)completion settings:(id)settings completion:(id /* block */)completion;
- (void)setFeatureSettingData:(id)data forKey:(id)key completion:(id /* block */)completion;
- (void)setFeatureSettingString:(id)string forKey:(id)key completion:(id /* block */)completion;
- (void)setFeatureSettingNumber:(id)number forKey:(id)key completion:(id /* block */)completion;
- (void)removeFeatureSettingValueForKey:(id)key completion:(id /* block */)completion;
- (void)resetOnboardingWithCompletion:(id /* block */)completion;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalDevicePresentWithError:(id *)error;
- (BOOL)isRegionCodeSupportedOnLocalDevice:(id)device;
- (long long)_currentOnboardingVersion;
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)error;
- (BOOL)_determineIsSupportedWithOnboardingCompletions:(id)completions regionCheckBlock:(id /* block */)block;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)error;
- (BOOL)_localRegionCheckWithCountryCode:(id)code;
@end

#endif /* HDMobilityWalkingSteadinessFeatureAvailabilityManager_h */