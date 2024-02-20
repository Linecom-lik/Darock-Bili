//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMRecentItem_h
#define IMRecentItem_h
@import Foundation;

@class NSData, NSDictionary, NSNumber, NSString, NSURL;

@interface IMRecentItem : NSObject

@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSDictionary *messageItemInfo;
@property (retain, nonatomic) NSString *accessibilityString;

/* instance methods */
- (void)dealloc;
- (id)initWithGUID:(id)guid data:(id)data messageItemInfo:(id)info;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)asJSONObject;
@end

#endif /* IMRecentItem_h */