//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _TtCV15MessagesSupport30JunkConversationsView_PreviewsP33_CAE5D2AEB2305A5CE8BBCAFBEEA8615D13JunkModelMock_h
#define _TtCV15MessagesSupport30JunkConversationsView_PreviewsP33_CAE5D2AEB2305A5CE8BBCAFBEEA8615D13JunkModelMock_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "CKJunkModel-Protocol.h"
#include "CKJunkModelDelegate-Protocol.h"

@interface MessagesSupport.JunkConversationsView_Previews.(JunkModelMock in _CAE5D2AEB2305A5CE8BBCAFBEEA8615D) : Swift._SwiftObject<CKJunkModel> // (Swift)

@property (nonatomic, weak) NSObject<CKJunkModelDelegate> *modelDelegate;

/* instance methods */
- (void)startJunkListener;
- (void)pauseJunkListener;
- (void)resumeJunkListener;
- (void)endJunkListener;
- (void)configureConversationWithIdentifier:(id)identifier;
- (void)reloadConversations;
- (void)clearAllConversationsAndReport:(BOOL)report;
- (void)deleteConversationsWithIdentifiers:(id)identifiers andReport:(BOOL)report;
- (void)restoreConversationWithIdentifier:(id)identifier;
@end

#endif /* _TtCV15MessagesSupport30JunkConversationsView_PreviewsP33_CAE5D2AEB2305A5CE8BBCAFBEEA8615D13JunkModelMock_h */