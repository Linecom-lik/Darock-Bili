//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAxisLabelDataSource_Protocol_h
#define HKAxisLabelDataSource_Protocol_h
@import Foundation;

@protocol HKAxisLabelDataSource <NSObject>
/* instance methods */
- (id)cacheKeysForModelRange:(id)range zoomScale:(double)scale;
- (id)findAxisLabelsInModelRange:(id)range zoomScale:(double)scale;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)location rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect zoomScale:(double)scale contentOffset:(struct CGPoint { double x0; double x1; })offset constantOffset:(double)offset isHorizontal:(BOOL)horizontal optionalOffset:(struct CGPoint { double x0; double x1; })offset;
@end

#endif /* HKAxisLabelDataSource_Protocol_h */