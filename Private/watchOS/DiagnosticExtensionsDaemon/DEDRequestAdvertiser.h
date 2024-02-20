//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDRequestAdvertiser_h
#define DEDRequestAdvertiser_h
@import Foundation;

@class NSString;

@interface DEDRequestAdvertiser : NSObject

@property (retain, nonatomic) NSString *hostIdentifier;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)displayName;
- (void)start;
- (void)stop;
- (void)broadcastRecord:(id)record;
- (id)encodeRequestRecordAsJSON:(id)json;
@end

#endif /* DEDRequestAdvertiser_h */