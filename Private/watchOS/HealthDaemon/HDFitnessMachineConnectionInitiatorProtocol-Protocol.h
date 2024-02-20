//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineConnectionInitiatorProtocol_Protocol_h
#define HDFitnessMachineConnectionInitiatorProtocol_Protocol_h
@import Foundation;

@protocol HDFitnessMachineConnectionInitiatorProtocol <NSObject>
/* instance methods */
- (void)registerConnectionInitiatorClient:(id)client withConnectionUUID:(id)uuid;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)uuid activityType:(unsigned long long)type withConnectionUUID:(id)uuid;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)uuid withConnectionUUID:(id)uuid;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)type;
- (void)simulateAccept;
@end

#endif /* HDFitnessMachineConnectionInitiatorProtocol_Protocol_h */