//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSendOwnershipTokensRequest_h
#define PKPaymentSendOwnershipTokensRequest_h
@import Foundation;

#include "PKPaymentWebServiceRequest.h"

@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSSet *passOwnershipTokens;

/* instance methods */
- (id)_urlRequestWithServiceURL:(id)url deviceIdentifier:(id)identifier deviceMetadata:(id)metadata appleAccountInformation:(id)information;
@end

#endif /* PKPaymentSendOwnershipTokensRequest_h */