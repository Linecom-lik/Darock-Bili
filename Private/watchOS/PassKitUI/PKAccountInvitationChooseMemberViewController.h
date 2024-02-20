//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountInvitationChooseMemberViewController_h
#define PKAccountInvitationChooseMemberViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKAccountInvitationController.h"
#include "PKAccountInvitationControllerObserver-Protocol.h"
#include "PKDeviceSharingCapabilitiesManagerObserver-Protocol.h"
#include "PKPaymentSetupDockView.h"
#include "PKTableHeaderView.h"
#include "PKTableViewDiffableDataSource.h"
#include "PKViewControllerPreflightable-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "UITableViewDelegatePrivate-Protocol.h"
#include "_PKVisibilityBackdropView.h"
#include "_PKVisibilityBackdropViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSNumberFormatter, NSPersonNameComponentsFormatter, NSString, PKOSVersionRequirementRange, UITableView;

@interface PKAccountInvitationChooseMemberViewController : UIViewController<UITableViewDelegate, UITableViewDelegatePrivate, _PKVisibilityBackdropViewDelegate, PKDeviceSharingCapabilitiesManagerObserver, PKAccountInvitationControllerObserver, PKViewControllerPreflightable> {
  /* instance variables */
  PKAccountInvitationController *_controller;
  NSDictionary *_familyMemberPhotosByAltDSID;
  NSDictionary *_pendingFamilyMemberImagesByEmail;
  NSPersonNameComponentsFormatter *_nameFormatter;
  NSNumberFormatter *_ageFormatter;
  PKTableHeaderView *_headerView;
  UITableView *_tableView;
  double _previousHeaderHeight;
  NSIndexPath *_loadingInvitationIndexPath;
  NSArray *_totalFamilyMembers;
  NSArray *_pendingFamilyMembers;
  PKOSVersionRequirementRange *_requiredOSVersionRange;
  long long _minimumParticipantAge;
  NSNumberFormatter *_maximumAccountUsersFormatter;
  PKTableViewDiffableDataSource *_diffableDataSource;
  PKPaymentSetupDockView *_dockView;
  _PKVisibilityBackdropView *_blurringView;
  double _backdropWeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)deviceSharingCapabilitiesUpdated:(id)updated newSharingCapabilties:(id)capabilties forAppleID:(id)id;
- (void)deviceSharingCapabilitiesUpdated:(id)updated maximumPossibleDevices:(long long)devices forAppleID:(id)id;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (void)tableViewDidFinishReload:(id)reload;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)didUpdateInvitationControllerFamilyCircle;
- (void)_updateHeaderFooterText;
- (void)_setLoadingIndexPath:(id)path;
- (void)_reportAnalyticsViewDidAppear:(BOOL)appear;
- (void)_handleAddPersonTapped;
- (void)_openFamilyMemberSettings;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)_updateSnapshotAnimated:(BOOL)animated;
- (void)_filterAvailableFamilyMembersFromMembers:(id)members;
- (void)_reloadFamilyCollectionWithForceReload:(BOOL)reload completion:(id /* block */)completion;
- (long long)visibilityBackdropView:(id)view preferredStyleForTraitCollection:(id)collection;
@end

#endif /* PKAccountInvitationChooseMemberViewController_h */