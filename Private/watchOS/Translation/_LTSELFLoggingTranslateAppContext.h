//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTSELFLoggingTranslateAppContext_h
#define _LTSELFLoggingTranslateAppContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_LTLocalePair.h"

@class NSUUID;

@interface _LTSELFLoggingTranslateAppContext : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long displayMode;
@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, nonatomic) BOOL isGenderAlternativeEnabled;
@property (readonly, nonatomic) long long tabName;
@property (readonly, copy, nonatomic) NSUUID *tabSessionId;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDisplayMode:(long long)mode localePair:(id)pair isGenderAlternativeEnabled:(BOOL)enabled tabName:(long long)name tabSessionId:(id)id;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _LTSELFLoggingTranslateAppContext_h */