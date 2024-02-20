//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIDataAccessStatusDomainData_h
#define STUIDataAccessStatusDomainData_h
@import Foundation;

#include "STStatusDomainData-Protocol.h"
#include "STUIDataAccessStatusDomainData.h"

@class NSArray, NSSet, NSString, STListData;

@interface STUIDataAccessStatusDomainData : NSObject<STStatusDomainData>

@property (readonly, copy, nonatomic) STListData *attributionListData;
@property (readonly, copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly, copy, nonatomic) NSSet *attributedEntities;
@property (readonly, copy, nonatomic) NSSet *executableIdentities;
@property (readonly, copy, nonatomic) NSSet *userIdentities;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *activeAttributionData;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)initWithAttributionListData:(id)data;
- (id)_initWithAttributionListData:(id)data;
- (id)dataWithEntitiesThatAreSystemServices:(BOOL)services;
- (id)dataWithAttributedEntity:(id)entity;
- (id)dataWithExecutableIdentity:(id)identity;
- (id)dataWithAccessType:(unsigned long long)type;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* STUIDataAccessStatusDomainData_h */