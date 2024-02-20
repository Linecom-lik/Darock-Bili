//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAudioSessionCoordinationSystemInfoMutating_Protocol_h
#define AFAudioSessionCoordinationSystemInfoMutating_Protocol_h
@import Foundation;

@protocol AFAudioSessionCoordinationSystemInfoMutating <NSObject>
/* instance methods */
- (void)setIsSupportedAndEnabled:(BOOL)enabled;
- (void)setHomeKitRoomName:(id)name;
- (void)setHomeKitMediaSystemIdentifier:(id)identifier;
- (void)setMediaRemoteGroupIdentifier:(id)identifier;
- (void)setMediaRemoteRouteIdentifier:(id)identifier;
@end

#endif /* AFAudioSessionCoordinationSystemInfoMutating_Protocol_h */