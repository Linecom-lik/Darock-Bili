//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSDefaultDataProviderFactory_h
#define UNSDefaultDataProviderFactory_h
@import Foundation;

#include "BBObserverDelegate-Protocol.h"
#include "UNSApplicationLauncher.h"
#include "UNSAttachmentsService.h"
#include "UNSDaemonLauncher.h"
#include "UNSLocalizationService.h"
#include "UNSNotificationCategoryRepository.h"
#include "UNSNotificationRepository.h"
#include "UNSNotificationTopicRepository.h"
#include "UNSSettingsGateway.h"

@class BBDataProviderConnection, BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject<BBObserverDelegate> {
  /* instance variables */
  NSMutableDictionary *_bundleIdentifierToDataProvider;
  NSMutableSet *_authorizedBundleIdentifiers;
  NSMutableSet *_supportedBundleIdentifiers;
  NSMutableArray *_observers;
  UNSApplicationLauncher *_appLauncher;
  UNSDaemonLauncher *_daemonLauncher;
  UNSLocalizationService *_localizationService;
  UNSNotificationCategoryRepository *_categoryRepository;
  UNSNotificationRepository *_notificationRepository;
  UNSNotificationTopicRepository *_topicRepository;
  UNSAttachmentsService *_attachmentsService;
  BBDataProviderConnection *_dataProviderConnection;
  BBObserver *_settingsObserver;
  UNSSettingsGateway *_settingsGateway;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApplicationLauncher:(id)launcher daemonLauncher:(id)launcher categoryRepository:(id)repository notificationRepository:(id)repository attachmentsService:(id)service topicRepository:(id)repository localizationService:(id)service settingsGateway:(id)gateway;
- (void)dealloc;
- (id)notificationSettingsForBundleIdentifier:(id)identifier;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)identifier;
- (void)requestAuthorizationStatus:(long long)status withOptions:(unsigned long long)options scheduledDeliveryEnabled:(BOOL)enabled forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)requestAuthorizationStatus:(long long)status withOptions:(unsigned long long)options scheduledDeliveryEnabled:(BOOL)enabled expirationDate:(id)date lastUserGrantDate:(id)date forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)requestRemoveAuthorizationforNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)updateAuthorizationWithOptions:(unsigned long long)options scheduledDeliveryEnabled:(BOOL)enabled forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)setCriticalAlertAuthorization:(BOOL)authorization forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_queue_sectionInfoDidChange:(id)change;
- (void)_queue_addObserver:(id)observer;
- (void)_queue_removeObserver:(id)observer;
- (id)_queue_notificationSettingsForBundleIdentifier:(id)identifier;
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)identifier;
- (void)_queue_setSectionInfo:(id)info forBundleIdentifier:(id)identifier;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)identifier;
- (id)_queue_sectionInfoForBundleIdentifier:(id)identifier;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)status options:(unsigned long long)options scheduledDeliveryEnabled:(BOOL)enabled forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)status options:(unsigned long long)options scheduledDeliveryEnabled:(BOOL)enabled expirationDate:(id)date lastUserGrantDate:(id)date forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)_queue_setCriticalAlertAuthorization:(BOOL)authorization forNotificationSourceDescription:(id)description completionHandler:(id /* block */)handler;
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)description withCompletion:(id /* block */)completion;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_queue_createNewDefaultDataProviders:(id)providers;
- (void)_queue_notificationSourcesDidInstall:(id)install;
- (void)_queue_notificationSourceDidInstall:(id)install;
- (void)_queue_notificationSourcesDidUninstall:(id)uninstall;
- (void)_queue_notificationSourceDidUninstall:(id)uninstall;
- (void)notificationSourcesDidInstall:(id)install;
- (void)notificationSourcesDidUninstall:(id)uninstall;
- (void)observer:(id)observer updateSectionInfo:(id)info;
- (void)observer:(id)observer removeSection:(id)section;
@end

#endif /* UNSDefaultDataProviderFactory_h */