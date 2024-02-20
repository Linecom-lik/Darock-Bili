//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARecordLocationActivity_h
#define SARecordLocationActivity_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SALocation.h"

@class NSString;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *sourceType;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SARecordLocationActivity_h */