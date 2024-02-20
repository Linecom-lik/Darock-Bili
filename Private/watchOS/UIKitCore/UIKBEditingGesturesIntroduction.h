//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBEditingGesturesIntroduction_h
#define UIKBEditingGesturesIntroduction_h
@import Foundation;

#include "UIKBTutorialModalDisplay.h"

@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

@property (readonly, @dynamic, nonatomic) long long appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;

/* class methods */
+ (BOOL)shouldShowEditingIntroduction;

/* instance methods */
- (void)updateConstraints;
- (void)extraButtonTapAction;
- (id)buttonTitle;
- (id)textTitleDescriptions;
- (id)textBodyDescriptions;
- (id)textBodyFont;
- (double)pagingInterval;
- (id)mediaContents;
- (id)animatedTutorialViewNamed:(id)named ofType:(id)type needsFrame:(BOOL)frame;
- (BOOL)presentsFullScreen;
@end

#endif /* UIKBEditingGesturesIntroduction_h */