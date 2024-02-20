//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITreeDataSourceSnapshotter_Protocol_h
#define _UITreeDataSourceSnapshotter_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UITreeDataSourceSnapshotter-Protocol.h"

@class NSMutableIndexSet;
@protocol {vector<_UIOutlineNode, std::allocator<_UIOutlineNode>>="__begin_"^{_UIOutlineNode}"__end_"^{_UIOutlineNode}"__end_cap_"{__compressed_pair<_UIOutlineNode *, std::allocator<_UIOutlineNode>>="__value_"^{_UIOutlineNode}}};

@protocol _UITreeDataSourceSnapshotter 
/* instance methods */
- (long long)count;
- (id)rootIndexes;
- (id)expandedIndexes;
- (id)visibleIndexes;
- (BOOL)isFlat;
- (long long)levelForIndex:(long long)index;
- (id)indexesForLevel:(long long)level;
- (long long)parentForChildAtIndex:(long long)index;
- (id)childrenForParentAtIndex:(long long)index;
- (id)childrenForParentAtIndex:(long long)index recursive:(BOOL)recursive;
- (BOOL)indexIsVisible:(long long)visible;
- (BOOL)indexIsExpanded:(long long)expanded;
- (BOOL)hasChildrenForParentAtIndex:(long long)index;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)index;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)index includingParent:(BOOL)parent;
- (id)visualDescription;
@end

#endif /* _UITreeDataSourceSnapshotter_Protocol_h */