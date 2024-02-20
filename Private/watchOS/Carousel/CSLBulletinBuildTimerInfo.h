//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinBuildTimerInfo_h
#define CSLBulletinBuildTimerInfo_h
@import Foundation;

#include "CSLBulletinBuildItem.h"

@class NSDate;

@interface CSLBulletinBuildTimerInfo : NSObject

@property (retain, nonatomic) NSDate *fireDate;
@property (weak, nonatomic) CSLBulletinBuildItem *buildItem;
@property (copy) id /* block */ handler;

/* instance methods */
- (id)description;
@end

#endif /* CSLBulletinBuildTimerInfo_h */