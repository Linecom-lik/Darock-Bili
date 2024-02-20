//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NNCComplicationDataSource_h
#define NNCComplicationDataSource_h
@import Foundation;

#include "NNCLastNewsStoryResult.h"
#include "NNCompanionPreferencesNotifierDelegate-Protocol.h"

@class NNCompanionPreferencesNotifier, NSString, NTKComplication;
@protocol NNCComplicationDataSourceDelegate;

@interface NNCComplicationDataSource : NSObject<NNCompanionPreferencesNotifierDelegate>

@property (retain) NNCLastNewsStoryResult *lastNewStoriesResult;
@property (nonatomic) long long family;
@property (weak, nonatomic) NTKComplication *complication;
@property (retain, nonatomic) NNCompanionPreferencesNotifier *preferencesNotifier;
@property (weak, nonatomic) NSObject<NNCComplicationDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)staticTemplateForFamily:(long long)family compact:(BOOL)compact;
+ (id)newsTintColor;
+ (id)_loadingStoriesShortString;
+ (id)_loadingStoriesLargeString;
+ (id)_noNewStoriesLargeString;
+ (id)_noNewStoriesShortString;
+ (id)_complicationTitle;
+ (id)_oneLineHeadlineTextProviderForResult:(id)result;
+ (id)_templateForFamily:(long long)family newsStoryResult:(id)result compact:(BOOL)compact;
+ (id)imageProviderWithForegroundName:(id)name compact:(BOOL)compact;
+ (id)fullColorImageProviderWithName:(id)name;
+ (BOOL)acceptsComplicationFamily:(long long)family;
+ (BOOL)acceptsComplicationType:(unsigned long long)type;

/* instance methods */
- (void)_populateWithResult:(id)result;
- (void)_updateWithNotification:(id)notification;
- (id)initWithComplication:(id)complication family:(long long)family;
- (void)dealloc;
- (void)companionPreferencesNotifierDidNoticeUpdate:(id)update;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;
- (id)lockedTemplate;
- (id)privacyTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)handler;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (void)pause;
- (void)resume;
- (BOOL)supportsTapAction;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (id)complicationApplicationIdentifier;
@end

#endif /* NNCComplicationDataSource_h */