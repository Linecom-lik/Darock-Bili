//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutSolveResult_h
#define _UICollectionLayoutSolveResult_h
@import Foundation;

@class NSMutableDictionary, NSMutableIndexSet;

@interface _UICollectionLayoutSolveResult : NSObject {
  /* instance variables */
  NSMutableIndexSet *_invalidatedIndexes;
  NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}

/* instance methods */
- (id)init;
@end

#endif /* _UICollectionLayoutSolveResult_h */