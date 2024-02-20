//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISBulletinClientFactoryExtension_Protocol_h
#define CUISBulletinClientFactoryExtension_Protocol_h
@import Foundation;

@protocol CUISBulletinClientFactoryExtension <NSObject>
@optional
/* instance methods */
- (void)primaryPagePresentationWithCompletion:(id /* block */)completion;
- (double)primaryPagePresentationTimeout;
- (void)primaryPagePresentationWillExpire;
- (double)extendedPrimaryPagePresentationTimeout;
- (void)invalidate;
- (id)sectionIDsSupported;
- (BOOL)supportsThreadedPrimaryPagePresentation;
- (BOOL)alwaysReturnPrimaryPagePresentationAsynchronously;
- (void)setCUISMetadata:(id)cuismetadata;
- (BOOL)wantsPrimaryPagePresentationBuilt;
- (BOOL)shouldDismissExistingPresentationWithModifiedNotification:(id)notification;
- (void)updateNotification:(id)notification withSoundPolicy:(unsigned long long)policy;
@end

#endif /* CUISBulletinClientFactoryExtension_Protocol_h */