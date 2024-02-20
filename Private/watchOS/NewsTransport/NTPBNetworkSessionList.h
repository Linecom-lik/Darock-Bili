//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBNetworkSessionList_h
#define NTPBNetworkSessionList_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

/* class methods */
+ (Class)networkSessionsType;
+ (Class)networkEventsType;

/* instance methods */
- (void)dealloc;
- (void)clearNetworkSessions;
- (void)addNetworkSessions:(id)sessions;
- (unsigned long long)networkSessionsCount;
- (id)networkSessionsAtIndex:(unsigned long long)index;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:(id)events;
- (unsigned long long)networkEventsCount;
- (id)networkEventsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBNetworkSessionList_h */