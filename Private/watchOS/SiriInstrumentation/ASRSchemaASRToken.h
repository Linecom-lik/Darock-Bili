//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef ASRSchemaASRToken_h
#define ASRSchemaASRToken_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface ASRSchemaASRToken : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 linkIndex; unsigned int x :1 startTimeInNs; unsigned int x :1 endTimeInNs; unsigned int x :1 appendSpaceAfter; unsigned int x :1 silenceStartTimeInNs; unsigned int x :1 confidence; unsigned int x :1 isAutoPunctuation; unsigned int x :1 isModifiedByAutoPunctuation; unsigned int x :1 graphCost; unsigned int x :1 acousticCost; } _has;
}

@property (nonatomic) unsigned int linkIndex;
@property (nonatomic) BOOL hasLinkIndex;
@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL appendSpaceAfter;
@property (nonatomic) BOOL hasAppendSpaceAfter;
@property (nonatomic) unsigned long long silenceStartTimeInNs;
@property (nonatomic) BOOL hasSilenceStartTimeInNs;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasConfidence;
@property (copy, nonatomic) NSString *punctuationText;
@property (nonatomic) BOOL hasPunctuationText;
@property (nonatomic) BOOL isAutoPunctuation;
@property (nonatomic) BOOL hasIsAutoPunctuation;
@property (nonatomic) BOOL isModifiedByAutoPunctuation;
@property (nonatomic) BOOL hasIsModifiedByAutoPunctuation;
@property (nonatomic) double graphCost;
@property (nonatomic) BOOL hasGraphCost;
@property (nonatomic) double acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteLinkIndex;
- (void)deleteStartTimeInNs;
- (void)deleteEndTimeInNs;
- (void)deleteAppendSpaceAfter;
- (void)deleteSilenceStartTimeInNs;
- (void)deleteConfidence;
- (void)deletePunctuationText;
- (void)deleteIsAutoPunctuation;
- (void)deleteIsModifiedByAutoPunctuation;
- (void)deleteGraphCost;
- (void)deleteAcousticCost;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* ASRSchemaASRToken_h */