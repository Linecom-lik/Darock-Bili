//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.14.1.0.0
//
#ifndef PlayLiveServiceIntentHandling_Protocol_h
#define PlayLiveServiceIntentHandling_Protocol_h
@import Foundation;

@protocol PlayLiveServiceIntentHandling <NSObject>
/* instance methods */
- (void)handlePlayLiveService:(id)service completion:(id /* block */)completion;
- (void)handlePlayLiveService:(id)service completion:(id /* block */)completion;
- (void)resolveLiveServiceForPlayLiveService:(id)service withCompletion:(id /* block */)completion;
- (void)resolveLiveServiceForPlayLiveService:(id)service withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmPlayLiveService:(id)service completion:(id /* block */)completion;
- (void)confirmPlayLiveService:(id)service completion:(id /* block */)completion;
@end

#endif /* PlayLiveServiceIntentHandling_Protocol_h */