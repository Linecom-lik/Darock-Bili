//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFLocalBulletinAnnounceUserSettingRegistration_h
#define MKFLocalBulletinAnnounceUserSettingRegistration_h
@import Foundation;

#include "MKFLocalBulletinRegistration.h"

@class NSUUID;

@interface MKFLocalBulletinAnnounceUserSettingRegistration : MKFLocalBulletinRegistration

@property (@dynamic, nonatomic) long long announceNotificationMode;
@property (copy, @dynamic, nonatomic) NSUUID *homeUUID;

/* class methods */
+ (id)fetchRequest;
+ (id)fetchAnnounceRegistrationWithHomeUUID:(id)uuid managedObjectContext:(id)context;
@end

#endif /* MKFLocalBulletinAnnounceUserSettingRegistration_h */