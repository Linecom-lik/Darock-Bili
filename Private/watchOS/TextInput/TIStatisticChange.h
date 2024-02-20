//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIStatisticChange_h
#define TIStatisticChange_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface TIStatisticChange : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int value;
@property (readonly, nonatomic) NSString *inputMode;

/* class methods */
+ (id)statisticChangeWithName:(id)name andValue:(int)value andInputMode:(id)mode;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name andValue:(int)value andInputMode:(id)mode;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TIStatisticChange_h */