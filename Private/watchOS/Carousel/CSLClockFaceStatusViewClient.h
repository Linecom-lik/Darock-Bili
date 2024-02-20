//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLClockFaceStatusViewClient_h
#define CSLClockFaceStatusViewClient_h
@import Foundation;

#include "CSLClockFaceStatusViewClientDelegate-Protocol.h"
#include "CSLClockFaceStatusViewControllerServer-Protocol.h"

@class CSLClockFaceStatusViewConfiguration, CSLClockFaceStatusViewSettings, NSString, NSXPCConnection;

@interface CSLClockFaceStatusViewClient : NSObject<CSLClockFaceStatusViewControllerServer>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) NSObject<CSLClockFaceStatusViewClientDelegate> *delegate;
@property (readonly, nonatomic) CSLClockFaceStatusViewConfiguration *configuration;
@property (readonly, nonatomic) CSLClockFaceStatusViewSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection delegate:(id)delegate;
- (void)registerClientWithConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)updateSettingsWithBlock:(id /* block */)block;
- (void)updateSettingsWithBlock:(id /* block */)block forceUpdate:(BOOL)update;
- (void)launchSessionAppWithBundleID:(id)id sessionType:(long long)type;
@end

#endif /* CSLClockFaceStatusViewClient_h */