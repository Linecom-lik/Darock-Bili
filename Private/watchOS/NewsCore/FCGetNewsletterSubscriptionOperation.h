//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCGetNewsletterSubscriptionOperation_h
#define FCGetNewsletterSubscriptionOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCNewsletterEndpointConnection.h"

@interface FCGetNewsletterSubscriptionOperation : FCOperation

@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithEndpointConnection:(id)connection completion:(id /* block */)completion;
- (void)performOperation;
@end

#endif /* FCGetNewsletterSubscriptionOperation_h */