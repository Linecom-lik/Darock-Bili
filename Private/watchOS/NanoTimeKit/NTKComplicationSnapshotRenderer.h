//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationSnapshotRenderer_h
#define NTKComplicationSnapshotRenderer_h
@import Foundation;

#include "NTKComplicationCollectionObserver-Protocol.h"
#include "NTKComplicationSnapshottingWindow.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NTKComplicationSnapshotRenderer : NSObject<NTKComplicationCollectionObserver> {
  /* instance variables */
  NTKComplicationSnapshottingWindow *_mainQueue_snapshotWindow;
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableArray *_queue_requests;
  BOOL _queue_requestIsActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)snapshotWindow;
- (void)provideSnapshotOfComplicationWithDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)complicationCollectionDidLoad:(id)load;
- (void)_queue_addRequest:(id)request;
- (void)_queue_serviceRequestIfIdle;
- (void)_mainQueue_provideSnapshotOfComplicationWithDescriptor:(id)descriptor completion:(id /* block */)completion;
@end

#endif /* NTKComplicationSnapshotRenderer_h */