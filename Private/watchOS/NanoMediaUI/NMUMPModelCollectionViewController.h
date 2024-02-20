//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUMPModelCollectionViewController_h
#define NMUMPModelCollectionViewController_h
@import Foundation;

#include "NMUModelCollectionViewController.h"
#include "NMUContentUnavailableView.h"
#include "NMUMPModelRequestContentLoader.h"
#include "NMUMPModelRequestContentLoaderDataSource-Protocol.h"
#include "NMUMPModelRequestContentLoaderDelegate-Protocol.h"
#include "NMUModelCollectionDataSource-Protocol.h"
#include "NMUModelCollectionDelegate-Protocol.h"

@class NSString, UIView;

@interface NMUMPModelCollectionViewController : NMUModelCollectionViewController<NMUModelCollectionDataSource, NMUModelCollectionDelegate, NMUMPModelRequestContentLoaderDataSource, NMUMPModelRequestContentLoaderDelegate> {
  /* instance variables */
  UIView *_activityIndicatorView;
  BOOL _automaticContentUpdatingEnabled;
}

@property (readonly, nonatomic) NMUContentUnavailableView *contentUnavailableView;
@property (retain, nonatomic) NMUMPModelRequestContentLoader *contentLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)setNeedsContentLoaderUpdate;
- (void)setNeedsContentUnavailableViewUpdate;
- (id)modelRequestsForContentLoader:(id)loader;
- (void)contentLoaderWillBeginLoadingContent:(id)content;
- (void)contentLoaderDidFinishLoadingContent:(id)content;
- (void)contentLoader:(id)loader didUpdateModelResponseWithChangeDetails:(id)details;
- (long long)numberOfSections;
- (id)modelObjectForSection:(long long)section;
- (long long)numberOfItemsInSection:(long long)section;
- (id)modelObjectForItemAtIndexPath:(id)path;
- (void)configureCell:(id)cell withModelObject:(id)object atIndexPath:(id)path;
- (void)didSelectModelObject:(id)object atIndexPath:(id)path;
- (void)_showActivityIndicatorView;
- (void)_hideActivityIndicatorView;
- (void)_updateActivityIndicatorViewVisibility;
- (void)_showContentUnavailableView;
- (void)_hideContentUnavailableView;
- (void)_updateContentUnavailableViewVisibility;
@end

#endif /* NMUMPModelCollectionViewController_h */