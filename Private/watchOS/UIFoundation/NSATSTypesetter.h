//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSATSTypesetter_h
#define NSATSTypesetter_h
@import Foundation;

#include "NSTypesetter.h"
#include "NSLayoutManager.h"
#include "NSParagraphStyle.h"
#include "NSTextContainer.h"

@class NSArray, NSAttributedString;

@interface NSATSTypesetter : NSTypesetter {
  /* instance variables */
  NSAttributedString *attributedString;
  struct _NSRange { unsigned long long location; unsigned long long length; } paragraphGlyphRange;
  struct _NSRange { unsigned long long location; unsigned long long length; } paragraphSeparatorGlyphRange;
  double lineFragmentPadding;
  NSLayoutManager *layoutManager;
  NSArray *textContainers;
  NSTextContainer *currentTextContainer;
  unsigned long long currentTextContainerIndex;
  struct CGSize { double width; double height; } currentTextContainerSize;
  NSParagraphStyle *currentParagraphStyle;
  id _private;
}

/* class methods */
+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedTypesetter;
+ (BOOL)_allowsScreenFontKerning;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_doBidiProcessing;
- (long long)_baseWritingDirection;
- (const char *)_bidiLevels;
- (struct __CTTypesetter *)_ctTypesetter;
- (id)_getATSTypesetterGuts;
- (BOOL)_baselineRenderingMode;
- (void)_setBaselineRenderingMode:(BOOL)mode;
- (BOOL)_forceWordWrapping;
- (void)_setForceWordWrapping:(BOOL)wrapping;
- (id)_textContainerForAttachmentProtocol;
- (id)_textStorageForAttachmentProtocol;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)index characterIndex:(unsigned long long *)index atPoint:(struct CGPoint { double x0; double x1; } *)point renderingContext:(id *)context;
- (void)_flushCachedObjects;
- (BOOL)_usesScreenFonts;
- (BOOL)_mirrorsTextAlignment;
- (BOOL)synchronizesAlignmentToDirection;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)index;
- (double)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:(double)factor;
- (BOOL)limitsLayoutForSuspiciousContents;
- (void)setLimitsLayoutForSuspiciousContents:(BOOL)contents;
- (unsigned long long)lineBreakStrategy;
- (void)setLineBreakStrategy:(unsigned long long)strategy;
- (id)paragraphArbitrator;
- (void)beginParagraph;
- (void)endParagraph;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)index;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)index;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x0; double x1; } *)point;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)index;
- (BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)index;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForControlGlyphAtIndex:(unsigned long long)index forTextContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment glyphPosition:(struct CGPoint { double x0; double x1; })position characterIndex:(unsigned long long)index;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)index;
- (BOOL)_isBusy;
- (void)_setBusy:(BOOL)busy;
- (void)layoutGlyphsInLayoutManager:(id)manager startingAtGlyphIndex:(unsigned long long)index maxNumberOfLineFragments:(unsigned long long)fragments nextGlyphIndex:(unsigned long long *)index;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range forLayoutManager:(id)manager maximumNumberOfLineFragments:(unsigned long long)fragments;
- (double)baselineOffsetInLayoutManager:(id)manager glyphIndex:(unsigned long long)index;
- (struct { struct  * x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; undefined * x5; undefined * x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned int x0 :4; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :2; unsigned int x11 :1; unsigned int x12 :3; unsigned int x13 :7; } x19; void * x20[0] } *)_allocateAuxData;
- (union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *)_lineFragmentRectForProposedRectArgs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect;
@end

#endif /* NSATSTypesetter_h */