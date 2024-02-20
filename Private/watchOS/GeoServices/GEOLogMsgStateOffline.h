//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateOffline_h
#define GEOLogMsgStateOffline_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgStateOffline : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_routingOdsVersion; unsigned int x :1 has_searchOdsVersion; unsigned int x :1 has_numberOfDownloadedRegions; unsigned int x :1 has_isMapsInOfflineMode; unsigned int x :1 has_isNetworkConnected; unsigned int x :1 has_isOnlyUseOffline; } _flags;
}

@property (nonatomic) BOOL hasIsMapsInOfflineMode;
@property (nonatomic) BOOL isMapsInOfflineMode;
@property (nonatomic) BOOL hasIsNetworkConnected;
@property (nonatomic) BOOL isNetworkConnected;
@property (nonatomic) BOOL hasIsOnlyUseOffline;
@property (nonatomic) BOOL isOnlyUseOffline;
@property (nonatomic) BOOL hasNumberOfDownloadedRegions;
@property (nonatomic) unsigned int numberOfDownloadedRegions;
@property (nonatomic) BOOL hasSearchOdsVersion;
@property (nonatomic) unsigned long long searchOdsVersion;
@property (nonatomic) BOOL hasRoutingOdsVersion;
@property (nonatomic) unsigned long long routingOdsVersion;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
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
@end

#endif /* GEOLogMsgStateOffline_h */