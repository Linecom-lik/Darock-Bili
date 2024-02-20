//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLCacheIndexDatabaseFileInfoEnumerator_h
#define QLCacheIndexDatabaseFileInfoEnumerator_h
@import Foundation;

#include "QLCacheIndexDatabaseGenericEnumerator.h"

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {
  /* instance variables */
  BOOL _extraInfo;
  BOOL _ubiquitous;
  QLCacheVersionedFileIdentifier *_fileIdentifier;
}

/* instance methods */
- (id)initWithSqliteDatabase:(id)database toEnumerateUbiquitousFiles:(BOOL)files extraInfo:(BOOL)info;
- (BOOL)nextFileWithCacheId:(unsigned long long *)id versionedFileIdentifier:(id *)identifier thumbnailCount:(unsigned int *)count minSize:(float *)size maxSize:(float *)size totalDataLength:(unsigned long long *)length;
@end

#endif /* QLCacheIndexDatabaseFileInfoEnumerator_h */