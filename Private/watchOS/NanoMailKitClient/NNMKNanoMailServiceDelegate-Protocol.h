//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKNanoMailServiceDelegate_Protocol_h
#define NNMKNanoMailServiceDelegate_Protocol_h
@import Foundation;

@protocol NNMKNanoMailServiceDelegate <NSObject>
@optional
/* instance methods */
- (void)nanoMailService:(id)service didReplyWithOperation:(id)operation totalMessageCount:(unsigned long long)count willFetch:(BOOL)fetch error:(id)error reloadCache:(BOOL)cache lastUpdateByMailboxId:(id)id;
- (void)nanoMailService:(id)service didReplyWithMessage:(id)message;
- (void)nanoMailService:(id)service didReplyWithMessageContent:(id)content;
- (void)nanoMailService:(id)service didReplyWithMessageContentLoadFailedForMessageWithId:(id)id;
- (void)nanoMailService:(id)service didFailSyncingAttachment:(id)attachment messageId:(id)id;
- (void)nanoMailService:(id)service didReplyWithAccounts:(id)accounts error:(id)error;
- (void)nanoMailService:(id)service didReplyWithMailboxSelection:(id)selection;
- (void)nanoMailService:(id)service didReplyWithComposedMessageIds:(id)ids progress:(id)progress;
- (void)nanoMailService:(id)service didReplyWithFailedComposedMessageIdsAndSubjects:(id)subjects;
- (void)nanoMailService:(id)service didReplyWithFirstUnreadMessages:(id)messages;
- (void)nanoMailService:(id)service didReplyWithIsConnected:(BOOL)connected;
- (void)nanoMailService:(id)service didAddNewMessage:(id)message;
- (void)nanoMailService:(id)service didReceiveMessage:(id)message replacingPreviousMessageWithId:(id)id;
- (void)nanoMailService:(id)service didUpdateMessage:(id)message;
- (void)nanoMailService:(id)service didDeleteMessageWithId:(id)id;
- (void)nanoMailService:(id)service didExecuteOperations:(id)operations totalMessageCount:(unsigned long long)count;
- (void)nanoMailService:(id)service didReceiveContentForMessageWithId:(id)id;
- (void)nanoMailService:(id)service didReceiveAttachmentForMessageWithId:(id)id contentId:(id)id;
- (void)nanoMailService:(id)service didAddNewAccount:(id)account;
- (void)nanoMailService:(id)service didUpdateAccount:(id)account;
- (void)nanoMailService:(id)service didDeleteAccountWithId:(id)id;
- (void)nanoMailService:(id)service didChangeMailboxSelection:(id)selection;
- (void)nanoMailService:(id)service didReportFailureSendingComposedMessageWithId:(id)id subject:(id)subject error:(id)error;
- (void)nanoMailService:(id)service didReportSendingComposedMessageStartedWithId:(id)id referenceMessageId:(id)id;
- (void)nanoMailService:(id)service didFinishSyncingMessagesSuccessfullyReceivingMessages:(BOOL)messages initialMessages:(BOOL)messages;
- (void)nanoMailService:(id)service didFailSyncingMessagesWithError:(id)error;
- (void)nanoMailServiceDidNotifyOldMessagesAvailable:(id)available;
- (void)nanoMailServiceDidNotifyFetchRequestCompleted:(id)completed batchResponse:(BOOL)response mailboxIds:(id)ids;
- (void)nanoMailService:(id)service didReportProgress:(long long)progress forComposedMessageWithId:(id)id referenceMessageId:(id)id;
- (void)nanoMailServiceDidDeleteAllMessages:(id)messages;
- (void)nanoMailServiceDidRequestReloadCache:(id)cache;
- (void)nanoMailService:(id)service connectivityDidChange:(BOOL)change;
- (void)nanoMailServiceXPCConnectionInterrupted:(id)interrupted;
- (void)nanoMailServiceXPCConnectionReconnected:(id)reconnected;
- (void)nanoMailService:(id)service didFailWithError:(id)error;
- (void)nanoMailService:(id)service didUpdateMailboxWithId:(id)id lastUpdate:(id)update;
- (void)nanoMailService:(id)service didReplyWithMessagesCount:(unsigned long long)count;
- (void)nanoMailService:(id)service didReplyWithAllMessages:(id)messages;
- (void)nanoMailService:(id)service didReplyWithAddedTopicId:(id)id;
- (void)nanoMailService:(id)service didChangeAccountValidationStatus:(unsigned long long)status accountName:(id)name;
@end

#endif /* NNMKNanoMailServiceDelegate_Protocol_h */