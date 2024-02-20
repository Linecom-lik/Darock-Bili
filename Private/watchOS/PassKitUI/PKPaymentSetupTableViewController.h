//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupTableViewController_h
#define PKPaymentSetupTableViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKHyperlinkTextView.h"
#include "PKPaymentSetupDockView.h"
#include "PKPaymentSetupPresentationProtocol-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "_PKVisibilityBackdropView.h"
#include "_PKVisibilityBackdropViewDelegate-Protocol.h"

@class NSAttributedString, NSIndexPath, NSString, UITableView, UITableViewController, UIView;

@interface PKPaymentSetupTableViewController : UIViewController<_PKVisibilityBackdropViewDelegate, PKPaymentSetupPresentationProtocol, UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  UITableViewController *_tableViewController;
  UIView *_containerView;
  long long _style;
  _PKVisibilityBackdropView *_blurringView;
  double _backdropWeight;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
  BOOL _keyboardVisible;
}

@property (retain, nonatomic) PKHyperlinkTextView *footerTextView;
@property (nonatomic) long long context;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (copy, nonatomic) NSAttributedString *footerAttributedText;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (nonatomic) BOOL moveFooterWithKeyboard;
@property (readonly, copy, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(long long)context;
- (id)initWithStyle:(long long)style context:(long long)context;
- (void)dealloc;
- (void)loadView;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (unsigned long long)edgesForExtendedLayout;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)_keyboardWillShow:(id)show;
- (void)_keyboardWillChange:(id)change;
- (void)_keyboardWillHide:(id)hide;
- (void)_updateLayoutForKeyboardAction:(id /* block */)action;
- (id)addFooterStyleAttributes:(id)attributes;
- (void)tableViewDidFinishReload:(id)reload;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)visibilityBackdropView:(id)view preferredStyleForTraitCollection:(id)collection;
- (unsigned long long)paymentSetupMarker;
- (BOOL)paymentSetupMarkerRemovalIsInclusive;
@end

#endif /* PKPaymentSetupTableViewController_h */