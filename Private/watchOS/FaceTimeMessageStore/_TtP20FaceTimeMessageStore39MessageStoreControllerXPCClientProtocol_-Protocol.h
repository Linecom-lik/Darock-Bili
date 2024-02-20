//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef _TtP20FaceTimeMessageStore39MessageStoreControllerXPCClientProtocol__Protocol_h
#define _TtP20FaceTimeMessageStore39MessageStoreControllerXPCClientProtocol__Protocol_h
@import Foundation;

@protocol FaceTimeMessageStore.MessageStoreControllerXPCClientProtocol 
/* instance methods */
- (void)messageStoreDidAddMessages:(id)messages;
- (void)messageStoreDidDeleteMessages:(id)messages;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)uuids;
- (void)messageStoreDidUpdateMessages:(id)messages;
- (void)messageStoreAccountInfoDidChange:(id)change;
@end

#endif /* _TtP20FaceTimeMessageStore39MessageStoreControllerXPCClientProtocol__Protocol_h */