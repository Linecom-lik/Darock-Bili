//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICModalPresentationObserverContainer_h
#define PUICModalPresentationObserverContainer_h
@import Foundation;

#include "PUICPageViewController.h"

@interface PUICModalPresentationObserverContainer : NSObject

@property (weak, nonatomic) PUICPageViewController *observer;
@property (nonatomic) long long modalLevel;

/* instance methods */
@end

#endif /* PUICModalPresentationObserverContainer_h */