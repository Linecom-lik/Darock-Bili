//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationParticipant_h
#define TUConversationParticipant_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUConversationParticipantAssociation.h"
#include "TUConversationParticipantCapabilities.h"
#include "TUHandle.h"

@class NSString;

@interface TUConversationParticipant : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) BOOL audioPaused;
@property (nonatomic) BOOL lightweight;
@property (nonatomic) BOOL localAccountHandle;
@property (nonatomic) BOOL guestModeEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) BOOL spatialPersonaEnabled;
@property (nonatomic) BOOL cameraMixedWithScreen;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *senderCorrelationIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(unsigned long long)identifier handle:(id)handle senderCorrelationIdentifier:(id)identifier;
- (id)initWithIdentifier:(unsigned long long)identifier handle:(id)handle;
- (id)initWithConversationParticipant:(id)participant;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToParticipant:(id)participant;
- (BOOL)isMuted;
- (BOOL)isAudioEnabled;
- (BOOL)isVideoEnabled;
- (BOOL)isScreenEnabled;
- (BOOL)isAudioPaused;
- (BOOL)isLightweight;
- (BOOL)isLocalAccountHandle;
- (BOOL)isGuestModeEnabled;
- (BOOL)isSpatialPersonaEnabled;
- (BOOL)isCameraMixedWithScreen;
@end

#endif /* TUConversationParticipant_h */