//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef _SFAnalyzerClientInfo_h
#define _SFAnalyzerClientInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface _SFAnalyzerClientInfo : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionId;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithID:(id)id applicationName:(id)name source:(id)source inputOrigin:(id)origin dictationUIInteractionId:(id)id;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _SFAnalyzerClientInfo_h */