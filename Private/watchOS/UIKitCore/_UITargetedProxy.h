//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITargetedProxy_h
#define _UITargetedProxy_h
@import Foundation;

#include "NSProxy.h"

@interface _UITargetedProxy : NSProxy

@property (retain, nonatomic) id _target;

/* class methods */
+ (id)proxyWithTarget:(id)target;

/* instance methods */
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)description;
- (void)_setTarget:(id)target;
@end

#endif /* _UITargetedProxy_h */