//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.2.1.0.0
//
#ifndef CUIKSingleDayTimelineGeometryDelegate_Protocol_h
#define CUIKSingleDayTimelineGeometryDelegate_Protocol_h
@import Foundation;

@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } displayedRect;
@property (readonly, nonatomic) double hourHeight;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double timeWidth;
@property (readonly, nonatomic) BOOL originIsUpperLeft;

/* instance methods */
- (double)dateForPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })pointForDate:(double)date;
@optional
/* instance methods */
- (BOOL)shouldReverseLayoutDirection;
@end

#endif /* CUIKSingleDayTimelineGeometryDelegate_Protocol_h */