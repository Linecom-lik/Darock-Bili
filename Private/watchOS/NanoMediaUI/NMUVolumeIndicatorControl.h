//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUVolumeIndicatorControl_h
#define NMUVolumeIndicatorControl_h
@import Foundation;

#include "UIControl.h"
#include "MPVolumeControllerDelegate-Protocol.h"
#include "NACVolumeControllerDelegate-Protocol.h"
#include "NMUVolumeIndicatorControlDelegate-Protocol.h"
#include "NMUVolumeRevealController.h"
#include "NMUVolumeRevealControllerDelegate-Protocol.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"

@class CABackdropLayer, CALayer, NSArray, NSString, NSTimer, PUICCrownInputSequencer, UIColor, UIImage, UIImageView, UIView;

@interface NMUVolumeIndicatorControl : UIControl<NACVolumeControllerDelegate, PUICCrownInputSequencerDelegate, NMUVolumeRevealControllerDelegate, MPVolumeControllerDelegate> {
  /* instance variables */
  NSArray *_deviceOrientationLayoutConstraints;
  UIImageView *_iconView;
  UIImage *_volumeIndicatorHighImage;
  UIImage *_volumeIndicatorMediumImage;
  UIImage *_volumeIndicatorLowImage;
  UIImage *_volumeIndicatorMutedImage;
  UIImage *_volumeIndicatorIconImage;
  UIView *_trackView;
  UIView *_progressView;
  CALayer *_gaugeWarningLayer;
  UIColor *_colorEULimit;
  NSTimer *_timer;
  PUICCrownInputSequencer *_crownInputSequencer;
  unsigned long long _viewState;
  float _lastIdleVolumeValue;
  NMUVolumeRevealController *_revealController;
  CALayer *_backgroundLayer;
  CABackdropLayer *_backdropLayer;
  UIView *_backdropEventsView;
}

@property (nonatomic) float minimumVolume;
@property (nonatomic) float maximumVolume;
@property (readonly, nonatomic) BOOL volumeControlAvailable;
@property (nonatomic) float volume;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic) double screenSpaceMultiplierFactor;
@property (nonatomic) BOOL requiresRevealingBeforeAdjusting;
@property (nonatomic) BOOL fullScreenEffectsEnabled;
@property (weak, nonatomic) NSObject<NMUVolumeIndicatorControlDelegate> *delegate;
@property (retain, nonatomic) id volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;
- (id)standardLayoutConstraintsWithSuperview:(id)superview;
- (void)configureWithCrownVisibilityView:(id)view;
- (void)volumeControllerDidUpdateVolumeValue:(id)value;
- (void)volumeControllerDidUpdateVolumeControlAvailibility:(id)availibility;
- (void)volumeControllerDidUpdateEUVolumeLimit:(id)limit;
- (void)volumeControllerDidUpdateVolumeWarningEnabled:(id)enabled;
- (void)volumeControllerDidUpdateVolumeWarningState:(id)state;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (void)controller:(id)controller didUpdateRevealProgress:(double)progress;
- (void)controllerWillBeginRevealing:(id)revealing;
- (void)controllerDidEndRevealing:(id)revealing;
- (void)controllerWillBeginReceding:(id)receding;
- (void)controllerDidEndReceding:(id)receding;
- (void)volumeController:(id)controller volumeControlAvailableDidChange:(BOOL)change;
- (void)volumeController:(id)controller volumeValueDidChange:(float)change;
- (void)volumeController:(id)controller volumeWarningStateDidChange:(long long)change;
- (void)volumeController:(id)controller EUVolumeLimitDidChange:(float)change;
- (BOOL)canBecomeFirstResponder;
- (void)_wheelChangedWithEvent:(id)event;
- (void)_updateActiveDeviceOrientationLayoutConstraints;
- (void)_handleDeviceOrientationInvertedDidChangeNotification:(id)notification;
- (double)_crownInputSequencerStart;
- (double)_crownInputSequencerEnd;
- (BOOL)_crownInputSequencerMinorDetentsEnabledForVolumeValue:(float)value;
- (BOOL)_hasReachedEUVolumeLimitForVolumeValue:(float)value;
- (void)_nacVolumeControllerDidUpdate;
- (void)_updateView;
- (double)_crownInputSequencerScreenSpaceMultiplier;
- (float)_normalizedVolumeValue;
- (void)_ensureValidCrownInputSequencerOffset:(id)offset;
- (id)_iconImageForCurrentVolume;
- (void)_updateIconImage;
- (struct CGSize { double x0; double x1; })_largestIconSize;
- (void)_updateColors;
- (void)_updateWithRevealProgress:(double)progress;
- (void)_handleBackdropTapGesture:(id)gesture;
- (void)_updateEUVolumeLimitWarningLayerWithNormalizedVolumeValue:(float)value;
- (void)_setViewState:(unsigned long long)state animated:(BOOL)animated;
- (void)_controlTapped:(id)tapped;
- (void)_setGaugeVisible:(BOOL)visible animated:(BOOL)animated;
- (void)_startTimerWithDuration:(double)duration;
- (void)_invalidateTimer;
- (void)_releaseNACVolumeController;
- (BOOL)isVolumeControlAvailable;
@end

#endif /* NMUVolumeIndicatorControl_h */