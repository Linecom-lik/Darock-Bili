//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMBalloonPlugin_h
#define IMBalloonPlugin_h
@import Foundation;

#include "IMBalloonApp.h"

@class NSArray, NSBundle, NSMutableArray, NSMutableDictionary, NSString;
@protocol PKPlugIn;

@interface IMBalloonPlugin : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSObject<PKPlugIn> *plugin;
@property (nonatomic) BOOL pluginLoaded;
@property (retain, nonatomic) IMBalloonApp *app;
@property (retain, nonatomic) NSMutableDictionary *messageToDatasourceMap;
@property (retain, nonatomic) NSMutableDictionary *messageToBalloonControllerMap;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSString *browserImageName;
@property (retain, nonatomic) NSString *browserImagePath;
@property (nonatomic) long long browserGroup;
@property (retain, nonatomic) NSMutableArray *balloonControllerPool;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, retain, nonatomic) NSString *browserDisplayName;
@property (readonly, retain, nonatomic) NSString *browserShortDisplayName;
@property (readonly, retain, nonatomic) NSBundle *pluginBundle;
@property (readonly, retain, nonatomic) NSBundle *appBundle;
@property (readonly, nonatomic) BOOL showInSendMenu;
@property (readonly, nonatomic) BOOL showInBrowser;
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) BOOL isLaunchProhibited;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL shouldHideAppSwitcher;
@property (readonly, nonatomic) BOOL hideAttributionInformation;
@property (readonly, nonatomic) BOOL shouldBalloonHideAppIcon;
@property (readonly, nonatomic) BOOL shouldBreadcrumbHideAppIcon;
@property (readonly, nonatomic) NSString *appStoreGenre;
@property (readonly, nonatomic) NSArray *appStoreSubgenres;
@property (readonly, nonatomic) unsigned long long presentationContexts;
@property (readonly, nonatomic) unsigned long long stickerSharingLevel;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL betaPlugin;

/* instance methods */
- (id)init;
- (id)initWithBundle:(id)bundle;
- (id)initWithBundle:(id)bundle app:(id)app;
- (void)dealloc;
- (void)unloadBundle;
- (id)_getControllerFromReusePoolForChatItem:(id)item contextIdentifier:(id)identifier;
- (id)balloonControllerKeyForMessageGUID:(id)guid contextIdentifier:(id)identifier;
- (id)existingBalloonControllerWithMessageGUID:(id)guid contextIdentifier:(id)identifier;
- (id)balloonControllerForChatItem:(id)item contextIdentifier:(id)identifier;
- (void)moveController:(id)controller toReusePoolFromChatItem:(id)item contextIdentifier:(id)identifier;
- (void)removeController:(id)controller forChatItem:(id)item contextIdentifier:(id)identifier;
- (BOOL)_canRemoveControllerFromCachedDatasource;
- (BOOL)supportsControllerReuse;
- (BOOL)shouldShowForRecipients:(id)recipients;
- (BOOL)linkedBeforeSDKVersion:(id)sdkversion;
- (id)existingDataSourceForMessageGUID:(id)guid;
- (void)insertDataSource:(id)source forGUID:(id)guid;
- (id)dataSourceForPluginPayload:(id)payload;
- (BOOL)isBetaPlugin;
- (BOOL)isStickerPackOnly;
- (id)adamID;
- (id)attributionInfo;
@end

#endif /* IMBalloonPlugin_h */