//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDifference_h
#define HFDifference_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface HFDifference : NSObject<NSCopying>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSDictionary *userInfo;

/* class methods */
+ (id)difference:(id)difference;
+ (id)difference:(id)difference priority:(unsigned long long)priority;
+ (id)difference:(id)difference priority:(unsigned long long)priority withBlock:(id /* block */)block;

/* instance methods */
- (id)initWithKey:(id)key priority:(unsigned long long)priority;
- (id)initWithKey:(id)key;
- (id)withPriority:(unsigned long long)priority;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionBuilder;
- (id)description;
- (id)_subclass_description;
@end

#endif /* HFDifference_h */