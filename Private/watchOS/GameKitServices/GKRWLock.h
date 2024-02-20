//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKRWLock_h
#define GKRWLock_h
@import Foundation;

@interface GKRWLock : NSObject {
  /* instance variables */
  struct _opaque_pthread_rwlock_t { long long __sig; char x[192] __opaque; } _rwLock;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)wrlock;
- (int)tryrdlock;
- (void)rdlock;
- (void)unlock;
@end

#endif /* GKRWLock_h */