//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSCloudClient_h
#define HSCloudClient_h
@import Foundation;

#include "HSCloudAvailability-Protocol.h"

@class ICCloudClient, ICConnectionConfiguration, NSString;

@interface HSCloudClient : NSObject<HSCloudAvailability> {
  /* instance variables */
  BOOL _active;
  ICConnectionConfiguration *_configuration;
  unsigned long long _daemonConfiguration;
  long long _preferredVideoQuality;
  ICCloudClient *_icCloudClient;
}

@property (copy, nonatomic) id /* block */ updateInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ updateSagaInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ updateJaliscoInProgressChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (void)createPlaylistWithPersistentID:(long long)id properties:(id)properties trackList:(id)list completionHandler:(id /* block */)handler;
- (void)sdk_createPlaylistWithPersistentID:(long long)id properties:(id)properties tracklist:(id)tracklist completionHandler:(id /* block */)handler;
- (void)setPlaylistProperties:(id)properties trackList:(id)list forPlaylistPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)addStoreItemWithAdamID:(long long)id toPlaylistWithPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)addItemWithSagaID:(long long)id toPlaylistWithPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)sdk_addStoreItemWithOpaqueID:(id)id toPlaylistWithPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)publishPlaylistWithSagaID:(long long)id completionHandler:(id /* block */)handler;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)ids ignoreMinRefreshInterval:(BOOL)interval completionHandler:(id /* block */)handler;
- (void)addStoreItemWithAdamID:(long long)id completionHandler:(id /* block */)handler;
- (void)sdk_addStoreItemWithOpaqueID:(id)id completionHandler:(id /* block */)handler;
- (void)addStorePlaylistWithGlobalID:(id)id completionHandler:(id /* block */)handler;
- (void)removePlaylistsWithSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)removeItemsWithSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)hideItemsWithPurchaseHistoryIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)addGeniusPlaylistWithPersistentID:(long long)id name:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)authenticateWithCompletionHandler:(id /* block */)handler;
- (void)authenticateAndStartInitialImport:(BOOL)import completionHandler:(id /* block */)handler;
- (void)becomeActive;
- (void)updateJaliscoLibraryWithReason:(long long)reason completionHandler:(id /* block */)handler;
- (void)removeJaliscoLibraryWithCompletionHander:(id /* block */)hander;
- (BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)library;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)handler;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)handler;
- (void)updateSagaLibraryWithReason:(long long)reason completionHandler:(id /* block */)handler;
- (void)deauthenticateWithCompletionHandler:(id /* block */)handler;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)handler;
- (void)isAuthenticatedWithQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id /* block */)hander;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)importItemArtworkForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)importScreenshotForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)importContainerArtworkForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)importSubscriptionScreenshotForPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)importArtistHeroImageForPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)id;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)id;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)id;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)id;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)id;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)id;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)id;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)id;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)id;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)id;
- (void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForContainerSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForContainerSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForSagaIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadGeniusItemsForSagaID:(unsigned long long)id completionHandler:(id /* block */)handler;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)handler;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(id /* block */)handler;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id /* block */)handler;
- (void)loadSagaUpdateProgressWithCompletionHandler:(id /* block */)handler;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(id /* block */)handler;
- (void)resetConfiguration:(id)configuration;
- (void)resignActive;
- (void)setDaemonConfiguration:(unsigned long long)configuration;
- (void)setPreferredVideoQuality:(long long)quality;
- (void)setItemProperties:(id)properties forPurchaseHistoryID:(unsigned long long)id;
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)id;
- (void)uploadItemProperties;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;
- (void)setAlbumProperties:(id)properties forAlbumPersistentID:(long long)id completionHandler:(id /* block */)handler;
- (void)updateArtistHeroImages;
- (void)loadBooksForStoreIDs:(id)ids withCompletionHandler:(id /* block */)handler;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)_serverSagaUpdateInProgressDidChange;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (id)_ICCloudItemIDListFromHSCloudItemIDList:(id)idlist;
- (id)_ICConnectionConfigurationFromHSConnectionConfiguration:(id)configuration;
@end

#endif /* HSCloudClient_h */