//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableSource_h
#define HDCodableSource_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSyncIdentity.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableSource : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 modificationDate; unsigned int x :1 options; unsigned int x :1 deleted; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) long long options;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasOwningAppBundleIdentifier;
@property (retain, nonatomic) NSString *owningAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

/* instance methods */
- (id)decodedUUID;
- (id)decodedModificationDate;
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

#endif /* HDCodableSource_h */