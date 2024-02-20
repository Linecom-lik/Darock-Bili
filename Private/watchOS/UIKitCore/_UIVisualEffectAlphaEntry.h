//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIVisualEffectAlphaEntry_h
#define _UIVisualEffectAlphaEntry_h
@import Foundation;

#include "_UIVisualEffectViewEntry.h"

@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {
  /* instance variables */
  double _initialAlpha;
  double _finalAlpha;
}

/* instance methods */
- (id)initWithInitialAlpha:(double)alpha finalAlpha:(double)alpha;
- (void)addEffectToView:(id)view;
- (void)applyIdentityEffectToView:(id)view;
- (void)applyRequestedEffectToView:(id)view;
- (void)removeEffectFromView:(id)view;
- (id)copyForTransitionToEffect:(id)effect;
- (id)copyForTransitionOut;
- (id)description;
@end

#endif /* _UIVisualEffectAlphaEntry_h */