//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVMultiGetWithFallbackTaskGroup_h
#define CoreDAVMultiGetWithFallbackTaskGroup_h
@import Foundation;

#include "CoreDAVTaskGroup.h"
#include "CoreDAVAccountInfoProvider-Protocol.h"
#include "CoreDAVContainerMultiGetSubmittable-Protocol.h"
#include "CoreDAVContainerMultiGetTask.h"

@class NSError, NSMutableSet, NSSet, NSString;
@protocol CoreDAVTaskManager;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup<CoreDAVContainerMultiGetSubmittable> {
  /* instance variables */
  BOOL _usingMultiGet;
  CoreDAVContainerMultiGetTask *_multiGetTask;
  id /* block */ _getBlock;
  NSMutableSet *_urls;
}

@property (readonly, nonatomic) NSSet *missingURLs;
@property (readonly, nonatomic) NSSet *deletedURLs;
@property (readonly, nonatomic) NSSet *parsedContents;
@property (nonatomic) BOOL shouldIgnoreResponseErrors;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) NSObject<CoreDAVTaskManager> *taskManager;
@property (nonatomic) NSObject<CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) double timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURLs:(id)urls multiGetBlock:(id /* block */)block getBlock:(id /* block */)block accountInfoProvider:(id)provider taskManager:(id)manager;
- (void)_configureAndSubmitTask:(id)task;
- (void)_switchToSingleGetMode;
- (void)_fetchOneItem;
- (void)startTaskGroup;
@end

#endif /* CoreDAVMultiGetWithFallbackTaskGroup_h */