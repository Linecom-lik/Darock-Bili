//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupFieldPickerItem_h
#define PKPaymentSetupFieldPickerItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKPaymentSetupFieldPicker.h"

@class NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationTitle;
@property (readonly, copy, nonatomic) NSString *submissionConfirmationDescription;
@property (readonly, copy, nonatomic) PKPaymentSetupFieldPicker *nextLevelPicker;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithName:(id)name value:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKPaymentSetupFieldPickerItem_h */