//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITraitStorage_h
#define _UITraitStorage_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface _UITraitStorage : NSObject<NSCoding> {
  /* instance variables */
  NSMutableArray *_records;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, weak, nonatomic) id object;

/* instance methods */
- (id)initWithObject:(id)object keyPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)records;
- (void)addRecord:(id)record;
- (void)applyRecordsMatchingTraitCollection:(id)collection;
- (id)description;
- (id)_propertyDescriptionString;
@end

#endif /* _UITraitStorage_h */