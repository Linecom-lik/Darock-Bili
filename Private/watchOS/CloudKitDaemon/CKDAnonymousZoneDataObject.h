//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDAnonymousZoneDataObject_h
#define CKDAnonymousZoneDataObject_h
@import Foundation;

@class NSData;

@interface CKDAnonymousZoneDataObject : NSObject

@property (readonly, copy, nonatomic) NSData *encryptedTupleData;
@property (readonly, nonatomic) int changeType;
@property (readonly, nonatomic) int deleteType;

/* instance methods */
- (id)initWithEncryptedData:(id)data;
- (id)initWithEncryptedData:(id)data changeType:(int)type deleteType:(int)type;
@end

#endif /* CKDAnonymousZoneDataObject_h */