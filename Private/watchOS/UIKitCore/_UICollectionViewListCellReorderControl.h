//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewListCellReorderControl_h
#define _UICollectionViewListCellReorderControl_h
@import Foundation;

#include "UIControl.h"
#include "UIColor.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIImageView.h"
#include "UILongPressGestureRecognizer.h"
#include "UITableConstants-Protocol.h"
#include "_UICollectionViewListCellReorderControlDelegate-Protocol.h"

@class NSString;

@interface _UICollectionViewListCellReorderControl : UIControl<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIImageView *_imageView;
  UILongPressGestureRecognizer *_reorderRecognizer;
  BOOL _tracking;
  BOOL _needsImageViewUpdate;
}

@property (weak, nonatomic) NSObject<_UICollectionViewListCellReorderControlDelegate> *delegate;
@property (retain, nonatomic) NSObject<UITableConstants> *constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate constants:(id)constants;
- (void)_setTracking:(BOOL)tracking;
- (void)_setNeedsImageViewUpdate;
- (void)_updateImageViewIfNeeded;
- (struct CGSize { double x0; double x1; })_minimumSizeForHitTesting;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)pan:(id)pan;
- (void)beginReordering;
- (void)gestureMovedToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endReordering:(BOOL)reordering;
@end

#endif /* _UICollectionViewListCellReorderControl_h */