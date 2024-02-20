//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKGraphViewSeriesGroup_h
#define _HKGraphViewSeriesGroup_h
@import Foundation;

#include "HKLegendView.h"
#include "_HKGraphViewAxisAnnotationHandler.h"
#include "_HKGraphViewSelectionContext.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _HKGraphViewSeriesGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *zoomToSeriesMapping;
@property (retain, nonatomic) NSMutableArray *currentSeries;
@property (retain, nonatomic) _HKGraphViewSelectionContext *selectionContext;
@property (retain, nonatomic) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler;
@property (retain, nonatomic) NSArray *independentAxes;
@property (retain, nonatomic) HKLegendView *legendView;
@property (nonatomic) struct CGSize { double x0; double x1; } lastLegendSize;

/* instance methods */
- (id)init;
@end

#endif /* _HKGraphViewSeriesGroup_h */