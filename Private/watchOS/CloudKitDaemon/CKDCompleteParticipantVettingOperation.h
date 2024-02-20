//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDCompleteParticipantVettingOperation_h
#define CKDCompleteParticipantVettingOperation_h
@import Foundation;

#include "CKDOperation.h"

@class CKShareMetadata, NSData, NSString;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKDCompleteParticipantVettingOperation : CKDOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *vettingToken;
@property (readonly, nonatomic) NSString *vettingEmail;
@property (readonly, nonatomic) NSString *vettingPhone;
@property (readonly, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) NSString *baseToken;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (retain, nonatomic) NSString *shortToken;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, @dynamic, nonatomic) NSObject<CKCompleteParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ verifyProgressURLReconstructedBlock;
@property (copy, nonatomic) id /* block */ verifyProgressShareMetadataFetchedBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (id)shortSharingTokenFromFullToken:(id)token;
- (id)shortSharingTokenFromData:(id)data;
- (void)_reconstructShortToken;
- (void)_performAuthKitVerification;
- (void)_forceFetchShareMetadata;
- (void)_reconstructShareURL;
- (void)_verifyOONParticipant;
- (void)main;
@end

#endif /* CKDCompleteParticipantVettingOperation_h */