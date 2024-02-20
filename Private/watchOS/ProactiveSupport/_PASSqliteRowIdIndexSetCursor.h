//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqliteRowIdIndexSetCursor_h
#define _PASSqliteRowIdIndexSetCursor_h
@import Foundation;

#include "_PASSqliteRowIdCursor.h"

@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {
  /* instance variables */
  unsigned long long _currentIndex;
  NSIndexSet *_indexSet;
  BOOL _isDescending;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

/* class methods */
+ (id)planningInfoForRowIdConstraint:(int)constraint;
+ (BOOL)canOrderByRowId:(BOOL)id;
+ (double)costFactorForRandomAccess;

/* instance methods */
- (id)init;
- (void)setIndexSet:(id)set;
- (void)matchNoRows;
- (void)matchOneRow:(unsigned long long)row;
- (unsigned long long)currentIndexedRowId;
- (void)stepIndexedRow;
- (void)applyRowIdConstraint:(int)constraint withArgument:(id)argument;
- (void)applyRowIdSort:(BOOL)sort;
- (void)finalizeConstraints;
@end

#endif /* _PASSqliteRowIdIndexSetCursor_h */