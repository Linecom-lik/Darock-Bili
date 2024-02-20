//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNCoreMutableDelegateInfo_h
#define CNCoreMutableDelegateInfo_h
@import Foundation;

#include "CNCoreDelegateInfo.h"

@class NSNumber, NSPersonNameComponents, NSString;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *principalPath;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL isMe;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CNCoreMutableDelegateInfo_h */