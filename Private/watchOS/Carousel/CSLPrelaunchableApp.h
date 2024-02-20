//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPrelaunchableApp_h
#define CSLPrelaunchableApp_h
@import Foundation;

@class NSDate, NSString;

@interface CSLPrelaunchableApp : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *prelaunchDate;
@property (readonly, nonatomic) BOOL firstPrelaunch;

/* instance methods */
- (id)initWithBundleID:(id)id prelaunchDate:(id)date firstPrelaunch:(BOOL)prelaunch;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* CSLPrelaunchableApp_h */