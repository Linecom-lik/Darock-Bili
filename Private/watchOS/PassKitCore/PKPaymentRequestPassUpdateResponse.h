//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentRequestPassUpdateResponse_h
#define PKPaymentRequestPassUpdateResponse_h
@import Foundation;

#include "PKPaymentWebServiceResponse.h"

@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *passURL;
@property (readonly, nonatomic) unsigned long long appletState;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKPaymentRequestPassUpdateResponse_h */