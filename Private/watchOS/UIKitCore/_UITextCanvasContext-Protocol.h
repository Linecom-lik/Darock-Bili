//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextCanvasContext_Protocol_h
#define _UITextCanvasContext_Protocol_h
@import Foundation;

@protocol _UITextCanvasContext <NSObject>

@property (readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } textContainerOrigin;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIScrollView *enclosingScrollView;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } drawingScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _clipRectForFadedEdges;

/* instance methods */
- (void)textContainerUsageDidChangeToSize:(struct CGSize { double x0; double x1; })size;
- (void)didAddTextAttachmentViews:(id)views;
- (void)didRemoveTextAttachmentViews:(id)views;
- (void)didLayoutTextAttachmentView:(id)view inFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)drawTextInRectIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })needed;
- (BOOL)isEditable;
@end

#endif /* _UITextCanvasContext_Protocol_h */