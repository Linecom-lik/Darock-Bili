//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNLPRRuleMatcher_h
#define MNLPRRuleMatcher_h
@import Foundation;

#include "_MNLPRPlate.h"

@class GEOLPRVehicle, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSTimeZone;

@interface MNLPRRuleMatcher : NSObject {
  /* instance variables */
  GEOLPRVehicle *_vehicle;
  NSArray *_ruleSets;
  unsigned long long _signpost;
  _MNLPRPlate *_lastPlate;
  NSDate *_lastDate;
  NSTimeZone *_lastTimeZone;
  NSDictionary *_usedRegions;
  NSMutableDictionary *_usedRegionETAs;
}

/* instance methods */
- (id)initForVehicle:(id)vehicle withRules:(id)rules;
- (id)generateMaskedPlateForWaypoints:(id)waypoints date:(id)date timeZone:(id)zone error:(id *)error;
- (id)debug_jsonDescriptionOfLastPlate;
@end

#endif /* MNLPRRuleMatcher_h */