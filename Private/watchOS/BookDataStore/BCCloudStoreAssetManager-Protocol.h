//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudStoreAssetManager_Protocol_h
#define BCCloudStoreAssetManager_Protocol_h
@import Foundation;

@protocol BCCloudStoreAssetManager <NSObject>
/* instance methods */
- (void)addStoreItem:(id)item completion:(id /* block */)completion;
- (void)addStoreItems:(id)items completion:(id /* block */)completion;
- (void)deleteStoreItemWithStoreID:(id)id completion:(id /* block */)completion;
- (void)deleteStoreItemsWithStoreIDs:(id)ids completion:(id /* block */)completion;
- (void)storeItemForStoreID:(id)id completion:(id /* block */)completion;
- (void)fetchStoreItemsIncludingDeleted:(BOOL)deleted completion:(id /* block */)completion;
- (void)getStoreItemChangesSince:(id)since completion:(id /* block */)completion;
@end

#endif /* BCCloudStoreAssetManager_Protocol_h */