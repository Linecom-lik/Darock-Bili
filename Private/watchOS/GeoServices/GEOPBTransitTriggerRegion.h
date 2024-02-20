//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPBTransitTriggerRegion_h
#define GEOPBTransitTriggerRegion_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPBTransitTriggerRegion : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_delaySeconds; unsigned int x :1 has_signalStrength; unsigned int x :1 has_transition; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasTransition;
@property (nonatomic) int transition;
@property (nonatomic) BOOL hasSignalStrength;
@property (nonatomic) int signalStrength;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) unsigned int delaySeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)transitionAsString:(int)string;
- (int)StringAsTransition:(id)transition;
- (id)signalStrengthAsString:(int)string;
- (int)StringAsSignalStrength:(id)strength;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPBTransitTriggerRegion_h */