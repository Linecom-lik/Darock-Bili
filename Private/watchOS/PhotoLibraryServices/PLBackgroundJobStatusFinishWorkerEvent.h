//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLBackgroundJobStatusFinishWorkerEvent_h
#define PLBackgroundJobStatusFinishWorkerEvent_h
@import Foundation;

#include "PLBackgroundJobStatusEvent.h"

@class NSString;

@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;

/* instance methods */
- (id)statusDump;
@end

#endif /* PLBackgroundJobStatusFinishWorkerEvent_h */