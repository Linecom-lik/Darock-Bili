//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCIssueRecordSource_h
#define FCIssueRecordSource_h
@import Foundation;

#include "FCRecordSource.h"

@interface FCIssueRecordSource : FCRecordSource
/* class methods */
+ (BOOL)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)key inRecord:(id)record;

/* instance methods */
- (id)recordType;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefixes;
- (id)recordFromCKRecord:(id)ckrecord base:(id)base;
@end

#endif /* FCIssueRecordSource_h */