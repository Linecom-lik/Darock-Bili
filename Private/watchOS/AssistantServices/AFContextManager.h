//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFContextManager_h
#define AFContextManager_h
@import Foundation;

@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
  /* instance variables */
  struct __CFArray * _contextProviders;
  CPDistributedMessagingCenter *_center;
}

/* class methods */
+ (id)defaultContextManager;

/* instance methods */
- (id)init;
- (void)_collateContextsIntoArray:(id)array;
- (void)nothing;
- (void)startCenter:(id)center;
- (id)_collateContexts;
- (void)_shutdownServer;
- (void)_startListening;
- (void)_stopListening;
- (id)_serverName;
- (BOOL)addContextProvider:(id)provider;
- (void)removeContextProvider:(id)provider;
- (void)dealloc;
@end

#endif /* AFContextManager_h */