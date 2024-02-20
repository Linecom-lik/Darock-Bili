//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBUndoInteractionHUD_h
#define UIKBUndoInteractionHUD_h
@import Foundation;

#include "UIView.h"
#include "UIKBUndoControl.h"
#include "UIKBUndoStyling.h"
#include "UILabel.h"
#include "UIView.h"
#include "UIVisualEffectView.h"

@class NSDate;
@protocol UIInteractiveUndoHUDActionDelegate;

@interface UIKBUndoInteractionHUD : UIView

@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIVisualEffectView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (retain, nonatomic) UIKBUndoControl *leftButtonView;
@property (retain, nonatomic) UIKBUndoControl *rightButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCutButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCopyButtonView;
@property (retain, nonatomic) UIKBUndoControl *aPasteButtonView;
@property (retain, nonatomic) UILabel *instructionalLabel;
@property (retain, nonatomic) NSDate *appearanceDate;
@property (nonatomic) long long mode;
@property (weak, nonatomic) NSObject<UIInteractiveUndoHUDActionDelegate> *actionDelegate;

/* instance methods */
- (id)initWithKeyboardAppearance:(long long)appearance isRTL:(BOOL)rtl mode:(long long)mode sceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)createSeparatorView;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)controlForType:(long long)type;
- (BOOL)availableOfControl:(id)control;
- (void)willMoveToWindow:(id)window;
- (void)updateHUDControlState;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)controlActionDown:(id)down;
- (void)controlActionUpInside:(id)inside forEvent:(id)event;
- (void)controlActionUpOutside:(id)outside;
- (void)updateControlWithDirection:(long long)direction travelProgress:(double)progress isRTL:(BOOL)rtl;
@end

#endif /* UIKBUndoInteractionHUD_h */