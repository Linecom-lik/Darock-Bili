//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFBulletinCondition_Protocol_h
#define MKFBulletinCondition_Protocol_h
@import Foundation;

@protocol MKFBulletinCondition <MKFModel, MKFBulletinConditionPublicExtensions>

@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFBulletinRegistration> *bulletinRegistration;
@property (readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;

@end

#endif /* MKFBulletinCondition_Protocol_h */