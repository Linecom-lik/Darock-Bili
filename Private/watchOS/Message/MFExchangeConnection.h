//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFExchangeConnection_h
#define MFExchangeConnection_h
@import Foundation;

#include "MFIMAPConnection.h"

@interface MFExchangeConnection : MFIMAPConnection
/* instance methods */
- (id)_fetchArgumentForMessageUidsAndFlags;
- (id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
- (BOOL)_isFetchResponseValid:(id)valid;
@end

#endif /* MFExchangeConnection_h */