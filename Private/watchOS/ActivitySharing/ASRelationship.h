//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASRelationship_h
#define ASRelationship_h
@import Foundation;

#include "ASCloudKitCodable-Protocol.h"
#include "ASCodableCloudKitRelationship.h"
#include "NSCopying-Protocol.h"

@class CKRecord, CKRecordID, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface ASRelationship : NSObject<ASCloudKitCodable, NSCopying>

@property (readonly, nonatomic) ASCodableCloudKitRelationship *codableRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFriendshipActive;
@property (nonatomic) BOOL isMuteEnabled;
@property (nonatomic) BOOL hasIncomingInviteRequest;
@property (nonatomic) BOOL hasOutgoingInviteRequest;
@property (nonatomic) BOOL isAwaitingInviteResponse;
@property (nonatomic) BOOL sentInviteResponse;
@property (nonatomic) BOOL hasIncomingCompetitionRequest;
@property (nonatomic) BOOL hasOutgoingCompetitionRequest;
@property (nonatomic) BOOL hasIgnoredCompetitionRequest;
@property (nonatomic) BOOL isCompetitionActive;
@property (nonatomic) BOOL isAwaitingCompetitionResponse;
@property (nonatomic) BOOL hasCompletedCompetition;
@property (retain, nonatomic) NSDate *dateForLatestIncomingInviteRequest;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (retain, nonatomic) NSDate *dateForLatestDataHidden;
@property (retain, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible;
@property (retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *incomingHandshakeToken;
@property (retain, nonatomic) NSString *outgoingHandshakeToken;
@property (retain, nonatomic) NSString *cloudKitAddress;
@property (retain, nonatomic) NSSet *addresses;
@property (retain, nonatomic) NSString *preferredReachableAddress;
@property (retain, nonatomic) NSString *preferredReachableService;
@property (retain, nonatomic) CKRecord *systemFieldsOnlyRecord;
@property (retain, nonatomic) CKRecordID *relationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteRelationshipShareID;
@property (retain, nonatomic) CKRecordID *remoteActivityDataShareID;
@property (copy, nonatomic) NSArray *relationshipEvents;
@property (nonatomic) unsigned int supportedPhoneFeatures;
@property (nonatomic) unsigned int supportedWatchFeatures;
@property (readonly, nonatomic) BOOL isActivityDataVisible;
@property (readonly, nonatomic) BOOL isHidingActivityData;
@property (readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
@property (readonly, nonatomic) unsigned long long currentRelationshipEventAnchor;

/* class methods */
+ (id)relationshipWithCodableRelationshipContainer:(id)container;
+ (void)_relationshipWithRecord:(id)record relationshipEventRecords:(id)records completion:(id /* block */)completion;
+ (id)relationshipWithCodableRelationship:(id)relationship version:(long long)version;
+ (id)relationshipsWithRelationshipAndEventRecords:(id)records;

/* instance methods */
- (id)codableRelationshipContainerIncludingCloudKitFields:(BOOL)fields;
- (id)recordWithRecordID:(id)id;
- (id)recordWithZoneID:(id)id;
- (id)populateRecord:(id)record;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRelationship:(id)relationship;
- (void)insertEventWithType:(unsigned short)type;
- (void)insertEventWithType:(unsigned short)type timestamp:(id)timestamp;
- (void)insertEvents:(id)events;
- (id)relationshipSnapshotForDate:(id)date;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(unsigned long long)anchor block:(id /* block */)block;
- (BOOL)supportsCompetitions;
- (void)_setRelationshipEvents:(id)events;
- (unsigned long long)_nextAnchor;
- (void)_clearRelationshipState;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)date;
- (void)_updateDateFriendshipBeganWithDate:(id)date;
- (void)_updateCurrentRelationshipState;
@end

#endif /* ASRelationship_h */