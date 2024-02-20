//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSectionTableViewController_h
#define PKSectionTableViewController_h
@import Foundation;

#include "UITableViewController.h"

@interface PKSectionTableViewController : UITableViewController {
  /* instance variables */
  unsigned long long _numberOfSections;
  struct { unsigned long long numberOfSections; unsigned long long *indexToSection; unsigned long long *sectionToIndex; } _currentMap;
  struct { unsigned long long numberOfSections; unsigned long long *indexToSection; unsigned long long *sectionToIndex; } _bufferedMap;
}

@property (nonatomic) BOOL skipSetupForReadableContentGuide;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithStyle:(long long)style;
- (id)initWithStyle:(long long)style numberOfSections:(unsigned long long)sections;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)recomputeMappedSectionsAndReloadSections:(id)sections;
- (BOOL)reloadData;
- (void)reloadSections:(id)sections;
- (void)reloadSection:(unsigned long long)section;
- (void)reloadRow:(long long)row inSection:(unsigned long long)section;
- (void)reloadRows:(id)rows inSection:(unsigned long long)section;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)section;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)sections;
- (void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
- (BOOL)isSectionMapped:(unsigned long long)mapped;
- (unsigned long long)indexForSection:(unsigned long long)section;
- (unsigned long long)sectionForIndex:(unsigned long long)index;
- (unsigned long long)numberOfMappedSections;
- (BOOL)isMappingValid;
- (void)_swapBuffers;
- (BOOL)_recomputeMappedSections;
- (long long)rowAnimationForInsertingSection:(unsigned long long)section;
- (long long)rowAnimationForReloadingSection:(unsigned long long)section;
- (long long)rowAnimationForDeletingSection:(unsigned long long)section;
- (BOOL)shouldMapSection:(unsigned long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
@end

#endif /* PKSectionTableViewController_h */