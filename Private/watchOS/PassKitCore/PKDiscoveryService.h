//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryService_h
#define PKDiscoveryService_h
@import Foundation;

#include "PKDiscoveryServiceExportedInterface-Protocol.h"
#include "PKXPCService.h"

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface PKDiscoveryService : NSObject<PKDiscoveryServiceExportedInterface> {
  /* instance variables */
  PKXPCService *_remoteService;
  NSObject<OS_dispatch_queue> *_replyQueue;
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id /* block */)errorHandlerForMethod:(SEL)method completion:(id /* block */)completion;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)discoveryArticleLayoutsWithCompletion:(id /* block */)completion;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)updateDiscoveryManifestWithCompletion:(id /* block */)completion;
- (void)manifestAllowsMiniCardsWithCompletion:(id /* block */)completion;
- (void)updateDiscoveryItemWithIdentifier:(id)identifier forAction:(long long)action completion:(id /* block */)completion;
- (void)discoveryItemsWithCompletion:(id /* block */)completion;
- (void)insertDiscoveryItems:(id)items discoveryArticleLayouts:(id)layouts completion:(id /* block */)completion;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)identifier;
- (void)displayedDiscoveryItemWithIdentifier:(id)identifier isWelcomeCard:(BOOL)card afterSwipingToCard:(BOOL)card multipleStoryCardsAvailable:(BOOL)available callToAction:(long long)action cardSize:(long long)size;
- (void)expandedDiscoveryItemWithIdentifier:(id)identifier callToAction:(long long)action afterSwipingToCard:(BOOL)card multipleStoryCardsAvailable:(BOOL)available cardSize:(long long)size;
- (void)dismissedDiscoveryItemWithIdentifier:(id)identifier callToAction:(long long)action cardSize:(long long)size;
- (void)removedAllDiscoveryItems;
- (void)tappedDiscoveryItemWithIdentifier:(id)identifier callToAction:(long long)action cardSize:(long long)size;
- (void)completedDiscoveryItemCTAWithCompletion:(id /* block */)completion;
- (void)discoveryItemWithIdentifier:(id)identifier launchedWithReferralSource:(unsigned long long)source;
- (void)discoveryItemWithIdentifier:(id)identifier callToAction:(long long)action isScrollable:(BOOL)scrollable;
- (void)discoveryItemWithIdentifier:(id)identifier callToAction:(long long)action wasScrolledToTheBottom:(BOOL)bottom;
- (void)beginReporingDiscoveryAnalytics;
- (void)endReporingDiscoveryAnalytics;
- (long long)welcomeCardCount;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)observers;
- (void)discoveryArticleLayoutsUpdated:(id)updated;
- (void)completedCTAForItem:(id)item;
- (void)dialogRequestsChangedForPlacement:(id)placement;
- (void)discoveryEngagementMessagesUpdated;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(id /* block */)completion;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)identifier active:(unsigned long long)active completion:(id /* block */)completion;
- (void)dialogRequestsForPlacement:(id)placement completion:(id /* block */)completion;
- (void)dismissDialogRequestWithIdentifier:(id)identifier forPlacement:(id)placement completion:(id /* block */)completion;
- (void)dismissedDiscoveryItems:(id /* block */)items;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)identifier forAction:(long long)action completion:(id /* block */)completion;
- (void)insertDiscoveryEngagementMessages:(id)messages completion:(id /* block */)completion;
- (void)removeDiscoveryMessageWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)rulesWithCompletion:(id /* block */)completion;
- (void)insertRule:(id)rule completion:(id /* block */)completion;
- (void)deleteRuleWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)evaluateRulesWithIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)removeDiscoveryUserNotificationsWithCompletion:(id /* block */)completion;
- (void)fireEngagementEventNamed:(id)named completion:(id /* block */)completion;
- (void)fetchUserProperties:(id)properties withParameters:(id)parameters completion:(id /* block */)completion;
@end

#endif /* PKDiscoveryService_h */