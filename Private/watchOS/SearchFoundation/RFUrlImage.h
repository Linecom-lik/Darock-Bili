//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef RFUrlImage_h
#define RFUrlImage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RFAspectRatio.h"
#include "RFSymbolImage.h"
#include "RFUrlImage-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface RFUrlImage : NSObject<RFUrlImage, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 symbol_placeholder_image; unsigned int x :1 image_style; unsigned int x :1 sizing_mode; unsigned int x :1 image_rendering_mode; } _has;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *dark_mode_url;
@property (retain, nonatomic) RFSymbolImage *symbol_placeholder_image;
@property (nonatomic) int image_style;
@property (retain, nonatomic) RFAspectRatio *aspect_ratio;
@property (nonatomic) int sizing_mode;
@property (nonatomic) int image_rendering_mode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasSymbol_placeholder_image;
- (BOOL)hasImage_style;
- (BOOL)hasSizing_mode;
- (BOOL)hasImage_rendering_mode;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* RFUrlImage_h */