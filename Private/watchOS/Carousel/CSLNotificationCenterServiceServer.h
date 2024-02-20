//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLNotificationCenterServiceServer_h
#define CSLNotificationCenterServiceServer_h
@import Foundation;

#include "CSLSNotificationCenterServiceServerExportedInterface-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class CSLSafeMutableSet, NSArray, NSString, NSTimer, NSXPCListener;

@interface CSLNotificationCenterServiceServer : NSObject<NSXPCListenerDelegate, CSLSNotificationCenterServiceServerExportedInterface>

@property (retain, nonatomic) CSLSafeMutableSet *clientConnections;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSTimer *resetTimer;
@property (nonatomic) unsigned long long pendingNotificationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedNotificationCenterServiceServer;

/* instance methods */
- (id)init;
- (void)_handleNotificationPosted:(id)posted;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_removeClientConnection:(id)connection;
- (void)_reset:(id)_reset;
- (void)_restoreToStateLoadSettings:(id /* block */)settings disableAlerts:(BOOL)alerts completion:(id /* block */)completion;
- (void)restoreToDefaultF5StateWithDisabledAlerts:(BOOL)alerts completion:(id /* block */)completion;
- (void)restoreToStateInPList:(id)plist withDisabledAlerts:(BOOL)alerts completion:(id /* block */)completion;
- (id)_loadSettings;
- (id)_loadOverrideSettings;
- (id)_loadSettingsFromPath:(id)path;
- (id)_loadDefaultSettings;
@end

#endif /* CSLNotificationCenterServiceServer_h */