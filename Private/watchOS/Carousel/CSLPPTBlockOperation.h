//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPPTBlockOperation_h
#define CSLPPTBlockOperation_h
@import Foundation;

#include "NSOperation.h"

@interface CSLPPTBlockOperation : NSOperation

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

/* class methods */
+ (id)operationWithBlock:(id /* block */)block;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)init;
- (void)finish;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (void)main;
@end

#endif /* CSLPPTBlockOperation_h */