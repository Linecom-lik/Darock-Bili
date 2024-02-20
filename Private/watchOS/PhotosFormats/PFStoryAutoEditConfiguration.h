//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFStoryAutoEditConfiguration_h
#define PFStoryAutoEditConfiguration_h
@import Foundation;

#include "PFStoryMotionStyleTable-Protocol.h"
#include "PFStoryTransitionTable-Protocol.h"

@class NSDictionary, NSURL;

@interface PFStoryAutoEditConfiguration : NSObject {
  /* instance variables */
  NSDictionary *_durationTablesByPlaybackStyle;
  NSDictionary *_transitionDurationsByKind;
  NSDictionary *_clusteringPropertiesByCategory;
  NSDictionary *_overallDurationTable;
  NSDictionary *_outroDurations;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } minimumDurations;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } maximumDurations;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *defaultTransitionTable;
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *interMomentTransitionTable;
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *portraitTransitionTable;
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *nUpTransitionTable;
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *interModuleTransitionTable;
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *motionStyleTable;
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *diptychMotionStyleTable;
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *triptychMotionStyleTable;
@property (readonly, nonatomic) double diptychDurationMultiplier;
@property (readonly, nonatomic) double triptychDurationMultiplier;
@property (readonly, nonatomic) double initialDurationMultiplier;
@property (readonly, nonatomic) double chapterBeginDurationMultiplier;
@property (readonly, nonatomic) double finalDurationMultiplier;
@property (readonly, nonatomic) double slowVisualTempoTarget;
@property (readonly, nonatomic) double mediumVisualTempoTarget;
@property (readonly, nonatomic) double fastVisualTempoTarget;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } shortOverallDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } mediumOverallDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } longOverallDuration;
@property (readonly, nonatomic) double composabilityTargetDurationMultiplier;
@property (readonly, nonatomic) long long composabilityMinimum1UpRunCount;
@property (readonly, nonatomic) long long composabilityMinimumNUpCount;
@property (readonly, nonatomic) long long composabilityMaximumNUpRunCount;
@property (readonly, nonatomic) double composabilityScoreThreshold;

/* class methods */
+ (id)currentVersion;
+ (id)standardConfiguration;

/* instance methods */
- (id)init;
- (id)initWithConfigurationFileAtURL:(id)url;
- (id)initWithConfigurationData:(id)data;
- (id)initWithConfigurationDictionary:(id)dictionary;
- (id)_loadData:(id)data;
- (id)_arrayFromTable:(id)table count:(unsigned long long)count nameToValueMap:(id)map;
- (void)_loadClusteringPropertiesFromMemoryCategories:(id)categories;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })durationInfoForPlaybackStyle:(long long)style songPace:(long long)pace;
- (double)durationForTransitionKind:(long long)kind songPace:(long long)pace;
- (double)outroDurationForSongPace:(long long)pace;
- (id)clusteringPropertiesForMemoryCategoryName:(id)name;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })_overallDurationInfoForDurationKind:(long long)kind;
@end

#endif /* PFStoryAutoEditConfiguration_h */