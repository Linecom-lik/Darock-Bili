//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAssertionBase_h
#define _UIAssertionBase_h
@import Foundation;

#include "_UIAssertion-Protocol.h"
#include "_UIAssertionController.h"

@class NSString;

@interface _UIAssertionBase : NSObject<_UIAssertion>

@property (readonly, nonatomic) BOOL initialState;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *reason;
@property (weak, nonatomic) _UIAssertionController *parentController;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL requiresExplicitInvalidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)_initWithType:(unsigned long long)type initialState:(BOOL)state reason:(id)reason requiresExplicitInvalidation:(BOOL)invalidation;
- (void)_invalidate;
- (void)dealloc;
@end

#endif /* _UIAssertionBase_h */