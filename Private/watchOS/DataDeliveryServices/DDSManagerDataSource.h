//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSManagerDataSource_h
#define DDSManagerDataSource_h
@import Foundation;

#include "DDSManagerDataSource-Protocol.h"

@class NSDate, NSString;

@interface DDSManagerDataSource : NSObject<DDSManagerDataSource>

@property (readonly, copy) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)dateForPreferenceKey:(id)key;
- (void)setDate:(id)date forPreferenceKey:(id)key;
@end

#endif /* DDSManagerDataSource_h */