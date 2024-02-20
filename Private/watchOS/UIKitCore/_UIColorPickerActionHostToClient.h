//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIColorPickerActionHostToClient_h
#define _UIColorPickerActionHostToClient_h
@import Foundation;

#include "_UISceneHostingActionHostToClient.h"

@interface _UIColorPickerActionHostToClient : _UISceneHostingActionHostToClient
/* class methods */
+ (id)actionForSelectedColor:(id)color withColorSpace:(id)space;
+ (id)actionForConfiguration:(id)configuration;

/* instance methods */
- (void)performActionForHostedWindowScene:(id)scene;
@end

#endif /* _UIColorPickerActionHostToClient_h */