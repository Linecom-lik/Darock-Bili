//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef MLRTrialDediscoTaskResult_h
#define MLRTrialDediscoTaskResult_h
@import Foundation;

#include "MLRTrialTaskResult.h"

@class NSDictionary, NSString;

@interface MLRTrialDediscoTaskResult : MLRTrialTaskResult

@property (readonly, copy, nonatomic) NSString *namespaceName;
@property (readonly, copy, nonatomic) NSString *recipeFactorName;
@property (readonly, copy, nonatomic) NSDictionary *additionalKeyVariables;

/* class methods */
+ (id)baseKeyFromFormat:(id)format variables:(id)variables;

/* instance methods */
- (id)initWithJSONResult:(id)jsonresult namespaceName:(id)name factorName:(id)name additionalKeyVariables:(id)variables;
- (id)initWithJSONResult:(id)jsonresult identifier:(id)identifier;
- (id)description;
- (id)variablesFromTrialClient:(id)client;
- (BOOL)record:(id)record data:(id)data encodingSchema:(id)schema metadata:(id)metadata errorOut:(id *)out;
- (BOOL)submitWithTRIClient:(id)triclient error:(id *)error;
- (BOOL)submitForTask:(id)task error:(id *)error;
@end

#endif /* MLRTrialDediscoTaskResult_h */