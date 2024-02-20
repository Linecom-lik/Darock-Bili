//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLNightstandManager_h
#define CSLNightstandManager_h
@import Foundation;

#include "CSLNightstandAnalytics.h"
#include "CSLNightstandDelegate-Protocol.h"
#include "CSLNightstandPropertyProviding-Protocol.h"
#include "CSLNightstandSuspensionServiceDelegate-Protocol.h"
#include "CSLNightstandSuspensionServiceEndpoint.h"
#include "CarouselStartupObserver-Protocol.h"

@class NSString;

@interface CSLNightstandManager : NSObject<CSLNightstandSuspensionServiceDelegate, CarouselStartupObserver, CSLNightstandPropertyProviding>

@property BOOL nightstandEnabled;
@property (retain, nonatomic) CSLNightstandSuspensionServiceEndpoint *suspensionService;
@property (readonly, nonatomic) CSLNightstandAnalytics *nightstandAnalytics;
@property (readonly, weak, nonatomic) NSObject<CSLNightstandDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)_loadPreferencesAndUpdateIfNecessary;
- (void)carouselWillShowUI;
- (void)_main_loadPreferenceAndUpdateIfNecessary:(BOOL)necessary;
- (void)_addPreferencesObserver;
- (void)_removePreferencesObserver;
- (void)suspendNightstand;
- (void)resumeNightstand;
- (BOOL)isNightstandEnabled;
@end

#endif /* CSLNightstandManager_h */