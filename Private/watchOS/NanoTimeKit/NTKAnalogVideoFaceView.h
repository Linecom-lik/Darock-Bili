//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAnalogVideoFaceView_h
#define NTKAnalogVideoFaceView_h
@import Foundation;

#include "NTKAnalogFaceView.h"
#include "NTKColorCircularUtilitarianFaceViewComplicationFactory.h"
#include "NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate-Protocol.h"
#include "NTKEditOptionTransitioningView.h"
#include "NTKEditOptionTransitioningViewDelegate-Protocol.h"
#include "NTKFaceViewTapControl.h"
#include "NTKVideoPlayerView.h"
#include "NTKVideoPlayerViewFaceDelegate-Protocol.h"

@class BOOL *, NSString, UIColor, UIView;

@interface NTKAnalogVideoFaceView : NTKAnalogFaceView<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, NTKVideoPlayerViewFaceDelegate, NTKEditOptionTransitioningViewDelegate> {
  /* instance variables */
  long long _previousDataMode;
  UIColor *_complicationColor;
  UIView *_backgroundContainerView;
  NTKEditOptionTransitioningView *_transitioningView;
}

@property (retain, nonatomic) NTKVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) NTKColorCircularUtilitarianFaceViewComplicationFactory *faceViewComplicationFactory;
@property (retain, nonatomic) NTKFaceViewTapControl *faceTapControl;
@property (nonatomic) struct CGSize { double x0; double x1; } videoDialSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isRichComplicationsEnabled;
+ (long long)uiSensitivity;

/* instance methods */
- (id)initWithFaceStyle:(long long)style forDevice:(id)device clientIdentifier:(id)identifier;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)setNormalComplicationDisplayWrapper:(id)wrapper forSlot:(id)slot;
- (id)_newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)type slot:(id)slot;
- (void)_configureComplicationView:(id)view forSlot:(id)slot;
- (id)_detachedComplicationDisplays;
- (void)_loadLayoutRules;
- (double)_keylineCornerRadiusForComplicationSlot:(id)slot;
- (double)keylineStyleForComplicationSlot:(id)slot;
- (BOOL)_fadesComplicationSlot:(id)slot inEditMode:(long long)mode;
- (double)_minimumBreathingScaleForComplicationSlot:(id)slot;
- (void)setDataMode:(long long)mode;
- (void)_applyDataMode;
- (void)layoutSubviews;
- (void)setupVideoPlayerView;
- (void)_customizeVideoPlayerOnSetup;
- (void)_setVideoPlayerDataSource:(id)source;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(BOOL)orb;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleEitherScreenWake;
- (void)screenDidTurnOffAnimated:(BOOL)animated;
- (void)faceViewWasTapped:(id)tapped;
- (void)_faceViewWasTapped;
- (id)_tapHighlightImage;
- (void)_configureTimeView:(id)view;
- (BOOL)slotUsesCurvedText:(id)text;
- (BOOL)_slotSupportsCurvedText:(id)text;
- (void)_curvedComplicationCircleRadius:(double *)radius centerAngle:(double *)angle maxAngularWidth:(double *)width circleCenter:(struct CGPoint { double x0; double x1; } *)center interior:(BOOL *)interior forSlot:(id)slot;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (void)_faceLibraryDismissed;
- (id)_complicationsPlatterColor;
- (id)_complicationsCompanionForegroundColor;
- (id)_complicationsForegroundColor;
- (id)_complicationsEditingColor;
- (id)_complicationsTapColor;
- (BOOL)_shouldAnimateComplicationsOnTap;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_setupTransitioningViewIfNeeded:(BOOL)needed;
- (void)_tearDownTransitioningView:(BOOL)view;
- (void)_cleanupAfterTransitionComplicationSlot:(id)slot selectedComplication:(id)complication;
- (void)_applyOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyTransitionFraction:(double)fraction fromOption:(id)option toOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_cleanupAfterTransitionToOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_configureForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_applyBreathingFraction:(double)fraction forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyRubberBandingFraction:(double)fraction forCustomEditMode:(long long)mode slot:(id)slot;
- (long long)_complicationPickerStyleForSlot:(id)slot;
- (id)imageForEditOption:(id)option;
- (BOOL)shouldFadeIncomingView;
- (long long)_keylineStyleForComplicationSlot:(id)slot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)slot selected:(BOOL)selected;
- (BOOL)_supportsUnadornedSnapshot;
- (void)videoDidFinishPlayingToEnd;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)customizeFaceViewForListing:(id)listing changeEvent:(unsigned long long)event animated:(BOOL)animated;
- (void)_transformVideoPlayerView:(unsigned long long)view;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForDialSize:(struct CGSize { double x0; double x1; })size;
- (long long)_utilitySlotForSlot:(id)slot;
- (id)_slotForUtilitySlot:(long long)slot;
- (double)_handAlphaForEditMode:(long long)mode;
- (double)_contentAlphaForEditMode:(long long)mode;
- (double)_complicationAlphaForEditMode:(long long)mode;
- (void)tritium_fakeActiveStateWithPosterImage:(id)image;
@end

#endif /* NTKAnalogVideoFaceView_h */