//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPSimpleBeaconUpdateClientXPCProtocol_Protocol_h
#define SPSimpleBeaconUpdateClientXPCProtocol_Protocol_h
@import Foundation;

@protocol SPSimpleBeaconUpdateClientXPCProtocol <NSObject>
/* instance methods */
- (void)receivedSimpleBeaconUpdates:(id)updates;
- (void)receivedSimpleBeaconRemovals:(id)removals;
@end

#endif /* SPSimpleBeaconUpdateClientXPCProtocol_Protocol_h */