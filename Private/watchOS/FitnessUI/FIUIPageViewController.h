//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIPageViewController_h
#define FIUIPageViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDataSourcePrefetching-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSCache, NSString, PUICPageIndicatorView, UICollectionView, UICollectionViewFlowLayout, UIViewController;
@protocol FIUIPageViewControllerDataSource, FIUIPageViewControllerDelegate;

@interface FIUIPageViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PUICPageIndicatorView *pageControl;
@property (nonatomic) BOOL userDidTapPageControl;
@property (retain, nonatomic) NSCache *viewControllerForIndexPath;
@property (nonatomic) BOOL shouldNotifyDelegateWhenScrollViewSettles;
@property (weak, nonatomic) NSObject<FIUIPageViewControllerDataSource> *dataSource;
@property (weak, nonatomic) NSObject<FIUIPageViewControllerDelegate> *delegate;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) long long currentlyDisplayedIndex;
@property (nonatomic) BOOL showsPagingIndicator;
@property (readonly, nonatomic) UIViewController *currentlyDisplayedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)setCurrentlyDisplayedIndex:(long long)index animated:(BOOL)animated;
- (void)reloadData;
- (void)_pageSelectedWithControl:(id)control;
- (void)_addViewController:(id)controller toCell:(id)cell;
- (void)_scrollViewDidStop;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
@end

#endif /* FIUIPageViewController_h */