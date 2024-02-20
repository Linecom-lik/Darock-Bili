//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBBulletin_h
#define BLTPBBulletin_h
@import Foundation;

#include "PBCodable.h"
#include "BLTPBAction.h"
#include "BLTPBCommunicationContext.h"
#include "BLTPBSectionIcon.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface BLTPBBulletin : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 date; unsigned int x :1 publicationDate; unsigned int x :1 requiredExpirationDate; unsigned int x :1 soundAudioVolume; unsigned int x :1 soundMaximumDuration; unsigned int x :1 attachmentType; unsigned int x :1 interruptionLevel; unsigned int x :1 sectionSubtype; unsigned int x :1 soundAlertType; unsigned int x :1 containsUpdateIcon; unsigned int x :1 containsUpdatedAttachment; unsigned int x :1 hasCriticalIcon; unsigned int x :1 hasSubordinateIcon; unsigned int x :1 ignoresQuietMode; unsigned int x :1 loading; unsigned int x :1 preemptsPresentedAlert; unsigned int x :1 soundShouldIgnoreRingerSwitch; unsigned int x :1 soundShouldRepeat; unsigned int x :1 suppressDelayForForwardedBulletins; unsigned int x :1 turnsOnDisplay; } _has;
}

@property (readonly, nonatomic) BOOL hasBulletinID;
@property (retain, nonatomic) NSString *bulletinID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) BOOL hasSectionDisplayName;
@property (retain, nonatomic) NSString *sectionDisplayName;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasMessageTitle;
@property (retain, nonatomic) NSString *messageTitle;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasAttachment;
@property (retain, nonatomic) NSData *attachment;
@property (retain, nonatomic) NSMutableArray *supplementaryActions;
@property (nonatomic) unsigned int feed;
@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (retain, nonatomic) BLTPBAction *snoozeAction;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (retain, nonatomic) BLTPBAction *dismissAction;
@property (nonatomic) BOOL hasSectionSubtype;
@property (nonatomic) int sectionSubtype;
@property (readonly, nonatomic) BOOL hasSockPuppetAppBundleID;
@property (retain, nonatomic) NSString *sockPuppetAppBundleID;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasPublicationDate;
@property (nonatomic) double publicationDate;
@property (nonatomic) BOOL includesSound;
@property (readonly, nonatomic) BOOL hasTeamID;
@property (retain, nonatomic) NSString *teamID;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (retain, nonatomic) NSString *universalSectionID;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContexts;
@property (retain, nonatomic) NSData *alertSuppressionContexts;
@property (nonatomic) BOOL hasSoundAlertType;
@property (nonatomic) int soundAlertType;
@property (readonly, nonatomic) BOOL hasSoundAccountIdentifier;
@property (retain, nonatomic) NSString *soundAccountIdentifier;
@property (readonly, nonatomic) BOOL hasSoundToneIdentifier;
@property (retain, nonatomic) NSString *soundToneIdentifier;
@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic) unsigned int attachmentType;
@property (nonatomic) BOOL hasContainsUpdatedAttachment;
@property (nonatomic) BOOL containsUpdatedAttachment;
@property (nonatomic) BOOL hasLoading;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL hasTurnsOnDisplay;
@property (nonatomic) BOOL turnsOnDisplay;
@property (retain, nonatomic) NSMutableArray *subsectionIDs;
@property (readonly, nonatomic) BOOL hasDismissalID;
@property (retain, nonatomic) NSString *dismissalID;
@property (readonly, nonatomic) BOOL hasAttachmentURL;
@property (retain, nonatomic) NSString *attachmentURL;
@property (retain, nonatomic) NSMutableArray *peopleIDs;
@property (nonatomic) BOOL hasIgnoresQuietMode;
@property (nonatomic) BOOL ignoresQuietMode;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (retain, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) BOOL hasContextNulls;
@property (retain, nonatomic) NSData *contextNulls;
@property (readonly, nonatomic) BOOL hasAlertSuppressionContextsNulls;
@property (retain, nonatomic) NSData *alertSuppressionContextsNulls;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (retain, nonatomic) NSString *threadID;
@property (readonly, nonatomic) BOOL hasAttachmentID;
@property (retain, nonatomic) NSString *attachmentID;
@property (retain, nonatomic) NSMutableArray *additionalAttachments;
@property (nonatomic) BOOL hasRequiredExpirationDate;
@property (nonatomic) double requiredExpirationDate;
@property (readonly, nonatomic) BOOL hasReplyToken;
@property (retain, nonatomic) NSString *replyToken;
@property (nonatomic) BOOL hasSoundMaximumDuration;
@property (nonatomic) double soundMaximumDuration;
@property (nonatomic) BOOL hasSoundShouldRepeat;
@property (nonatomic) BOOL soundShouldRepeat;
@property (nonatomic) BOOL hasSoundShouldIgnoreRingerSwitch;
@property (nonatomic) BOOL soundShouldIgnoreRingerSwitch;
@property (nonatomic) BOOL hasHasCriticalIcon;
@property (nonatomic) BOOL hasCriticalIcon;
@property (nonatomic) BOOL hasSoundAudioVolume;
@property (nonatomic) double soundAudioVolume;
@property (nonatomic) BOOL hasPreemptsPresentedAlert;
@property (nonatomic) BOOL preemptsPresentedAlert;
@property (nonatomic) BOOL hasSuppressDelayForForwardedBulletins;
@property (nonatomic) BOOL suppressDelayForForwardedBulletins;
@property (readonly, nonatomic) BOOL hasIcon;
@property (retain, nonatomic) BLTPBSectionIcon *icon;
@property (nonatomic) BOOL hasContainsUpdateIcon;
@property (nonatomic) BOOL containsUpdateIcon;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) BOOL hasInterruptionLevel;
@property (nonatomic) unsigned int interruptionLevel;
@property (readonly, nonatomic) BOOL hasCommunicationContext;
@property (retain, nonatomic) BLTPBCommunicationContext *communicationContext;
@property (readonly, nonatomic) BOOL hasContentType;
@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) BOOL hasFilterCriteria;
@property (retain, nonatomic) NSString *filterCriteria;
@property (readonly, nonatomic) BOOL hasFollowActivityAction;
@property (retain, nonatomic) BLTPBAction *followActivityAction;
@property (nonatomic) BOOL hasHasSubordinateIcon;
@property (nonatomic) BOOL hasSubordinateIcon;

