//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef CMMTLCommandQueue_h
#define CMMTLCommandQueue_h
@import Foundation;

#include "CMMTLDevice.h"
#include "InterceptConfig.h"
#include "MTLCommandQueue-Protocol.h"
#include "MTLCommandQueueSPI-Protocol.h"
#include "MTLDevice-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CMMTLCommandQueue : NSObject<MTLCommandQueueSPI> {
  /* instance variables */
  CMMTLDevice *_cmDevice;
  NSObject<MTLCommandQueue> *_commandQueue;
  InterceptConfig *_interceptConfig;
}

@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL skipRender;
@property BOOL executionEnabled;
@property (readonly) BOOL isOpenGLQueue;
@property BOOL profilingEnabled;
@property (nonatomic) BOOL StatEnabled;
@property (nonatomic) unsigned long long StatOptions;
@property (nonatomic) unsigned long long StatLocations;
@property (copy) NSString *label;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCMMTLDevice:(id)cmmtldevice;
- (id)initWithCMMTLDevice:(id)cmmtldevice maxCommandBufferCount:(unsigned long long)count;
- (id)initWithCMMTLDevice:(id)cmmtldevice descriptor:(id)descriptor;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* CMMTLCommandQueue_h */