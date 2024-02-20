//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFileSystemImportAsset_h
#define PLFileSystemImportAsset_h
@import Foundation;

#include "PLAlbumProtocol-Protocol.h"
#include "PLAssetJournalEntryPayload.h"
#include "PLLockedResourceTransferRecovery.h"

@class NSMutableSet, NSSet, NSString, NSURL;

@interface PLFileSystemImportAsset : NSObject {
  /* instance variables */
  NSString *_path;
  BOOL _pathContainsDCIM;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic) int assetKind;
@property (readonly, nonatomic) NSSet *urls;
@property (readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload;
@property (readonly, nonatomic) BOOL isInterruptedLockedResourceTransfer;
@property (readonly, nonatomic) NSURL *lockedResourceTransferMarkerFileURL;
@property (retain, nonatomic) PLLockedResourceTransferRecovery *lockedResourceTransferRecovery;

/* instance methods */
- (id)initWithDestinationAlbum:(id)album assetKind:(int)kind;
- (id)initWithAssetPayload:(id)payload;
- (BOOL)isCameraKit;
- (long long)compare:(id)compare;
- (id)description;
- (void)addURL:(id)url;
- (void)addURLs:(id)urls;
@end

#endif /* PLFileSystemImportAsset_h */