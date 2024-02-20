//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef DODMLSchemaDODMLClientEventMetadata_h
#define DODMLSchemaDODMLClientEventMetadata_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaUUID.h"

@class NSData, NSString;

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 trialDeploymentId; } _has;
}

@property (retain, nonatomic) SISchemaUUID *dodMlId;
@property (nonatomic) BOOL hasDodMlId;
@property (copy, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasExperimentName;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (nonatomic) BOOL hasTrialExperimentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) BOOL hasTrialTreatmentId;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteDodMlId;
- (void)deleteExperimentName;
- (void)deleteTrialExperimentId;
- (void)deleteTrialTreatmentId;
- (void)deleteTrialDeploymentId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* DODMLSchemaDODMLClientEventMetadata_h */