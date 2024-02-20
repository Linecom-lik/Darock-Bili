//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICalendarViewDecoration_h
#define UICalendarViewDecoration_h
@import Foundation;

#include "UIView.h"
#include "_UICalendarViewDecorationItem.h"
#include "_UICalendarViewDecorationProviding-Protocol.h"

@interface UICalendarViewDecoration : NSObject<_UICalendarViewDecorationProviding> {
  /* instance variables */
  _UICalendarViewDecorationItem *_decoration;
}

@property (retain, nonatomic) UIView *_decorationView;

/* class methods */
+ (id)decorationWithColor:(id)color size:(long long)size;
+ (id)decorationWithImage:(id)image;
+ (id)decorationWithImage:(id)image color:(id)color size:(long long)size;
+ (id)decorationWithCustomViewProvider:(id /* block */)provider;
+ (double)_referenceHeightForTraitCollection:(id)collection;

/* instance methods */
- (id)init;
- (id)initWithImage:(id)image color:(id)color size:(long long)size;
- (id)initWithCustomViewProvider:(id /* block */)provider;
- (id)initWithDecorationItem:(id)item;
- (void)_setDecorationView:(id)view;
- (id)_decorationViewForReuseView:(id)view;
- (id)_decorationViewReusableKey;
@end

#endif /* UICalendarViewDecoration_h */