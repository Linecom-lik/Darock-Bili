//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPGlyphStyle_h
#define LPGlyphStyle_h
@import Foundation;

#include "LPImage.h"
#include "LPImageViewStyle.h"
#include "LPPadding.h"
#include "LPPointUnit.h"

@class UIColor;

@interface LPGlyphStyle : NSObject

@property (retain, nonatomic) LPImage *image;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) LPImageViewStyle *imageStyle;
@property (retain, nonatomic) LPPointUnit *baselineOffset;
@property (retain, nonatomic) UIColor *color;

/* instance methods */
- (id)init;
- (id)initSearchGlyph;
@end

#endif /* LPGlyphStyle_h */