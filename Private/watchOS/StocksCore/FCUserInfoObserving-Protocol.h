//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef FCUserInfoObserving_Protocol_h
#define FCUserInfoObserving_Protocol_h
@import Foundation;

@protocol FCUserInfoObserving <NSObject>
@optional
/* instance methods */
- (void)userInfoDidChangeFeldsparID:(id)id fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeSportsOnboardingState:(id)state;
- (void)userInfoDidChangeShortcutsOnboardingState:(id)state;
- (void)userInfoDidChangeOnboardingStatus:(id)status;
- (void)userInfoDidChangeSportsSyncState:(id)state;
- (void)userInfoDidChangeSportsUserID:(id)id;
- (void)userInfoDidChangeNotificationsUserID:(id)id;
- (void)userInfoDidChangeAdsUserID:(id)id fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeDateLastViewedSaved:(id)saved fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeEditorialArticleVersion:(id)version;
- (void)userInfo:(id)info didChangeAccessTokenForTagID:(id)id;
- (void)userInfo:(id)info didRemoveAccessTokenForTagID:(id)id userInitiated:(BOOL)initiated;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(id)enabled fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(id)enabled fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)enabled fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeSportsTopicNotificationsEnabledState:(id)state fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeDateLastViewedSharedWithYou:(id)you fromCloud:(BOOL)cloud;
- (void)userInfo:(id)info didChangePuzzleTypeSettingsForPuzzleTypeID:(id)id;
- (void)userInfoDidChangePuzzleNotificationsEnabled:(id)enabled fromCloud:(BOOL)cloud;
- (void)userInfoDidChangeDateLastPuzzleNotifications:(id)notifications fromCloud:(BOOL)cloud;
@end

#endif /* FCUserInfoObserving_Protocol_h */