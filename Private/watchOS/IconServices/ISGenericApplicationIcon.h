//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISGenericApplicationIcon_h
#define ISGenericApplicationIcon_h
@import Foundation;

#include "ISTypeIcon.h"
#include "ISResourceProvider.h"

@interface ISGenericApplicationIcon : ISTypeIcon

@property (readonly) ISResourceProvider *resourceProvider;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)makeResourceProvider;
@end

#endif /* ISGenericApplicationIcon_h */