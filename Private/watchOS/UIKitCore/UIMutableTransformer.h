//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMutableTransformer_h
#define UIMutableTransformer_h
@import Foundation;

#include "UITransformer.h"
#include "UIMutableTransformerDelegate-Protocol.h"

@interface UIMutableTransformer : UITransformer {
  /* instance variables */
  NSObject<UIMutableTransformerDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<UIMutableTransformerDelegate> *_delegate;

/* instance methods */
- (void)addTransform:(id)transform reason:(id)reason;
- (void)replaceTransform:(id)transform withTransform:(id)transform reason:(id)reason;
- (void)removeTransform:(id)transform;
- (void)removeAll;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)_ensureTransformsStructuresExists;
- (void)_updateTransform;
- (void)_setDelegate:(id)delegate;
@end

#endif /* UIMutableTransformer_h */