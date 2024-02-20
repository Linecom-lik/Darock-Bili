//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOBatchTileRequester_h
#define GEOBatchTileRequester_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEOBatchTileRequesterDelegate-Protocol.h"
#include "GEOTileKeyList.h"
#include "GEOTileKeyMap.h"
#include "GEOTileRequesterDelegate-Protocol.h"

@class NSError, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface GEOBatchTileRequester : NSObject<GEOTileRequesterDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_isolationQueue;
  NSObject<OS_os_log> *_log;
  NSString *_logPrefix;
  NSObject<OS_dispatch_group> *_preparationGroup;
  NSString *_regionCode;
  BOOL _canceled;
  BOOL _paused;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
  NSMutableDictionary *_activeRequesters;
  GEOTileKeyList *_remainingKeysForActiveRequesters;
  id /* block */ _tileRequesterCreationBlock;
  GEOApplicationAuditToken *_auditToken;
  GEOTileKeyMap *_currentStaleETags;
  GEOTileKeyMap *_currentStaleData;
  unsigned long long _requestOptions;
  NSError *_firstError;
}

@property (readonly) unsigned char reason;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *region;
@property (weak, nonatomic) NSObject<GEOBatchTileRequesterDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) unsigned long long numberOfTilesConsidered;
@property (readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property (readonly, nonatomic) unsigned long long successfulTiles;
@property (readonly, nonatomic) unsigned long long failedTiles;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;

/* instance methods */
- (void)determineNextBatchWithQueue:(id)queue callback:(id /* block */)callback;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; } *)tile downloadSize:(unsigned long long)size httpStatus:(unsigned int)status;
- (void)downloadDidFailForTile:(struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; } *)tile error:(id)error;
- (void)didFinishWithError:(id)error;
- (id)init;
- (id)initWithCountryCode:(id)code region:(id)region auditToken:(id)token requestOptions:(unsigned long long)options log:(id)log logPrefix:(id)prefix tileRequesterCreationBlock:(id /* block */)block;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)_finish;
- (BOOL)cancelKey:(const struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; } *)key;
- (void)_requestNextBatch;
- (void)_startRequesterForKeys:(id)keys staleCachedETags:(id)etags staleCachedData:(id)data;
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned int)edition tileSetDB:(union { unsigned int x0; struct { unsigned int x0 :8; union { struct { unsigned int x0 :14; unsigned int x1 :4; unsigned int x2 :4; unsigned int x3 :2; } x0; struct { unsigned int x0 :8; unsigned int x1 :16; } x1; } x1; } x1; })db tileSet:(id)set etag:(id)etag forKey:(struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; })key userInfo:(id)info;
- (void)tileRequester:(id)requester receivedError:(id)error forKey:(struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; })key;
- (void)tileRequesterFinished:(id)finished;
@end

#endif /* GEOBatchTileRequester_h */