//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHDatabaseClientHandleManager_h
#define CHDatabaseClientHandleManager_h
@import Foundation;

#include "CHSynchronizedLoggable.h"
#include "CallHistoryDBClientHandle.h"

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable

@property (readonly, weak, nonatomic) CallHistoryDBClientHandle *databaseClientHandle;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
@end

#endif /* CHDatabaseClientHandleManager_h */