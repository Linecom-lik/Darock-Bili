//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetProxy_h
#define AVAssetProxy_h
@import Foundation;

#include "AVAsset.h"
#include "AVAssetProxyInternal.h"

@interface AVAssetProxy : AVAsset {
  /* instance variables */
  AVAssetProxyInternal *_assetProxy;
}

/* class methods */
+ (id)makePropertyListForMovieProxyHeader:(id)header name:(id)name prefersNominalDurations:(BOOL)durations;
+ (id)assetProxyWithPropertyList:(id)list;

/* instance methods */
- (id)initWithPropertyList:(id)list;
- (void)dealloc;
- (BOOL)isProxy;
- (struct OpaqueFigAsset *)_figAsset;
- (struct OpaqueFigFormatReader *)_copyFormatReader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (Class)_classForTrackInspectors;
- (id)tracks;
@end

#endif /* AVAssetProxy_h */