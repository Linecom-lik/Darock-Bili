//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef CAMSchemaCAMResponse_h
#define CAMSchemaCAMResponse_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface CAMSchemaCAMResponse : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 action; unsigned int x :1 responseStatusCode; } _has;
}

@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) unsigned int responseStatusCode;
@property (nonatomic) BOOL hasResponseStatusCode;
@property (copy, nonatomic) NSString *enforcer;
@property (nonatomic) BOOL hasEnforcer;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteAction;
- (void)deleteResponseStatusCode;
- (void)deleteEnforcer;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* CAMSchemaCAMResponse_h */