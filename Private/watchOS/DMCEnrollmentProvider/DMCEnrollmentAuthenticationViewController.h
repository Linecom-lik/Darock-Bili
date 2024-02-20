//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCEnrollmentAuthenticationViewController_h
#define DMCEnrollmentAuthenticationViewController_h
@import Foundation;

#include "DMCEnrollmentTemplateTableViewController.h"
#include "DMCDismissalAwareViewController-Protocol.h"
#include "DMCEnrollmentAuthenticationViewControllerDelegate-Protocol.h"
#include "DMCEnrollmentConfirmationView.h"
#include "DMCEnrollmentLinkLabelView.h"
#include "DMCEnrollmentTableViewTextFieldCell.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface DMCEnrollmentAuthenticationViewController : DMCEnrollmentTemplateTableViewController<UITextFieldDelegate, DMCDismissalAwareViewController>

@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *usernameCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTextFieldCell *passwordCell;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long userInputSection;
@property (nonatomic) BOOL isDisplayingPasswordCell;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *bottomViewText;
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;
@property (retain, nonatomic) DMCEnrollmentLinkLabelView *bottomLinkView;
@property (weak, nonatomic) NSObject<DMCEnrollmentAuthenticationViewControllerDelegate> *delegate;
@property (nonatomic) BOOL usernameEditable;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewControllerHasBeenDismissed;
- (void)_setupNavigationBar;
- (void)updateContinueButtonStatus;
- (void)setBottomText:(id)text;
- (void)setInProgress:(BOOL)progress;
- (void)showPasswordField:(BOOL)field;
- (void)leftBarButtonTapped:(id)tapped;
- (void)continueButtonTapped;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)textFieldDidChange:(id)change;
- (BOOL)isUsernameEditable;
@end

#endif /* DMCEnrollmentAuthenticationViewController_h */