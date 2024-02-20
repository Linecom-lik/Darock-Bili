//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASFIAPItem_h
#define ASFIAPItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface ASFIAPItem : NSObject<NSCopying>

@property (readonly) NSDate *originalPurchaseDate;
@property (readonly) NSString *originalTransactionID;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *productID;
@property (readonly) NSNumber *quantity;
@property (readonly) NSString *transactionID;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ASFIAPItem_h */