//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusHardwareKeyboardObserver_h
#define _UIFocusHardwareKeyboardObserver_h
@import Foundation;

#include "_UIFocusStateObserver.h"

@interface _UIFocusHardwareKeyboardObserver : _UIFocusStateObserver
/* instance methods */
- (void)_hardwareKeyboardAvailabilityChanged:(id)changed;
- (id)init;
- (void)dealloc;
- (BOOL)isActive;
@end

#endif /* _UIFocusHardwareKeyboardObserver_h */