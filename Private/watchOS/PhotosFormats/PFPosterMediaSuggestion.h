//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFPosterMediaSuggestion_h
#define PFPosterMediaSuggestion_h
@import Foundation;

#include "PFPosterMedia.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PFPosterMediaSuggestion : PFPosterMedia<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *suggestionUUID;
@property (nonatomic) unsigned short suggestionSubtype;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAssetUUID:(id)uuid suggestionUUID:(id)uuid suggestionSubtype:(unsigned short)subtype;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PFPosterMediaSuggestion_h */