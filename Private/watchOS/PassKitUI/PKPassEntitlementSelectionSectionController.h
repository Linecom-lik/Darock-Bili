//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassEntitlementSelectionSectionController_h
#define PKPassEntitlementSelectionSectionController_h
@import Foundation;

#include "PKPassShareSectionController.h"
#include "PKPassEntitlementSelectionSectionControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, PKPassEntitlementsComposer;

@interface PKPassEntitlementSelectionSectionController : PKPassShareSectionController {
  /* instance variables */
  unsigned long long _mode;
  NSArray *_shareableEntitlements;
  NSMutableDictionary *_selectedEntitlements;
  unsigned long long _maxEntitlementSelectionCount;
  NSDictionary *_groupedEntitlements;
  NSMutableDictionary *_toggleTags;
  PKPassEntitlementsComposer *_entitlementComposer;
}

@property (weak, nonatomic) NSObject<PKPassEntitlementSelectionSectionControllerDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithMode:(unsigned long long)mode entitlementComposer:(id)composer maxEntitlementSelectionCount:(unsigned long long)count delegate:(id)delegate;
- (void)_updateEntitlementGroups;
- (id)decorateListCell:(id)cell forEntitlementEntry:(id)entry;
- (void)toggleValueChanged:(id)changed;
- (void)didSelectItem:(id)item;
- (void)_clearEntitlementSelectionInGroup:(id)group animated:(BOOL)animated;
- (void)_clearEntitlementSelectionAnimated:(BOOL)animated;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (BOOL)shouldHighlightItem:(id)item;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
@end

#endif /* PKPassEntitlementSelectionSectionController_h */