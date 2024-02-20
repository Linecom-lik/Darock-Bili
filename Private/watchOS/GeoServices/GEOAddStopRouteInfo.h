//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAddStopRouteInfo_h
#define GEOAddStopRouteInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEORouteAttributes.h"
#include "NSCopying-Protocol.h"

@class NSData, PBDataReader, PBUnknownFields;

@interface GEOAddStopRouteInfo : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_originalWaypointRouteRepresentation; unsigned int x :1 read_routeAttributes; unsigned int x :1 read_routeId; unsigned int x :1 read_sessionState; unsigned int x :1 read_zilchData; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginalWaypointRouteRepresentation;
@property (retain, nonatomic) NSData *originalWaypointRouteRepresentation;
@property (readonly, nonatomic) BOOL hasZilchData;
@property (retain, nonatomic) NSData *zilchData;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) BOOL hasRouteId;
@property (retain, nonatomic) NSData *routeId;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOAddStopRouteInfo_h */