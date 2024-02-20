//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSPRMetroAvailabilityFetcher_h
#define GEOSPRMetroAvailabilityFetcher_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEOTileLoader.h"
#include "GEOVectorTile.h"

@class geo_isolater;

@interface GEOSPRMetroAvailabilityFetcher : NSObject {
  /* instance variables */
  GEOApplicationAuditToken *_auditToken;
  GEOTileLoader *_tileLoader;
  BOOL _forceDisableMetros;
  geo_isolater *_isolation;
  struct _GEOTileKey { unsigned int x :7 provider; unsigned int x :1 expires; union { struct _GEOStandardTileKey { unsigned int x :40 reserved; unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :14 type; unsigned int x :4 pixelSize; unsigned int x :4 textScale; } standard; struct _GEOGloriaQuadIDTileKey { unsigned int x :6 z; unsigned int x :64 quadKey; unsigned int x :14 type; unsigned int x :4 padding; union { struct { unsigned int x :10 mcc; unsigned int x :10 mnc; unsigned int x :12 padding; } cellularInfo; unsigned int unused; } typeSpecificInfo; } gloriaQuad; struct _GEORegionalResourceKey { unsigned int x :32 index; unsigned int x :8 scenarios; unsigned int x :6 type; unsigned int x :8 pixelSize; unsigned int x :8 textScale; unsigned int x :1 forceRefetch; unsigned int x :57 padding; } regional; struct _GEOSputnikMetadataKey { unsigned int x :32 part; unsigned int x :24 region; unsigned int x :14 type; unsigned int x :8 pixelSize; unsigned int x :42 padding; } sputnikMetadata; struct _GEOFlyoverKey { unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :8 h; unsigned int x :24 region; unsigned int x :14 type; unsigned int x :8 pixelSize; unsigned int x :8 textScale; } flyover; struct _GEOTransitLineSelectionKey { unsigned int x :6 z; unsigned int x :25 x; unsigned int x :25 y; unsigned int x :64 muid; } transitLineSelection; struct _GEOPolygonSelectionKey { unsigned int x :6 z; unsigned int x :25 x; unsigned int x :25 y; unsigned int x :64 polyId; } polygonSelection; struct _GEORoadSelectionKey { unsigned int x :6 z; unsigned int x :25 x; unsigned int x :25 y; unsigned int x :64 roadId; } roadSelection; struct _GEOContourLinesKey { unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :4 pixelSize; unsigned int x :8 units; unsigned int x :50 padding; } contourLines; struct _GEOTileOverlayKey { unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :8 contentScale; unsigned int x :32 providerId; unsigned int x :16 keyframeIndex; unsigned int x :6 padding; } tileOverlay; struct _GEOIdentifiedResourceKey { unsigned long long identifier; unsigned char levelOfDetail; unsigned char type; unsigned int x :1 supportsASTC; unsigned int x :39 padding; } identifiedResource; struct _GEOS2TileKey { unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :3 f; unsigned int x :14 type; unsigned int x :4 pixelSize; unsigned int x :4 textScale; unsigned int x :37 padding; } s2Tile; struct _GEOLiveTileKey { unsigned int x :6 z; unsigned int x :26 x; unsigned int x :26 y; unsigned int x :14 type; unsigned int x :4 pixelSize; unsigned int x :4 textScale; unsigned int x :4 domain; unsigned int x :36 padding; } liveTile; } x0; } _lastLoadedKey;
  GEOVectorTile *_lastLoadedTile;
}

/* instance methods */
- (id)init;
- (id)initWithTileLoader:(id)loader auditToken:(id)token;
- (id)initWithTileLoader:(id)loader auditToken:(id)token forceDisableMetros:(BOOL)metros;
- (void)determineAvailabilityForCoordinate:(struct { double x0; double x1; })coordinate callbackQueue:(id)queue completionHandler:(id /* block */)handler;
@end

#endif /* GEOSPRMetroAvailabilityFetcher_h */