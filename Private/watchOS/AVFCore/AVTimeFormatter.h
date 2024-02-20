//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVTimeFormatter_h
#define AVTimeFormatter_h
@import Foundation;

#include "NSFormatter.h"
#include "AVTimeFormatterInternal.h"

@interface AVTimeFormatter : NSFormatter {
  /* instance variables */
  AVTimeFormatterInternal *_internal;
}

@property (nonatomic) long long style;
@property (nonatomic) double formatTemplate;
@property (nonatomic) BOOL fullWidth;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)stringFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })cmtime;
- (id)stringFromSeconds:(double)seconds;
- (id)stringFromTimeInterval:(double)interval;
- (id)stringForObjectValue:(id)value;
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;
- (BOOL)isFullWidth;
- (id)locale;
- (void)setLocale:(id)locale;
- (BOOL)isRightToLeft;
- (void)setIsRightToLeft:(BOOL)left;
- (id)cachedDateFormatterFormat;
- (void)setCachedDateFormatterFormat:(id)format;
- (id)cachedDateFormatterTemplate;
- (void)setCachedDateFormatterTemplate:(id)template;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)digits;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)digits;
@end

#endif /* AVTimeFormatter_h */