//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultWithOwnersAndGroupsBase_h
#define MCMResultWithOwnersAndGroupsBase_h
@import Foundation;

#include "MCMResultBase.h"
#include "MCMError.h"
#include "MCMResultWithOwnersAndGroups-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface MCMResultWithOwnersAndGroupsBase : MCMResultBase<MCMResultWithOwnersAndGroups> {
  /* instance variables */
  NSMutableArray *_mutableOwnerIdentifiers;
  NSMutableArray *_mutableGroupIdentifiers;
  NSMutableSet *_facts;
}

@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (readonly, nonatomic) NSArray *groupIdentifiers;
@property (readonly, @dynamic, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addOwner:(id)owner group:(id)group;
- (BOOL)encodeResultOntoReply:(id)reply;
- (id)init;
@end

#endif /* MCMResultWithOwnersAndGroupsBase_h */