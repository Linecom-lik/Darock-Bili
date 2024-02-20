//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCreatePlaylistAction_h
#define WFCreatePlaylistAction_h
@import Foundation;

#include "WFAction.h"

@interface WFCreatePlaylistAction : WFAction
/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
@end

#endif /* WFCreatePlaylistAction_h */