//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDTaskServerRegistry_h
#define HDTaskServerRegistry_h
@import Foundation;

#include "HDDaemon.h"

@class NSMapTable, NSMutableDictionary, NSMutableSet;

@interface HDTaskServerRegistry : NSObject {
  /* instance variables */
  NSMutableDictionary *_taskServerClassesByTaskIdentifier;
  NSMapTable *_taskServersByUUID;
  NSMutableDictionary *_taskServerObserversByUUID;
  NSMutableSet *_loadedPluginURLs;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

/* instance methods */
- (id)initWithDaemon:(id)daemon;
- (BOOL)registerTaskServerClassesWithProvider:(id)provider error:(id *)error;
- (BOOL)registerTaskServerClass:(Class)class error:(id *)error;
- (BOOL)registerTaskServerClasses:(id)classes error:(id *)error;
- (BOOL)loadTaskServersFromPluginAtURL:(id)url error:(id *)error;
- (id)taskServerForTaskUUID:(id)uuid;
- (void)addObserver:(id)observer forTaskServerUUID:(id)uuid queue:(id)queue;
- (void)removeObserver:(id)observer forTaskServerUUID:(id)uuid;
- (void)removeTaskServerObserver:(id)observer;
- (void)didCreateTaskServer:(id)server;
- (void)taskServerDidInvalidate:(id)invalidate;
- (Class)_taskServerClassForIdentifier:(id)identifier;
- (id)createTaskServerEndpointForIdentifier:(id)identifier taskUUID:(id)uuid instanceUUID:(id)uuid configuration:(id)configuration client:(id)client connectionQueue:(id)queue error:(id *)error;
@end

#endif /* HDTaskServerRegistry_h */