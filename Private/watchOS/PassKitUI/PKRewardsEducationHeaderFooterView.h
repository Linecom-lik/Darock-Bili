//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRewardsEducationHeaderFooterView_h
#define PKRewardsEducationHeaderFooterView_h
@import Foundation;

#include "UITableViewHeaderFooterView.h"

@class UILabel;

@interface PKRewardsEducationHeaderFooterView : UITableViewHeaderFooterView {
  /* instance variables */
  BOOL _isTemplateLayout;
  UILabel *_labelView;
}

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
@end

#endif /* PKRewardsEducationHeaderFooterView_h */