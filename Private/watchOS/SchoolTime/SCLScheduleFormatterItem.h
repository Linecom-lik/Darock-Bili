//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLScheduleFormatterItem_h
#define SCLScheduleFormatterItem_h
@import Foundation;

@class NSArray, NSCalendar;

@interface SCLScheduleFormatterItem : NSObject {
  /* instance variables */
  long long _days;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *timeIntervals;

/* instance methods */
- (id)initWithCalendar:(id)calendar timeIntervals:(id)intervals;
- (void)addDay:(long long)day;
- (long long)days;
- (long long)earliestWeekdayInCalendar;
- (id)dayRanges;
@end

#endif /* SCLScheduleFormatterItem_h */