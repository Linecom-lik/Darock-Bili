//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDiffableSectionBoundaryMoveDetector_h
#define _UIDiffableSectionBoundaryMoveDetector_h
@import Foundation;

#include "_UIDiffableDataSourceState-Protocol.h"
#include "_UIIdentifierDiffer-Protocol.h"

@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {
  /* instance variables */
  NSObject<_UIIdentifierDiffer> *_differ;
  NSObject<_UIDiffableDataSourceState> *_beforeState;
  NSObject<_UIDiffableDataSourceState> *_afterState;
}

@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL didShortCircuit;

/* instance methods */
- (id)initWithItemDiffer:(id)differ beforeDataSourceState:(id)state afterDataSourceState:(id)state;
- (id)_computeMovePairsFoundation;
@end

#endif /* _UIDiffableSectionBoundaryMoveDetector_h */