//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCGoalProgressStore_h
#define FCGoalProgressStore_h
@import Foundation;

@class HDProfile;

@interface FCGoalProgressStore : NSObject {
  /* instance variables */
  HDProfile *_profile;
}

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)storeCurrentConfiguration:(id)configuration;
- (id)currentConfiguration;
- (void)storeFiredEventDate:(id)date identifier:(id)identifier;
- (id)lastFiredEventDateForIdentifier:(id)identifier;
- (void)storeScheduledEventIdentifiers:(id)identifiers;
- (void)clearScheduledEventIdentifiers;
- (id)scheduledEventIdentifiers;
- (id)_userDefaultsDomain;
- (id)_legacyDefaultsDomain;
@end

#endif /* FCGoalProgressStore_h */