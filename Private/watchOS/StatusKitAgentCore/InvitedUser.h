//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef InvitedUser_h
#define InvitedUser_h
@import Foundation;

#include "NSManagedObject.h"
#include "Channel.h"

@class NSData, NSDate, NSString;

@interface InvitedUser : NSManagedObject

@property (copy, @dynamic, nonatomic) NSDate *dateInvitationPayloadCreated;
@property (retain, @dynamic, nonatomic) NSData *invitationPayload;
@property (copy, @dynamic, nonatomic) NSString *invitedHandle;
@property (copy, @dynamic, nonatomic) NSString *senderHandle;
@property (retain, @dynamic, nonatomic) Channel *channel;

/* class methods */
+ (id)fetchRequest;
+ (id)predicateForInvitedHandle:(id)handle;
+ (id)predicateForSenderHandle:(id)handle;
+ (id)predicateForChannel:(id)channel;
+ (id)invitedHandleKeyPath;
+ (id)senderHandleKeyPath;
+ (id)channelKeyPath;
@end

#endif /* InvitedUser_h */