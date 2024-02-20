//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXExtensionProcessMannger_h
#define _EXExtensionProcessMannger_h
@import Foundation;

#include "_EXExtensionProcessObserver-Protocol.h"

@class NSMapTable, NSString;

@interface _EXExtensionProcessMannger : NSObject<_EXExtensionProcessObserver>

@property (retain) NSMapTable *processExtensionMap;
@property struct os_unfair_lock_s { unsigned int x0; } processExtensionMapLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (id)processWithLaunchConfiguration:(id)configuration error:(id *)error;
- (void)processDidInvalidate:(id)invalidate;
@end

#endif /* _EXExtensionProcessMannger_h */