//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationTombstone_h
#define NTKComplicationTombstone_h
@import Foundation;

#include "NTKComplication.h"
#include "NTKComplication.h"

@class NSString;

@interface NTKComplicationTombstone : NTKComplication {
  /* instance variables */
  NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) NTKComplication *complication;

/* class methods */
+ (id)tombstoneWithComplication:(id)complication;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_migrateToFamily:(long long)family withAllowedComplications:(id)complications;
- (id)description;
- (BOOL)supportsComplicationFamily:(long long)family forDevice:(id)device;
- (id)_generateUniqueIdentifier;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_addKeysToJSONDictionary:(id)jsondictionary;
- (id)uniqueIdentifier;
@end

#endif /* NTKComplicationTombstone_h */