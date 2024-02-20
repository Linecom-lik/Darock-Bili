//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedString_h
#define GEOComposedString_h
@import Foundation;

#include "GEOComposedString.h"
#include "GEOComposedStringCondition.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface GEOComposedString : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSArray *_formatStrings;
  NSArray *_arguments;
  NSArray *_separators;
  NSArray *_formatStyles;
  GEOComposedString *_alternativeString;
  GEOComposedStringCondition *_alternativeStringCondition;
}

@property (readonly, nonatomic) BOOL isPrivate;

/* class methods */
+ (id)localizationProvider;
+ (void)setLocalizationProvider:(id)provider;
+ (BOOL)hasLocalizationProvider;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGeoFormattedString:(id)string;
- (id)initWithString:(id)string;
- (id)defaultOptions;
- (id)optionsWithArgumentHandler:(id /* block */)handler;
- (id)stringResultWithOptions:(id)options;
- (id)stringWithOptions:(id)options;
- (id)stringWithDefaultOptions;
- (id)composedStringWithOptions:(id)options;
- (id)_stringResultWithOptions:(id)options isFinalString:(BOOL)string;
- (id)_stringForStrings:(id)strings joinedBySeparators:(id)separators;
- (void)_updateForFormatStylesInString:(id)string options:(id)options;
- (BOOL)_updateString:(id)string withArgument:(id)argument options:(id)options results:(id)results isFinalString:(BOOL)string;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* GEOComposedString_h */