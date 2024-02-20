//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKScrollingColorPickerView_h
#define NTKScrollingColorPickerView_h
@import Foundation;

#include "UIView.h"
#include "NTKFaceEditColorPickerConfiguration.h"
#include "NTKScrollingColorPickerCollectionViewLayout.h"
#include "NTKScrollingColorPickerViewDelegate-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_NTKScrollingColorPickerCircleView.h"

@class NSString, UICollectionView, UIImage, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface NTKScrollingColorPickerView : UIView<UICollectionViewDataSource, UIGestureRecognizerDelegate> {
  /* instance variables */
  NTKScrollingColorPickerCollectionViewLayout *_layout;
  UICollectionView *_collectionView;
  NTKFaceEditColorPickerConfiguration *_configuration;
  _NTKScrollingColorPickerCircleView *_circleView;
  UIImage *_separatorImage;
  UIImage *_plusImage;
  UITapGestureRecognizer *_tapGesture;
}

@property (nonatomic) double presentationProgress;
@property (nonatomic) double currentPosition;
@property (retain, nonatomic) UIPanGestureRecognizer *editPanGesture;
@property (weak) NSObject<NTKScrollingColorPickerViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_createCollectionView;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_applyScrollViewContentOffset;
- (void)reloadColors;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (double)_circleIndicatorDiameter;
- (double)_swatchDiameter;
- (double)_swatchSpacing;
- (struct CGSize { double x0; double x1; })_separatorSize;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)_separatorImage;
- (id)_plusImage;
- (void)_tapped;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
@end

#endif /* NTKScrollingColorPickerView_h */