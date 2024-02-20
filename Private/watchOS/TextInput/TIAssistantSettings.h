//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIAssistantSettings_h
#define TIAssistantSettings_h
@import Foundation;

@interface TIAssistantSettings : NSObject
/* class methods */
+ (void)setTestBlock:(id /* block */)block;
+ (void)connectForOperations:(id /* block */)operations withErrorHandler:(id /* block */)handler;
+ (void)presentDialogForType:(long long)type withCompletionHandler:(id /* block */)handler;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)handler;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)handler;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)handler;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)handler;
+ (void)dismissedDataSharingWithResponse:(long long)response;
+ (void)dismissDialog;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissEnableDataSharingPrompt;
+ (void)launchKeyboardSettings;
+ (void)launchDictationSettings;
+ (void)launchPencilSettings;
@end

#endif /* TIAssistantSettings_h */