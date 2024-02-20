//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef _TtC17NanoNewsHeadlines15AppStateMonitor_h
#define _TtC17NanoNewsHeadlines15AppStateMonitor_h
@import Foundation;

#include "FCAppActivityMonitor-Protocol.h"

@interface NanoNewsHeadlines.AppStateMonitor : NSObject<FCAppActivityMonitor> { // (Swift)
  /* instance variables */
   observers;
   fcObservers;
}

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* _TtC17NanoNewsHeadlines15AppStateMonitor_h */