//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterUnknownHelper_h
#define AVAssetWriterUnknownHelper_h
@import Foundation;

#include "AVAssetWriterHelper.h"

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
  /* instance variables */
  short _alternateGroupID;
}

/* instance methods */
- (id)initWithConfigurationState:(id)state;
- (id)initWithURL:(id)url fileType:(id)type;
- (void)setDefaultPropertyValuesToConfigurationState:(id)state outputURL:(id)url fileType:(id)type;
- (long long)status;
- (void)setDelegate:(id)delegate;
- (void)setMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval;
- (void)setInitialMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval;
- (void)setOverallDurationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })hint;
- (void)setShouldOptimizeForNetworkUse:(BOOL)use;
- (void)setDirectoryForTemporaryFiles:(id)files;
- (void)setMetadata:(id)metadata;
- (void)setMovieTimeScale:(int)scale;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setPreferredVolume:(float)volume;
- (void)setPreferredRate:(float)rate;
- (void)setPreferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval;
- (void)setInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)setOutputFileTypeProfile:(id)profile;
- (void)setInitialMovieFragmentSequenceNumber:(long long)number;
- (void)setProducesCombinableFragments:(BOOL)fragments;
- (void)setRequiresInProcessOperation:(BOOL)operation;
- (void)setSinglePassFileSize:(long long)size;
- (void)setSinglePassMediaDataSize:(long long)size;
- (BOOL)_canAddInput:(id)input exceptionReason:(id *)reason;
- (BOOL)canAddInput:(id)input;
- (void)addInput:(id)input;
- (BOOL)_canAddInputGroup:(id)group exceptionReason:(id *)reason;
- (BOOL)canAddInputGroup:(id)group;
- (void)addInputGroup:(id)group;
- (void)startWriting;
- (void)cancelWriting;
- (BOOL)_isDefunct;
@end

#endif /* AVAssetWriterUnknownHelper_h */