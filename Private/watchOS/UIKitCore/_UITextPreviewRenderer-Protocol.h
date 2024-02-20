//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextPreviewRenderer_Protocol_h
#define _UITextPreviewRenderer_Protocol_h
@import Foundation;

@protocol _UITextPreviewRenderer <NSObject>

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;

/* instance methods */
- (void)addRenderingAttributes:(id)attributes;
- (void)removeRenderingAttributes:(id)attributes;
@end

#endif /* _UITextPreviewRenderer_Protocol_h */