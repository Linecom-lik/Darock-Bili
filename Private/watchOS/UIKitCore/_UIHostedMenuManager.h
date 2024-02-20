//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHostedMenuManager_h
#define _UIHostedMenuManager_h
@import Foundation;

#include "UIMenu.h"

@interface _UIHostedMenuManager : NSObject

@property (copy, nonatomic) UIMenu *rootMenu;
@property (retain, nonatomic) UIMenu *displayedMenu;

/* instance methods */
- (id)menuLeafForIdentifier:(id)identifier;
- (id)menuForIdentifier:(id)identifier;
- (id)_menuLeafForIdentifier:(id)identifier menu:(id)menu;
- (id)_menuForIdentifier:(id)identifier menu:(id)menu;
@end

#endif /* _UIHostedMenuManager_h */