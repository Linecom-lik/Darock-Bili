//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPXPCTopicStore_h
#define PPXPCTopicStore_h
@import Foundation;

#include "PPTopicStore.h"
#include "PPClientFeedbackHelper.h"

@interface PPXPCTopicStore : PPTopicStore {
  /* instance variables */
  PPClientFeedbackHelper *_clientFeedbackHelper;
}

/* instance methods */
- (id)_init;
- (BOOL)iterRankedTopicsWithQuery:(id)query error:(id *)error block:(id /* block */)block;
- (id)rankedTopicsWithQuery:(id)query error:(id *)error;
- (BOOL)iterScoresForTopicMapping:(id)mapping query:(id)query error:(id *)error block:(id /* block */)block;
- (id)scoresForTopicMapping:(id)mapping query:(id)query error:(id *)error;
- (BOOL)iterTopicRecordsWithQuery:(id)query error:(id *)error block:(id /* block */)block;
- (id)topicRecordsWithQuery:(id)query error:(id *)error;
- (id)topicExtractionsFromText:(id)text error:(id *)error;
- (id)unmapMappedTopicIdentifier:(id)identifier mappingIdentifier:(id)identifier error:(id *)error;
- (BOOL)donateTopics:(id)topics source:(id)source algorithm:(unsigned long long)algorithm cloudSync:(BOOL)sync sentimentScore:(double)score exactMatchesInSourceText:(id)text error:(id *)error;
- (BOOL)deleteAllTopicsWithTopicId:(id)id deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)id documentIds:(id)ids deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)id groupIds:(id)ids deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)id deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)cloudSyncWithError:(id *)error;
- (BOOL)clearWithError:(id *)error deletedCount:(unsigned long long *)count;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
- (id)clientIdentifier;
- (void)setClientIdentifier:(id)identifier;
- (void)registerUniversalSearchSpotlightFeedback:(id)feedback completion:(id /* block */)completion;
- (BOOL)computeAndCacheTopicScores:(id *)scores;
- (id)topicCacheSandboxExtensionToken:(id *)token;
- (id)cachePath:(id *)path;
@end

#endif /* PPXPCTopicStore_h */