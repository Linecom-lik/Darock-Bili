//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 648.2.0.0.0
//
#ifndef NCSCalendarSettingsViewController_h
#define NCSCalendarSettingsViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "PUICListCollectionViewLayoutDelegate-Protocol.h"
#include "PUICQuickboardControllerDelegate-Protocol.h"

@class CalendarModel, EKCalendar, NSArray, NSString, PUICSwitch;

@interface NCSCalendarSettingsViewController : PUICListCollectionViewController<PUICQuickboardControllerDelegate, PUICListCollectionViewLayoutDelegate>

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) CalendarModel *calModel;
@property (retain, nonatomic) PUICSwitch *showSwitch;
@property (retain, nonatomic) PUICSwitch *alertSwitch;
@property (retain, nonatomic) NSArray *sharees;
@property (retain, nonatomic) PUICSwitch *showSharedChangesSwitch;
@property (nonatomic) long long selectedColorIndex;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCalendar:(id)calendar model:(id)model;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)_sectionsForCalendar:(id)calendar;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)_getColorIndexForColor:(id)color;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)_deselectedCalendars;
- (id)_dequeuePlatterDetailCellForCollectionView:(id)view atIndexPath:(id)path;
- (id)_dequeueRadioSelectionCellForCollectionView:(id)view atIndexPath:(id)path;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)titleForHeaderInSection:(long long)section;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)_deleteClicked;
- (void)_deleteCalendar;
- (void)quickboardController:(id)controller textInputValueDidChange:(id)change;
- (BOOL)collectionView:(id)view layout:(id)layout isRadioSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout heightForHeaderInSection:(long long)section;
@end

#endif /* NCSCalendarSettingsViewController_h */