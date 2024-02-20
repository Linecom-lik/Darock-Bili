//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSelectMusicAction_h
#define WFSelectMusicAction_h
@import Foundation;

#include "WFAction.h"

@interface WFSelectMusicAction : WFAction

@property (readonly, nonatomic) BOOL selectMultiple;

/* class methods */
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

/* instance methods */
- (void)runWithRemoteUserInterface:(id)interface input:(id)input;
- (id)disabledOnPlatforms;
@end

#endif /* WFSelectMusicAction_h */