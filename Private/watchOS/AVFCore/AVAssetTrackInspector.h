//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetTrackInspector_h
#define AVAssetTrackInspector_h
@import Foundation;

#include "AVFigObjectInspector.h"
#include "AVAsynchronousKeyValueLoading-Protocol.h"
#include "AVDispatchOnce.h"
#include "AVWeakReference.h"

@class NSArray, NSDictionary, NSLocale, NSString;

@interface AVAssetTrackInspector : AVFigObjectInspector<AVAsynchronousKeyValueLoading> {
  /* instance variables */
  AVWeakReference *_weakReference;
  AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
  NSArray *_cachedMediaCharacteristics;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) unsigned int figMediaType;
@property (readonly, nonatomic) struct OpaqueFigTrackReader * figTrackReader;
@property (readonly, nonatomic) struct OpaqueFigAssetTrack * figAssetTrack;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (readonly, nonatomic) BOOL playable;
@property (readonly, nonatomic) BOOL decodable;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL selfContained;
@property (readonly, nonatomic) long long totalSampleDataLength;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaPresentationTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } mediaDecodeTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } latentBaseDecodeTimeStampOfFirstTrackFragment;
@property (readonly, nonatomic) BOOL requiresFrameReordering;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) float estimatedDataRate;
@property (readonly, nonatomic) float peakDataRate;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSArray *mediaCharacteristics;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) BOOL hasAudioSampleDependencies;
@property (readonly, nonatomic) NSDictionary *loudnessInfo;
@property (readonly, nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minSampleDuration;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) long long alternateGroupID;
@property (readonly, nonatomic) long long defaultAlternateGroupID;
@property (readonly, nonatomic) long long provisionalAlternateGroupID;
@property (readonly, nonatomic) BOOL excludedFromAutoselectionInTrackGroup;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) BOOL hasAudibleBooksContent;
@property (readonly, nonatomic) BOOL isAudibleBooksContentAuthorized;
@property (readonly, nonatomic) BOOL hasSeamSamples;
@property (readonly, nonatomic) int playabilityValidationResult;
@property (readonly, nonatomic) BOOL segmentsExcludeAudioPrimingAndRemainderDurations;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } gaplessSourceTimeRange;
@property (readonly, copy, nonatomic) NSArray *segmentsAsPresented;
@property (readonly, nonatomic) BOOL canProvideSampleCursors;
@property (readonly, nonatomic) BOOL defunct;

/* class methods */
+ (id)assetTrackInspectorWithAsset:(id)asset trackID:(int)id trackIndex:(long long)index;

/* instance methods */
- (id)_initWithAsset:(id)asset trackID:(int)id trackIndex:(long long)index;
- (id)_initWithAsset:(id)asset trackID:(int)id;
- (id)_initWithAsset:(id)asset trackIndex:(long long)index;
- (id)init;
- (id)_weakReference;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)statusOfValueForKey:(id)key error:(id *)error;
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id /* block */)handler;
- (unsigned int)_figMediaType;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (BOOL)isPlayable;
- (BOOL)isDecodable;
- (BOOL)isEnabled;
- (BOOL)isSelfContained;
- (id)_segmentsForSegmentData:(id)data;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)metadataForFormat:(id)format;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)_trackReferences;
- (id)makeSampleCursorWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp;
- (id)makeSampleCursorAtFirstSampleInDecodeOrder;
- (id)makeSampleCursorAtLastSampleInDecodeOrder;
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)accuracy;
- (BOOL)_isDefunct;
@end

#endif /* AVAssetTrackInspector_h */