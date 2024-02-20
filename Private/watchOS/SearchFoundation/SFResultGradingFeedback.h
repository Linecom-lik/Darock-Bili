//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFResultGradingFeedback_h
#define SFResultGradingFeedback_h
@import Foundation;

#include "SFResultFeedback.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback<NSCopying>

@property (readonly, nonatomic) unsigned long long grade;
@property (copy, nonatomic) NSString *textFeedback;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResult:(id)result grade:(unsigned long long)grade;
- (id)initWithResult:(id)result grade:(unsigned long long)grade textFeedback:(id)feedback;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SFResultGradingFeedback_h */