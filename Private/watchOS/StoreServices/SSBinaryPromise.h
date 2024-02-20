//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSBinaryPromise_h
#define SSBinaryPromise_h
@import Foundation;

#include "SSPromise.h"

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

/* class methods */
+ (id)promiseWithError:(id)error;
+ (id)promiseWithPromise:(id)promise;
+ (id)promiseWithSuccess;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;

/* instance methods */
- (id)init;
- (void)addErrorBlock:(id /* block */)block;
- (void)addFinishBlock:(id /* block */)block;
- (void)addSuccessBlock:(id /* block */)block;
- (BOOL)finishWithError:(id)error;
- (BOOL)finishWithSuccess;
- (BOOL)resultWithError:(id *)error;
- (BOOL)resultWithTimeout:(double)timeout error:(id *)error;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)timeout;
- (id /* block */)completionHandlerAdapter;
- (id)promiseAdapter;
- (void)_removeFromGlobalPromiseStorage;
@end

#endif /* SSBinaryPromise_h */