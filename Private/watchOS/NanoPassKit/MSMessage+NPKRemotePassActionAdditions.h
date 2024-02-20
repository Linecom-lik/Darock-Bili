//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef MSMessage_NPKRemotePassActionAdditions_h
#define MSMessage_NPKRemotePassActionAdditions_h
@import Foundation;

@interface MSMessage (NPKRemotePassActionAdditions)
/* instance methods */
- (id)response;
- (id)request;
- (id)enterValueRequest;
- (id)enterValueResponse;
- (id)selectItemResponse;
- (id)selectItemRequest;
- (id)remotePassAction;
- (void)updateDataURLForRemoteAction:(id)action;
@end

#endif /* MSMessage_NPKRemotePassActionAdditions_h */