//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSpeechToken_h
#define AFSpeechToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface AFSpeechToken : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL removeSpaceAfter;
@property (copy, nonatomic) NSNumber *graphCost;
@property (copy, nonatomic) NSNumber *acousticCost;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)aceToken;
- (id)dictionaryRepresentation;
@end

#endif /* AFSpeechToken_h */