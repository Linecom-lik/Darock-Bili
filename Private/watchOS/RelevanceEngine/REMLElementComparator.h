//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REMLElementComparator_h
#define REMLElementComparator_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "REMLModel.h"

@class NSArray;

@interface REMLElementComparator : NSObject<NSCopying> {
  /* instance variables */
  REMLModel *_model;
}

@property (copy, nonatomic) NSArray *filteringRules;
@property (copy, nonatomic) NSArray *rankingRules;
@property (readonly, nonatomic) unsigned long long comparisonLevels;

/* class methods */
+ (id)comparatorWithFilteringRules:(id)rules rankingRules:(id)rules model:(id)model;

/* instance methods */
- (id)initWithModel:(id)model;
- (id)model;
- (BOOL)shouldHideElement:(id)element;
- (long long)compareElement:(id)element toElement:(id)element level:(unsigned long long)level;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REMLElementComparator_h */