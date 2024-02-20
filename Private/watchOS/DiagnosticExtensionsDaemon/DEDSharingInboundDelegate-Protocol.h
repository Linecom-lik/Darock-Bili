//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDSharingInboundDelegate_Protocol_h
#define DEDSharingInboundDelegate_Protocol_h
@import Foundation;

@protocol DEDSharingInboundDelegate <NSObject>
/* instance methods */
- (void)sharingInbound_promptPINForDevice:(id)device fromInbound:(id)inbound;
- (void)sharingInbound_successPINForDevice:(id)device fromInbound:(id)inbound;
- (void)sharingInbound_startBugSessionWithIdentifier:(id)identifier configuration:(id)configuration caller:(id)caller target:(id)target;
- (void)sharingInbound_didStartBugSessionWithInfo:(id)info;
- (void)sharingInbound_didAbortSessionWithID:(id)id;
- (id)sharingInbound_sessionForIdentifier:(id)identifier;
@end

#endif /* DEDSharingInboundDelegate_Protocol_h */