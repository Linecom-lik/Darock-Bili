//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPDefaultPhotoLibraryManager_h
#define VCPDefaultPhotoLibraryManager_h
@import Foundation;

#include "PHPhotoLibraryAvailabilityObserver-Protocol.h"

@class NSString, NSURL, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface VCPDefaultPhotoLibraryManager : NSObject<PHPhotoLibraryAvailabilityObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSURL *_defaultPhotoLibraryURL;
  PHPhotoLibrary *_defaultPhotoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)defaultPhotoLibrary;
- (void)closedefaultPhotoLibrary;
- (void)photoLibraryDidBecomeUnavailable:(id)unavailable;
@end

#endif /* VCPDefaultPhotoLibraryManager_h */