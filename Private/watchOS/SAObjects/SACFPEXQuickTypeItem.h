//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SACFPEXQuickTypeItem_h
#define SACFPEXQuickTypeItem_h
@import Foundation;

#include "SACFPEXItem.h"

@class NSArray, NSDate, NSString;

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *itemFlags;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originatingBundleId;
@property (copy, nonatomic) NSString *originatingWebsiteURL;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *value;

/* class methods */
+ (id)quickTypeItem;
+ (id)quickTypeItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SACFPEXQuickTypeItem_h */