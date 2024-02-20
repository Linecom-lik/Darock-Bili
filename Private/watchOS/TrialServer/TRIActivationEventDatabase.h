//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIActivationEventDatabase_h
#define TRIActivationEventDatabase_h
@import Foundation;

#include "TRIDatabase.h"

@interface TRIActivationEventDatabase : NSObject {
  /* instance variables */
  TRIDatabase *_db;
}

/* instance methods */
- (id)init;
- (id)initWithDatabase:(id)database;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (struct { unsigned long long x0; })addRecordWithParentId:(id)id factorPackSetId:(id)id deploymentId:(int)id osBuild:(id)build languageCode:(id)code regionCode:(id)code carrierBundleId:(id)id carrierCountryCode:(id)code diagnosticsUsageEnabled:(BOOL)enabled hasAne:(BOOL)ane aneVersion:(id)version transaction:(id)transaction;
- (id)activationEventRecordWithParentId:(id)id factorPackSetId:(id)id deploymentId:(int)id;
- (struct { unsigned long long x0; })deleteRecordWithParentId:(id)id factorPackSetId:(id)id deploymentId:(int)id;
@end

#endif /* TRIActivationEventDatabase_h */