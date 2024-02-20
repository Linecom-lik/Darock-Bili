//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABAnalytics_h
#define NCABAnalytics_h
@import Foundation;

@interface NCABAnalytics : NSObject
/* class methods */
+ (void)sendNewContactEvent;
+ (void)sendMyCardEvent;
+ (void)sendContactListItemEvent;
+ (void)sendRefreshedAccountsEvent;
+ (void)sendViewedAvatarEvent;
+ (void)sendCommActionEvent:(long long)event;
+ (void)sendContactPropertyEvent:(id)event;
+ (void)sendContactActionEvent:(long long)event;
+ (void)sendContactDeletionEventWithDeleted:(BOOL)deleted;
+ (void)sendContactEditorPresentedEvent;
+ (void)sendContactEditorCanceledEvent;
+ (void)sendContactEditorAddedPropertyEvent:(id)event;
+ (void)sendContactEditorSavedEvent;
+ (void)sendUnknownContactsPresentedEventWithCount:(unsigned long long)count;
+ (void)sendUnknownContactsCreateNewEvent;
+ (void)sendUnknownContactsAddToExistingEvent;
+ (id)_interactionPayloadWithAction:(id)action;
+ (void)_sendEvent:(id)event payload:(id)payload;
@end

#endif /* NCABAnalytics_h */