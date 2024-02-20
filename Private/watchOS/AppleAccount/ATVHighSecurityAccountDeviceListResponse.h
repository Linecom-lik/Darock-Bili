//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef ATVHighSecurityAccountDeviceListResponse_h
#define ATVHighSecurityAccountDeviceListResponse_h
@import Foundation;

#include "AAResponse.h"

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSDictionary *userDisplayStrings;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) long long errorCode;

@end

#endif /* ATVHighSecurityAccountDeviceListResponse_h */