//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1011.6.0.0.0
//
#ifndef _SWCPatternMatchingEngine_h
#define _SWCPatternMatchingEngine_h
@import Foundation;

#include "_SWCPatternList.h"
#include "_SWCSubstitutionVariableList.h"

@interface _SWCPatternMatchingEngine : NSObject {
  /* instance variables */
  _SWCPatternList *_patternList;
  _SWCSubstitutionVariableList *_subVarList;
}

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithPatternDictionaries:(id)dictionaries;
- (id)initWithPatternDictionaries:(id)dictionaries substitutionVariables:(id)variables;
- (id)_evaluateURLComponents:(id)urlcomponents auditToken:(const struct { unsigned int x0[8] } *)token;
- (id)evaluateURLComponents:(id)urlcomponents;
- (id)evaluateURLComponents:(id)urlcomponents auditToken:(struct { unsigned int x0[8] })token;
@end

#endif /* _SWCPatternMatchingEngine_h */