/* class methods */
+ (id)bulletinWithBBBulletin:(id)bbbulletin sockPuppetAppBundleID:(id)id observer:(id)observer feed:(unsigned long long)feed teamID:(id)id universalSectionID:(id)id shouldUseExpirationDate:(BOOL)date replyToken:(id)token gizmoLegacyPublisherBulletinID:(id)id gizmoLegacyCategoryID:(id)id gizmoSectionID:(id)id gizmoSectionSubtype:(id)subtype useUserInfoForContext:(BOOL)context removeSubtitleForOlderWatches:(BOOL)watches;
+ (void)bulletinWithBBBulletin:(id)bbbulletin sockPuppetAppBundleID:(id)id observer:(id)observer feed:(unsigned long long)feed teamID:(id)id universalSectionID:(id)id shouldUseExpirationDate:(BOOL)date replyToken:(id)token gizmoLegacyPublisherBulletinID:(id)id gizmoLegacyCategoryID:(id)id gizmoSectionID:(id)id gizmoSectionSubtype:(id)subtype useUserInfoForContext:(BOOL)context removeSubtitleForOlderWatches:(BOOL)watches attachOption:(unsigned long long)option completion:(id /* block */)completion;
+ (void)_attachmentFromBBAttachmentMetadata:(id)metadata bulletin:(id)bulletin observer:(id)observer fileOption:(unsigned long long)option attachOption:(unsigned long long)option completion:(id /* block */)completion;
+ (id)_handleThumbnailResponse:(id)response attachmentMetadata:(id)metadata transcodedAttachmentSaveURL:(id)url wantsData:(BOOL)data imageContentType:(id)type;
+ (void)_addAttachmentsFromBBBulletin:(id)bbbulletin toBLTPBBulletin:(id)bltpbbulletin observer:(id)observer attachOption:(unsigned long long)option completion:(id /* block */)completion;
+ (Class)supplementaryActionsType;
+ (Class)subsectionIDsType;
+ (Class)peopleIDsType;
+ (Class)additionalAttachmentsType;

/* instance methods */
- (id)sectionMatchID;
- (BOOL)blt_overridesDND;
- (id)publisherMatchID;
- (id)attachmentKey:(id)key;
- (id)attachmentURLURL;
- (id)description;
- (void)clearSupplementaryActions;
- (void)addSupplementaryActions:(id)actions;
- (unsigned long long)supplementaryActionsCount;
- (id)supplementaryActionsAtIndex:(unsigned long long)index;
- (void)clearSubsectionIDs;
- (void)addSubsectionIDs:(id)ids;
- (unsigned long long)subsectionIDsCount;
- (id)subsectionIDsAtIndex:(unsigned long long)index;
- (void)clearPeopleIDs;
- (void)addPeopleIDs:(id)ids;
- (unsigned long long)peopleIDsCount;
- (id)peopleIDsAtIndex:(unsigned long long)index;
- (void)clearAdditionalAttachments;
- (void)addAdditionalAttachments:(id)attachments;
- (unsigned long long)additionalAttachmentsCount;
- (id)additionalAttachmentsAtIndex:(unsigned long long)index;
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

#endif /* BLTPBBulletin_h */