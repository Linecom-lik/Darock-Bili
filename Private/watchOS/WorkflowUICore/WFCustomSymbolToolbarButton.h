//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCustomSymbolToolbarButton_h
#define WFCustomSymbolToolbarButton_h
@import Foundation;

#include "UIButton.h"

@class NSString;

@interface WFCustomSymbolToolbarButton : UIButton

@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) double pointSizeToWidthRatio;

/* instance methods */
- (void)setSymbolName:(id)name pointSizeToWidthRatio:(double)ratio;
- (void)updateImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* WFCustomSymbolToolbarButton_h */