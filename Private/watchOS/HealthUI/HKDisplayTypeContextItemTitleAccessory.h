//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDisplayTypeContextItemTitleAccessory_h
#define HKDisplayTypeContextItemTitleAccessory_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface HKDisplayTypeContextItemTitleAccessory : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) UIColor *color;

/* class methods */
+ (id)titleAccessoryWithImagedNamed:(id)named imageColor:(id)color;

/* instance methods */
- (BOOL)_isEqualToTitleAccessory:(id)accessory;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKDisplayTypeContextItemTitleAccessory_h */