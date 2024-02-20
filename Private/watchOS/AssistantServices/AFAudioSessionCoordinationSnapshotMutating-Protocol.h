//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAudioSessionCoordinationSnapshotMutating_Protocol_h
#define AFAudioSessionCoordinationSnapshotMutating_Protocol_h
@import Foundation;

@protocol AFAudioSessionCoordinationSnapshotMutating <NSObject>
/* instance methods */
- (void)setCurrentOrUpNextDateInterval:(id)interval;
- (void)setIsAudioSessionActive:(BOOL)active;
- (void)setLocalActiveAssertionContexts:(id)contexts;
- (void)setLocalPendingAssertionContexts:(id)contexts;
- (void)setRemoteActiveAssertionContexts:(id)contexts;
- (void)setRemotePendingAssertionContexts:(id)contexts;
- (void)setLocalDevice:(id)device;
- (void)setRemoteQualifiedInRangeDevices:(id)devices;
- (void)setRemoteQualifiedOutOfRangeDevices:(id)devices;
- (void)setRemoteDisqualifiedDevices:(id)devices;
@end

#endif /* AFAudioSessionCoordinationSnapshotMutating_Protocol_h */