//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 77.0.0.0.0
//
#ifndef CBORString_h
#define CBORString_h
@import Foundation;

#include "CBORValue.h"

@class NSString;

@interface CBORString : CBORValue {
  /* instance variables */
  NSString *m_data;
}

/* instance methods */
- (int)fieldType;
- (id)initWith:(id)with;
- (void)write:(id)write;
- (long long)compare:(id)compare;
- (id)getLabel;
@end

#endif /* CBORString_h */