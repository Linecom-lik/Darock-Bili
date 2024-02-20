//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGetDictionaryValueAction_h
#define WFGetDictionaryValueAction_h
@import Foundation;

#include "WFAction.h"

@interface WFGetDictionaryValueAction : WFAction
/* class methods */
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (void)setOutputWithValue:(id)value preferredDictionaryType:(id)type contentAttributionSet:(id)set;
@end

#endif /* WFGetDictionaryValueAction_h */