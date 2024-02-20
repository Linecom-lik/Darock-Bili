//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REScriptProcessor_h
#define REScriptProcessor_h
@import Foundation;

#include "REBacktrackingTokenBuffer-Protocol.h"
#include "REScriptBuffer-Protocol.h"
#include "REScriptParser.h"
#include "REScriptParserDelegate-Protocol.h"
#include "REScriptSymbolTable.h"
#include "REScriptTokenizer.h"
#include "REScriptTokenizerDelegate-Protocol.h"

@class NSString;

@interface REScriptProcessor : NSObject<REScriptTokenizerDelegate, REScriptParserDelegate> {
  /* instance variables */
  NSString *_path;
  NSObject<REScriptBuffer> *_buffer;
  REScriptTokenizer *_tokenizer;
  NSObject<REBacktrackingTokenBuffer> *_tokenStack;
  REScriptParser *_parser;
  REScriptSymbolTable *_table;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)processorWithSource:(id)source;
+ (id)processorWithPath:(id)path;
+ (id)_sharedSystemTable;

/* instance methods */
- (id)initWithScriptBuffer:(id)buffer path:(id)path;
- (id)rulesWithNames:(id)names;
- (id)featuresWithNames:(id)names;
- (id)rules;
- (id)features;
- (void)_process;
- (void)_encounteredError:(id)error;
- (void)tokenizer:(id)tokenizer didEncouterTokenError:(id)error;
- (void)parser:(id)parser didEncouterParserError:(id)error;
@end

#endif /* REScriptProcessor_h */