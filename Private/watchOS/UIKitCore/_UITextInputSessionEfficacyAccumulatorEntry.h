//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInputSessionEfficacyAccumulatorEntry_h
#define _UITextInputSessionEfficacyAccumulatorEntry_h
@import Foundation;

@interface _UITextInputSessionEfficacyAccumulatorEntry : NSObject

@property long long netCharacters;
@property long long userRemovedCharacters;
@property long long netEmojiCharacters;
@property long long userRemovedEmojiCharacters;
@property long long inputActions;

/* class methods */
+ (id)generateAccumulatorEntryFromAction:(id)action;

/* instance methods */
- (void)increaseWithEntry:(id)entry;
- (BOOL)isAllZeroes;
@end

#endif /* _UITextInputSessionEfficacyAccumulatorEntry_h */