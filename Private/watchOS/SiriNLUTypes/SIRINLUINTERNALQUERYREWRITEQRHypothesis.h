//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALQUERYREWRITEQRHypothesis_h
#define SIRINLUINTERNALQUERYREWRITEQRHypothesis_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALUUID.h"

@class NSString;

@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 confidence; unsigned int x :1 rewriteType; } _has;
}

@property (readonly, nonatomic) BOOL hasAsrId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) int rewriteType;

/* class methods */
+ (id)options;

/* instance methods */
- (id)rewriteTypeAsString:(int)string;
- (int)StringAsRewriteType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* SIRINLUINTERNALQUERYREWRITEQRHypothesis_h */