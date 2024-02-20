//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusDomainPublisherXPCServer_Protocol_h
#define STStatusDomainPublisherXPCServer_Protocol_h
@import Foundation;

@protocol STStatusDomainPublisherXPCServer <NSObject>
/* instance methods */
- (void)registerToPublishDomain:(unsigned long long)domain fallbackData:(id)data;
- (void)unregisterFromPublishingDomain:(unsigned long long)domain;
- (void)publishData:(id)data forDomain:(unsigned long long)domain withChangeContext:(id)context discardingOnExit:(BOOL)exit reply:(id /* block */)reply;
- (void)publishDiff:(id)diff forDomain:(unsigned long long)domain withChangeContext:(id)context replacingData:(BOOL)data discardingOnExit:(BOOL)exit reply:(id /* block */)reply;
@end

#endif /* STStatusDomainPublisherXPCServer_Protocol_h */