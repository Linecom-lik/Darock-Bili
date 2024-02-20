//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef _TtC13SeymourClient9XPCServer_SeymourClient_h
#define _TtC13SeymourClient9XPCServer_SeymourClient_h
@import Foundation;

@interface SeymourClient.XPCServer (SeymourClient) <NSXPCListenerDelegate, SeymourClient.TransportServer>
/* instance methods */
- (void)receiveRequest:(long long)request data:(id)data completion:(id /* block */)completion;
- (void)receiveEvent:(long long)event data:(id)data;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* _TtC13SeymourClient9XPCServer_SeymourClient_h */