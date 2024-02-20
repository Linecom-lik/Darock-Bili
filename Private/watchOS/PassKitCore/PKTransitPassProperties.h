//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransitPassProperties_h
#define PKTransitPassProperties_h
@import Foundation;

#include "PKStoredValuePassProperties.h"
#include "PKFelicaPassProperties.h"

@class NSDate, NSDecimalNumber, NSString;

@interface PKTransitPassProperties : PKStoredValuePassProperties

@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (readonly, @dynamic, nonatomic) BOOL blacklisted;
@property (readonly, copy, @dynamic, nonatomic) NSDate *expirationDate;
@property (readonly, @dynamic, nonatomic) BOOL blocked;
@property (readonly, @dynamic, nonatomic) BOOL inStation;

@end

#endif /* PKTransitPassProperties_h */