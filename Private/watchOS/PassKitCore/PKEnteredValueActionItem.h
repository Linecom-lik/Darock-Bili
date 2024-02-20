//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEnteredValueActionItem_h
#define PKEnteredValueActionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDecimalNumber, NSDictionary, NSString;

@interface PKEnteredValueActionItem : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (readonly, copy, nonatomic) NSArray *lowBalanceReminderOptions;
@property (readonly, nonatomic) BOOL maxAmountIncludesLocalBalance;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;
@property (readonly, copy, nonatomic) NSDecimalNumber *minAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxAmount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (void)_processLocalizableStrings:(id /* block */)strings;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKEnteredValueActionItem_h */