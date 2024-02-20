//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardCameraSessionRTIConfiguration_h
#define UIKeyboardCameraSessionRTIConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface UIKeyboardCameraSessionRTIConfiguration : NSObject<NSSecureCoding>

@property (nonatomic) BOOL isWebKitInteractionView;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL shouldSuppressKeyboard;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* UIKeyboardCameraSessionRTIConfiguration_h */