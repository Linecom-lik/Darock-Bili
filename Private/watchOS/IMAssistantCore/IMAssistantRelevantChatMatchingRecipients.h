//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssistantRelevantChatMatchingRecipients_h
#define IMAssistantRelevantChatMatchingRecipients_h
@import Foundation;

@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject

@property (retain, nonatomic) IMChat *chat;
@property (copy, nonatomic) NSArray *resolvedPersons;

/* instance methods */
- (id)initWithChat:(id)chat resolvedPersons:(id)persons;
- (id)description;
@end

#endif /* IMAssistantRelevantChatMatchingRecipients_h */