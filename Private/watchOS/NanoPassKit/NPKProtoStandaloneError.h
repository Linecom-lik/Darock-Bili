//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoStandaloneError_h
#define NPKProtoStandaloneError_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NPKProtoStandaloneError : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSMutableArray *userInfos;

/* class methods */
+ (Class)userInfosType;

/* instance methods */
- (void)clearUserInfos;
- (void)addUserInfos:(id)infos;
- (unsigned long long)userInfosCount;
- (id)userInfosAtIndex:(unsigned long long)index;
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

#endif /* NPKProtoStandaloneError_h */