//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRFTextElement_h
#define _SFPBRFTextElement_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBRFShowMoreOnTap.h"
#include "_SFPBRFTextElement-Protocol.h"

@class NSArray, NSData, NSString;

@interface _SFPBRFTextElement : PBCodable<_SFPBRFTextElement, NSSecureCoding>

@property (copy, nonatomic) NSArray *formatted_texts;
@property (nonatomic) int line_limit;
@property (retain, nonatomic) _SFPBRFShowMoreOnTap *show_more_on_tap;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (void)setFormatted_text:(id)formatted_text;
- (void)clearFormatted_text;
- (void)addFormatted_text:(id)formatted_text;
- (unsigned long long)formatted_textCount;
- (id)formatted_textAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRFTextElement_h */