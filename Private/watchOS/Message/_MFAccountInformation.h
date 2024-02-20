//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFAccountInformation_h
#define _MFAccountInformation_h
@import Foundation;

#include "DeliveryAccount.h"
#include "MailAccount.h"

@class NSDictionary;

@interface _MFAccountInformation : NSObject

@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (retain, nonatomic) NSDictionary *localizedNotes;

/* instance methods */
@end

#endif /* _MFAccountInformation_h */