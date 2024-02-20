//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRStandardIssueResponder_h
#define XRStandardIssueResponder_h
@import Foundation;

#include "XRIssueResponder-Protocol.h"

@class NSString;

@interface XRStandardIssueResponder : NSObject<XRIssueResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)defaultResponder;
+ (void)setDefaultResponder:(id)responder;

/* instance methods */
- (void)handleIssue:(id)issue type:(short)type from:(id)from;
@end

#endif /* XRStandardIssueResponder_h */