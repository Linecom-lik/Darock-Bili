//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef _SCDASessionMutation_h
#define _SCDASessionMutation_h
@import Foundation;

#include "SCDASession.h"
#include "SCDASessionMutating-Protocol.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface _SCDASessionMutation : NSObject<SCDASessionMutating> {
  /* instance variables */
  SCDASession *_base;
  unsigned long long _generation;
  NSUUID *_sessionId;
  NSUUID *_currentElectionAdvertisementId;
  NSData *_currentElectionAdvertisementData;
  NSDictionary *_electionAdvertisementDataByIds;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasGeneration; unsigned int x :1 hasSessionId; unsigned int x :1 hasCurrentElectionAdvertisementId; unsigned int x :1 hasCurrentElectionAdvertisementData; unsigned int x :1 hasElectionAdvertisementDataByIds; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (unsigned long long)getGeneration;
- (void)setGeneration:(unsigned long long)generation;
- (id)getSessionId;
- (void)setSessionId:(id)id;
- (id)getCurrentElectionAdvertisementId;
- (void)setCurrentElectionAdvertisementId:(id)id;
- (id)getCurrentElectionAdvertisementData;
- (void)setCurrentElectionAdvertisementData:(id)data;
- (id)getElectionAdvertisementDataByIds;
- (void)setElectionAdvertisementDataByIds:(id)ids;
@end

#endif /* _SCDASessionMutation_h */