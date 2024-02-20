//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMServiceCenter_h
#define CDMServiceCenter_h
@import Foundation;

#include "CDMAssetsManager.h"
#include "CDMComposerService.h"
#include "CDMConfig.h"
#include "CDMDynamicConfig.h"
#include "CDMServiceGraphRunner.h"
#include "CDMServiceObserver-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CDMServiceCenter : NSObject<CDMServiceObserver> {
  /* instance variables */
  CDMConfig *_config;
  NSArray *_services;
  NSArray *_dagServices;
  NSArray *_enabledDAGServiceNames;
  NSArray *_foundationServices;
  CDMComposerService *_composerService;
  NSMutableDictionary *_commandServicesDict;
  id /* block */ _defaultCallback;
  CDMServiceGraphRunner *_serviceGraphRunner;
  CDMAssetsManager *_cdmAssetsManager;
  NSObject<OS_dispatch_queue> *_cdmServiceCenterQueue;
  CDMDynamicConfig *_currentConfig;
  BOOL _enableSetAssetsProvisionalAndPromote;
  NSObject<OS_os_transaction> *transaction;
}

@property (readonly, nonatomic) long long systemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)getDynamicConfigWithAssetCollectionForServices:(id)services inGraph:(id)graph withLocale:(id)locale withError:(id *)error withSelfMetadata:(id)metadata;

/* instance methods */
- (void)dealloc;
- (void)initWithConfig:(id)config;
- (void)cleanup;
- (void)handleCommand:(id)command forCallback:(id /* block */)callback;
- (void)mergeConfig:(id)config;
- (void)handleSetup:(id)setup forCallback:(id /* block */)callback;
- (id)extractEnabledServices:(id)services;
- (id)extractEnabledServiceNames:(id)names;
- (id)getEnabledDAGServiceNamesForGraph:(id)graph;
- (BOOL)isServiceNotReady:(id)ready withServiceStateMap:(id)map;
- (BOOL)areAssetsAvailable:(id)available;
- (BOOL)registerWithAssetsDelegate:(id)delegate;
- (BOOL)handleOverridesAssetUpdateEvent:(id)event;
- (BOOL)handleXPCEvent:(id)xpcevent fromStream:(id)stream withRegister:(id)register;
- (BOOL)handleXPCActivity:(id)xpcactivity fromIdentifier:(id)identifier withRegister:(id)register;
- (void)setupAssetsForServices:(id)services withError:(id *)error;
- (void)setupAssetsForServices:(id)services withError:(id *)error andSelfMetadata:(id)metadata dataDispatcherContext:(id)context;
- (BOOL)shouldCDMAssetManagerReSetup;
- (void)setupCDMAssetManagerWithError:(id *)error;
- (void)setupEmbeddingConfigsWithError:(id *)error;
- (id)getAssetPaths;
- (BOOL)setAssetsProvisionalForServices:(id)services withSelfContextId:(id)id withSelfMetadata:(id)metadata withDataDispatcherContext:(id)context;
- (BOOL)promoteAssetsForServices:(id)services withServiceState:(id)state withSelfContextId:(id)id withSelfMetadata:(id)metadata withDataDispatcherContext:(id)context;
- (id)getServices;
- (id)getEnabledDAGServiceNames;
- (id)getFoundationServices;
- (void)smService:(id)service didPublishCommand:(id)command;
- (void)smService:(id)service didPublishRequest:(id)request withResponseCallback:(id /* block */)callback;
@end

#endif /* CDMServiceCenter_h */