//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVRawSpeechProfileEntityMetadata_h
#define CKVRawSpeechProfileEntityMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class KVPriorInfo, NSString;

@interface CKVRawSpeechProfileEntityMetadata : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long categoryIndex;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) KVPriorInfo *priorInfo;

/* instance methods */
- (id)initWithCategoryIndex:(unsigned long long)index itemId:(id)id priorInfo:(id)info;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRawSpeechProfileEntityMetadata:(id)metadata;
- (unsigned long long)hash;
@end

#endif /* CKVRawSpeechProfileEntityMetadata_h */