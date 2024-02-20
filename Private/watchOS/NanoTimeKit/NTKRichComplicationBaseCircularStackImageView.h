//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationBaseCircularStackImageView_h
#define NTKRichComplicationBaseCircularStackImageView_h
@import Foundation;

#include "NTKRichComplicationCircularStackContentTextView.h"

@class CDRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView

@property (retain, nonatomic) CDRichComplicationImageView *line1ImageView;

/* instance methods */
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)template;
- (void)setPaused:(BOOL)paused;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKRichComplicationBaseCircularStackImageView_h */