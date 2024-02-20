//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMonthDayCell_h
#define HKMonthDayCell_h
@import Foundation;

#include "HKCalendarDayCell.h"

@interface HKMonthDayCell : HKCalendarDayCell {
  /* instance variables */
  long long _dayOfWeek;
}

@property (readonly, nonatomic) long long circleState;

/* class methods */
+ (double)dayLabelFontSize;

/* instance methods */
- (id)initWithDateCache:(id)cache;
- (void)_updateFontAndCircle;
- (void)dealloc;
- (void)_setCircleState:(long long)state;
- (BOOL)_representsWeekendDay;
- (void)updateWithDate:(id)date dayOfMonth:(long long)month;
- (void)pressToTransition:(BOOL)transition;
- (void)setSelected:(BOOL)selected;
@end

#endif /* HKMonthDayCell_h */