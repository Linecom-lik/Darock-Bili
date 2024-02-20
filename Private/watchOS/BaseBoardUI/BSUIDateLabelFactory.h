//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSUIDateLabelFactory_h
#define BSUIDateLabelFactory_h
@import Foundation;

@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject {
  /* instance variables */
  NSMutableDictionary *_recycledLabelsByStyle;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)startLabelWithStartDate:(id)date endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(long long)style;
- (id)endLabelWithStartDate:(id)date endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(long long)style;
- (id)combinedDateLabelWithStartDate:(id)date endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(long long)style;
- (void)recycleLabel:(id)label;
- (long long)styleForLabel:(id)label;
- (void)_purgeRecycledLabels;
@end

#endif /* BSUIDateLabelFactory_h */