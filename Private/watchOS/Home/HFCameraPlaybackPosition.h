//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraPlaybackPosition_h
#define HFCameraPlaybackPosition_h
@import Foundation;

#include "NAIdentifiable-Protocol.h"

@class HMCameraClip, NSDate, NSString;

@interface HFCameraPlaybackPosition : NSObject<NAIdentifiable>

@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSDate *clipPlaybackDate;
@property (retain, nonatomic) HMCameraClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)livePosition;
+ (id)clipPositionWithDate:(id)date;
+ (id)clipPositionWithDate:(id)date inClip:(id)clip;
+ (id)na_identity;

/* instance methods */
- (id)initWithContentType:(unsigned long long)type clipPlaybackDate:(id)date;
- (id)initWithClipPlaybackDate:(id)date inClip:(id)clip;
- (BOOL)clipIncludesPlaybackDate;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFCameraPlaybackPosition_h */