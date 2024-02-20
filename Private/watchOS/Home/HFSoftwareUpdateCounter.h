//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSoftwareUpdateCounter_h
#define HFSoftwareUpdateCounter_h
@import Foundation;

@class NSSet;

@interface HFSoftwareUpdateCounter : NSObject

@property (nonatomic) unsigned long long softwareUpdatesRequested;
@property (nonatomic) unsigned long long softwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long softwareUpdatesInProgress;
@property (nonatomic) unsigned long long softwareUpdatesDownloading;
@property (nonatomic) unsigned long long softwareUpdatesInstalling;
@property (nonatomic) unsigned long long softwareUpdatesInstalled;
@property (nonatomic) unsigned long long firmwareUpdatesReadyToInstall;
@property (nonatomic) unsigned long long updatesReadyToInstall;
@property (nonatomic) unsigned long long allUpdates;
@property (retain, nonatomic) NSSet *accessoriesWithRequestedSoftwareUpdates;
@property (retain, nonatomic) NSSet *accessoriesDownloadingSoftwareUpdates;

/* class methods */
+ (id)progressForAccessoriesDownloadingSoftwareUpdate:(id)update;

/* instance methods */
- (id)initWithAccessories:(id)accessories;
- (id)init;
- (id)description;
@end

#endif /* HFSoftwareUpdateCounter_h */