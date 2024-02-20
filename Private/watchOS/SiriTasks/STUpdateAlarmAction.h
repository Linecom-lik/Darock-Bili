//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef STUpdateAlarmAction_h
#define STUpdateAlarmAction_h
@import Foundation;

#include "STAlarmAction.h"

@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction {
  /* instance variables */
  NSArray *_modifications;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithModifications:(id)modifications;
- (id)modifications;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* STUpdateAlarmAction_h */