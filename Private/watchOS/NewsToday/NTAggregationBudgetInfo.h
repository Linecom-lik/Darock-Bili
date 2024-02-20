//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTAggregationBudgetInfo_h
#define NTAggregationBudgetInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject<NSCopying>

@property (copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic) BOOL respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) BOOL allowSectionTitles;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NTAggregationBudgetInfo_h */