//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKUsageNotificationClient_h
#define PKUsageNotificationClient_h
@import Foundation;

#include "PKUsageNotificationClientExportedInterface-Protocol.h"
#include "PKXPCService.h"

@interface PKUsageNotificationClient : NSObject<PKUsageNotificationClientExportedInterface> {
  /* instance variables */
  PKXPCService *_connection;
  id /* block */ _handler;
  id /* block */ _paymentHandler;
  id /* block */ _paymentPassUsageHandler;
}

/* instance methods */
- (id)init;
- (void)setPassUsageHandler:(id /* block */)handler;
- (void)setPaymentUsageHandler:(id /* block */)handler;
- (void)setPaymentPassUsageHandler:(id /* block */)handler;
- (void)usedPassFromSource:(long long)source withTypeIdentifier:(id)identifier info:(id)info;
- (void)usedPaymentPassWithUniqueIdentifier:(id)identifier transactionIdentifier:(id)identifier info:(id)info;
- (void)usedPaymentPassWithTransactionIdentifier:(id)identifier info:(id)info;
@end

#endif /* PKUsageNotificationClient_h */