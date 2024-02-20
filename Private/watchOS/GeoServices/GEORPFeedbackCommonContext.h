//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPFeedbackCommonContext_h
#define GEORPFeedbackCommonContext_h
@import Foundation;

#include "PBCodable.h"
#include "GEOABAssignmentResponse.h"
#include "GEORPCurrentEnvironmentManifestURLs.h"
#include "GEORPMapLocation.h"
#include "GEORPNavigationSettings.h"
#include "GEORPSearchCommonContext.h"
#include "GEORPSourceInfo.h"
#include "GEORPUserPath.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonContext : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_clientCreatedAt; unsigned int x :1 has_originatingAuxiliaryControlIndex; unsigned int x :1 has_deviceGmtOffset; unsigned int x :1 has_pinType; unsigned int x :1 has_isSprMap; unsigned int x :1 read_unknownFields; unsigned int x :1 read_userPaths; unsigned int x :1 read_auxiliaryControls; unsigned int x :1 read_combinedUserPath; unsigned int x :1 read_currentAbAssignmentResponse; unsigned int x :1 read_currentEnvironmentManifestUrls; unsigned int x :1 read_mapLocation; unsigned int x :1 read_navigationSettings; unsigned int x :1 read_searchCommon; unsigned int x :1 read_sourceInfo; unsigned int x :1 read_visibleTileSets; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasPinType;
@property (nonatomic) int pinType;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) NSMutableArray *visibleTileSets;
@property (readonly, nonatomic) unsigned long long userPathsCount;
@property (readonly, nonatomic) int * userPaths;
@property (nonatomic) BOOL hasClientCreatedAt;
@property (nonatomic) double clientCreatedAt;
@property (retain, nonatomic) NSMutableArray *auxiliaryControls;
@property (nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;
@property (nonatomic) BOOL hasDeviceGmtOffset;
@property (nonatomic) int deviceGmtOffset;
@property (readonly, nonatomic) BOOL hasCurrentEnvironmentManifestUrls;
@property (retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (readonly, nonatomic) BOOL hasNavigationSettings;
@property (retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property (readonly, nonatomic) BOOL hasSourceInfo;
@property (retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property (readonly, nonatomic) BOOL hasSearchCommon;
@property (retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property (readonly, nonatomic) BOOL hasCurrentAbAssignmentResponse;
@property (retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (nonatomic) BOOL hasIsSprMap;
@property (nonatomic) BOOL isSprMap;
@property (readonly, nonatomic) BOOL hasCombinedUserPath;
@property (retain, nonatomic) GEORPUserPath *combinedUserPath;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)visibleTileSetType;
+ (Class)auxiliaryControlType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)recordEnvironmentAndManifestURLs;
- (void)_recordCurrentEnvironment:(id)environment;
- (void)_recordManifestURLs:(id)urls;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)pinTypeAsString:(int)string;
- (int)StringAsPinType:(id)type;
- (void)clearVisibleTileSets;
- (void)addVisibleTileSet:(id)set;
- (unsigned long long)visibleTileSetsCount;
- (id)visibleTileSetAtIndex:(unsigned long long)index;
- (void)clearUserPaths;
- (void)addUserPath:(int)path;
- (int)userPathAtIndex:(unsigned long long)index;
- (void)setUserPaths:(int *)paths count:(unsigned long long)count;
- (id)userPathsAsString:(int)string;
- (int)StringAsUserPaths:(id)paths;
- (void)clearAuxiliaryControls;
- (void)addAuxiliaryControl:(id)control;
- (unsigned long long)auxiliaryControlsCount;
- (id)auxiliaryControlAtIndex:(unsigned long long)index;
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

#endif /* GEORPFeedbackCommonContext_h */