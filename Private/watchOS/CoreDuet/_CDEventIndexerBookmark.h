//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDEventIndexerBookmark_h
#define _CDEventIndexerBookmark_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject<NSSecureCoding> {
  /* instance variables */
  NSDate *_earliestCreationDate;
  NSDate *_latestCreationDate;
  NSDate *_latestTombstoneDate;
  long long _version;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* _CDEventIndexerBookmark_h */