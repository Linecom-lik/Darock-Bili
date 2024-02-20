//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTSpeechTranslationAssetInfo_h
#define _LTSpeechTranslationAssetInfo_h
@import Foundation;

#include "_LTDAssetModel.h"
#include "_LTDOfflineConfigurationModel.h"
#include "_LTOfflineAssetManager.h"

@class NSArray, _LTLocalePair;

@interface _LTSpeechTranslationAssetInfo : NSObject {
  /* instance variables */
  _LTOfflineAssetManager *_assetManager;
  _LTLocalePair *_localePair;
  _LTDOfflineConfigurationModel *_offlineConfig;
  _LTDAssetModel *_sourceASRModel;
  _LTDAssetModel *_targetASRModel;
  NSArray *_allAssets;
  NSArray *_mtAssets;
  NSArray *_missingAssets;
  NSArray *_missingMTAssets;
  BOOL _needsUpdate;
  NSArray *_modelURLs;
}

/* class methods */
+ (id)_languagePairDirectoryForLocalePair:(id)pair;
+ (void)_createSymlinkDirectoryForLocalePair:(id)pair assets:(id)assets;

/* instance methods */
- (id)description;
- (id)initWithInstalledAssets:(id)assets catalogAssets:(id)assets localePair:(id)pair offlineConfig:(id)config assetManager:(id)manager;
- (void)createSymlinkDirectoryForMTAssets;
- (void)_referenceAssets:(id)assets catalogAssets:(id)assets;
- (BOOL)updateAvailableInAssets:(id)assets;
- (id)speechModelURLForLocale:(id)locale;
- (id)speechModelVersionForLocale:(id)locale;
- (id)translationModelURLs;
- (BOOL)isCompletePassthroughModel;
- (BOOL)isCompleteBidirectionalModel;
- (long long)_mtModelOfflineState;
- (id)availabilityInfo;
- (BOOL)_validateSymlinksForAssets:(id)assets;
- (void)downloadAssetsUserInitiated:(BOOL)initiated queue:(id)queue completion:(id /* block */)completion;
- (void)purgeAssetUserInitiated:(BOOL)initiated queue:(id)queue completion:(id /* block */)completion;
@end

#endif /* _LTSpeechTranslationAssetInfo_h */