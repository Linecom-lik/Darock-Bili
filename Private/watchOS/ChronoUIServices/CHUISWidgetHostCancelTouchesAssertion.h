//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWidgetHostCancelTouchesAssertion_h
#define CHUISWidgetHostCancelTouchesAssertion_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class NSArray, NSString;

@interface CHUISWidgetHostCancelTouchesAssertion : NSObject<BSInvalidatable>

@property (nonatomic) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAssertions:(id)assertions;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isInvalidated;
@end

#endif /* CHUISWidgetHostCancelTouchesAssertion_h */