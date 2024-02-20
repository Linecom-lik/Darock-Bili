//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMServiceObserver_Protocol_h
#define CDMServiceObserver_Protocol_h
@import Foundation;

@protocol CDMServiceObserver <NSObject>
@optional
/* instance methods */
- (void)smService:(id)service didPublishCommand:(id)command;
- (void)smService:(id)service didPublishRequest:(id)request withResponseCallback:(id /* block */)callback;
@end

#endif /* CDMServiceObserver_Protocol_h */