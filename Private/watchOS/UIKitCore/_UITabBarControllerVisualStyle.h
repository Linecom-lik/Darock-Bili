//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITabBarControllerVisualStyle_h
#define _UITabBarControllerVisualStyle_h
@import Foundation;

#include "UITabBarController.h"

@interface _UITabBarControllerVisualStyle : NSObject

@property (readonly, weak, nonatomic) UITabBarController *tabBarController;

/* instance methods */
- (id)initWithTabBarController:(id)controller;
- (void)prepare;
- (void)teardown;
- (void)loadViews;
- (long long)tabBarPosition;
- (void)updateViewControllers:(BOOL)controllers;
- (unsigned long long)defaultMaxItems;
- (BOOL)transitionFromViewController:(id)controller toViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)updateConstraints;
@end

#endif /* _UITabBarControllerVisualStyle_h */