//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef _TtCV18AppleMediaServices9KeepAliveP33_8D5EA5EE57B6E86A66C300315FB9941621RBSAssertionComponent_h
#define _TtCV18AppleMediaServices9KeepAliveP33_8D5EA5EE57B6E86A66C300315FB9941621RBSAssertionComponent_h
@import Foundation;

#include "RBSAssertionObserving-Protocol.h"

@interface AppleMediaServices.KeepAlive.(RBSAssertionComponent in _8D5EA5EE57B6E86A66C300315FB99416) : NSObject<RBSAssertionObserving> { // (Swift)
  /* instance variables */
   logKey;
   assertion;
   invalidationHandler;
}

/* instance methods */
- (void)assertionWillInvalidate:(id)invalidate;
- (void)assertion:(id)assertion didInvalidateWithError:(id)error;
- (id)init;
@end

#endif /* _TtCV18AppleMediaServices9KeepAliveP33_8D5EA5EE57B6E86A66C300315FB9941621RBSAssertionComponent_h */