//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICIAMSynchronizeMessagesResponse_h
#define ICIAMSynchronizeMessagesResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

/* class methods */
+ (Class)applicationMessageSyncResponsesType;

/* instance methods */
- (void)clearApplicationMessageSyncResponses;
- (void)addApplicationMessageSyncResponses:(id)responses;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)index;
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

#endif /* ICIAMSynchronizeMessagesResponse_h */