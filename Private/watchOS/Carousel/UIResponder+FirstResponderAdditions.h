//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef UIResponder_FirstResponderAdditions_h
#define UIResponder_FirstResponderAdditions_h
@import Foundation;

@interface UIResponder (FirstResponderAdditions)
/* instance methods */
- (void)CSL_becomeFirstResponderIfNotAlreadyInResponderChain;
- (void)CSL_logResponderSelector:(SEL)selector withResult:(int)result logType:(unsigned char)type;
- (void)_CSL_logResponderSelector:(SEL)selector withResult:(int)result logType:(unsigned char)type infoString:(id)string;
@end

#endif /* UIResponder_FirstResponderAdditions_h */