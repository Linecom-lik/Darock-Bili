//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKPercentageDisplayTypeValueFormatter_h
#define HKPercentageDisplayTypeValueFormatter_h
@import Foundation;

#include "HKQuantityDisplayTypeValueFormatter.h"

@interface HKPercentageDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter
/* instance methods */
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font;
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart;
- (id)attributedStringFromValue:(id)value displayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font formatForChart:(BOOL)chart unitFormatString:(id)string;
- (id)stringFromValue:(id)value displayType:(id)type unitController:(id)controller;
@end

#endif /* HKPercentageDisplayTypeValueFormatter_h */