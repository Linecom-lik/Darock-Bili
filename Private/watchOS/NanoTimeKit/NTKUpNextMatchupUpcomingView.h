//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextMatchupUpcomingView_h
#define NTKUpNextMatchupUpcomingView_h
@import Foundation;

#include "UIView.h"
#include "CLKMonochromeComplicationView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"

@class CLKUIColoringLabel, NSString, UIImageView, UILayoutGuide;

@interface NTKUpNextMatchupUpcomingView : UIView<CLKMonochromeComplicationView> {
  /* instance variables */
  UIImageView *_homeLogoImageView;
  UIImageView *_awayLogoImageView;
  CLKUIColoringLabel *_versusLabel;
  CLKUIColoringLabel *_descriptionLabel;
  UILayoutGuide *_homeLogoLayoutGuide;
  UILayoutGuide *_awayLogoLayoutGuide;
}

@property (nonatomic) BOOL paused;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithMatchup:(id)matchup;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (BOOL)isPaused;
@end

#endif /* NTKUpNextMatchupUpcomingView_h */