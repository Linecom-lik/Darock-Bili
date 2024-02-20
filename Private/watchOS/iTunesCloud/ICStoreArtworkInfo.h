//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStoreArtworkInfo_h
#define ICStoreArtworkInfo_h
@import Foundation;

#include "ICStoreArtworkGradientInfo.h"
#include "ICStoreArtworkSizeInfo.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface ICStoreArtworkInfo : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSArray *sortedResponseArray;
@property (copy, nonatomic) NSArray *sortedSupportedSizesArray;
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSArray *responseArray;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) ICStoreArtworkSizeInfo *sizeInfo;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (readonly, nonatomic) ICStoreArtworkGradientInfo *gradientInfo;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) unsigned long long imageTraits;
@property (readonly, nonatomic) NSArray *textGradient;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithArtworkResponseArray:(id)array;
- (id)initWithArtworkResponseDictionary:(id)dictionary;
- (id)initWithArtworkURL:(id)url;
- (id)initWithArtworkResponseValue:(id)value;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })size cropStyle:(id)style format:(id)format;
- (id)artworkURLWithSize:(struct CGSize { double x0; double x1; })size cropStyle:(id)style format:(id)format preferP3ColorSpace:(BOOL)space;
- (struct CGColor *)copyColorWithKind:(id)kind;
- (struct CGColor *)colorFromStringRepresentation:(id)representation;
- (void)_sortResponseArray;
- (void)_sortSupportedSizesArray;
- (BOOL)_hasOriginalSize;
@end

#endif /* ICStoreArtworkInfo_h */