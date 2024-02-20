//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INCExtensionManager_h
#define INCExtensionManager_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_extensions;
  NSMutableDictionary *_killTimers;
}

/* class methods */
+ (void)initialize;
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)fetchExtensionForIntent:(id)intent extensionInputItems:(id)items requiresTCC:(BOOL)tcc completion:(id /* block */)completion;
- (void)fetchExtensionForIntent:(id)intent extensionInputItems:(id)items requiresTCC:(BOOL)tcc requiresTrustCheck:(BOOL)check completion:(id /* block */)completion;
- (void)killExtension:(id)extension requestIdentifier:(id)identifier afterTimeout:(double)timeout;
- (BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)identifier;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)identifier;
- (void)_killExtensionWithBundleIdentifier:(id)identifier;
- (void)_manageExtension:(id)extension requestIdentifier:(id)identifier;
@end

#endif /* INCExtensionManager_h */