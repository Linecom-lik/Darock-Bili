//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScreen_h
#define UIScreen_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "UICoordinateSpace-Protocol.h"
#include "UIFocusEnvironment-Protocol.h"
#include "UIFocusItem-Protocol.h"
#include "UIFocusItemContainer-Protocol.h"
#include "UIFocusSystem.h"
#include "UIScreen.h"
#include "UIScreenMode.h"
#include "UISoftwareDimmingWindow.h"
#include "UITraitCollection.h"
#include "UITraitEnvironment-Protocol.h"
#include "UIView.h"
#include "UIWindow.h"
#include "_UIDisplayInfoProviding-Protocol.h"
#include "_UIFallbackEnvironment-Protocol.h"
#include "_UIFocusEnvironmentInternal-Protocol.h"
#include "_UIFocusEnvironmentPrivate-Protocol.h"
#include "_UIFocusRegionContainer-Protocol.h"
#include "_UIOrientationDebugDescriptionProviding-Protocol.h"
#include "_UIScreenBoundingPathUtilities.h"
#include "_UIScreenFixedCoordinateSpace.h"
#include "_UITraitEnvironmentInternal-Protocol.h"

@class BKSHIDEventDisplay, FBSDisplayConfiguration, NSArray, NSDictionary, NSMutableSet, NSString, UISDisplayContext;
@protocol UIWindow<UIFocusEnvironment;

@interface UIScreen : NSObject<_UIOrientationDebugDescriptionProviding, _UIFallbackEnvironment, UICoordinateSpace, BSDebugDescriptionProviding, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unjailedReferenceBounds;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _referenceBounds;
  long long _interfaceOrientation;
  long long _gamut;
  long long _userInterfaceIdiom;
  UISDisplayContext *_initialDisplayContext;
  NSDictionary *_capabilities;
  NSArray *_availableDisplayModes;
  double _pointsPerInch;
  double _nativePointsPerMillimeter;
  NSObject<_UIDisplayInfoProviding> *_displayInfoProvider;
  FBSDisplayConfiguration *__displayConfiguration;
  BKSHIDEventDisplay *__eventDisplay;
  long long _screenType;
  struct { unsigned int x :4 bitsPerComponent; unsigned int x :1 initialized; unsigned int x :1 connected; unsigned int x :1 needsDisconnection; unsigned int x :1 hasSetOverscanCompensation; unsigned int x :2 overscanCompensation; unsigned int x :1 wantsWideContentMargins; unsigned int x :1 queriedDeviceContentMargins; unsigned int x :1 hasCalculatedPointsPerInch; unsigned int x :1 rightHandDrive; unsigned int x :1 carPlayNightModeEnabled; unsigned int x :1 isUpdatingInterfaceOrientation; } _screenFlags;
  struct { unsigned int x :1 isKnown; unsigned int x :1 isSupported; unsigned int x :1 isInRange; } _carPlayHumanPresenceStatus;
  BOOL _performingSystemSnapshot;
  float _lastNotifiedBacklightLevel;
  NSMutableSet *_disconnectionPreventionAssertions;
  UISoftwareDimmingWindow *_softwareDimmingWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic) float _lastNotifiedBacklightLevel;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) BOOL captured;
@property (retain, nonatomic) UITraitCollection *defaultTraitCollection;
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection;
@property (retain, nonatomic) UITraitCollection *lastNotifiedTraitCollection;
@property (nonatomic) BOOL _UIIBAlwaysProvidePeripheryInsets;
@property (retain, nonatomic) _UIScreenBoundingPathUtilities *boundingPathUtilities;
@property (readonly, nonatomic) double _displayCornerRadiusIgnoringZoom;
@property (nonatomic) BOOL mainScreen;
@property (readonly, nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property (nonatomic) BOOL _performingSystemSnapshot;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _referenceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) double scale;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic) UIScreenMode *preferredMode;
@property (retain, nonatomic) UIScreenMode *currentMode;
@property (nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overscanCompensationInsets;
@property (readonly, nonatomic) UIScreen *mirroredScreen;
@property (nonatomic) double brightness;
@property (nonatomic) BOOL wantsSoftwareDimming;
@property (readonly) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly) NSObject<UICoordinateSpace> *fixedCoordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nativeBounds;
@property (readonly, nonatomic) double nativeScale;
@property (readonly) long long maximumFramesPerSecond;
@property (readonly, nonatomic) double calibratedLatency;
@property (readonly, nonatomic) long long referenceDisplayModeStatus;
@property (readonly, nonatomic) double currentEDRHeadroom;
@property (readonly, nonatomic) double potentialEDRHeadroom;
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *focusedItem;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly, nonatomic) BOOL supportsFocus;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } applicationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

/* class methods */
+ (void)initialize;
+ (id)mainScreen;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForScreenOriginRotation:(double)rotation;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToRotateScreen:(double)screen;
+ (void)_enumerateScreensWithBlock:(id /* block */)block;
+ (id)screens;
+ (id)_carScreen;
+ (id)_screenWithFBSDisplayIdentity:(id)identity;
+ (id)_screenWithDisplayName:(id)name;
+ (id)_screenWithEventDisplay:(id)display;
+ (id)_screenWithIntegerDisplayID:(unsigned int)id;
+ (id)_embeddedScreen;
+ (void)_prepareScreensForAppResume;
+ (void)_FBSDisplayDidPossiblyConnect:(id)connect;
+ (void)_FBSDisplayDidPossiblyConnect:(id)connect withScene:(id)scene;
+ (id)_screenForScene:(id)scene;
+ (void)_FBSDisplayDidPossiblyConnect:(id)connect withScene:(id)scene andPost:(BOOL)post;
+ (void)_FBSDisplayConfigurationConnected:(id)connected forInitialDisplayContext:(id)context andNotify:(BOOL)notify forceMain:(BOOL)main;
+ (void)_FBSDisplayConfigurationConnected:(id)connected andNotify:(BOOL)notify forceMain:(BOOL)main;
+ (void)_FBSDisplayConfigurationConnected:(id)connected andNotify:(BOOL)notify;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)disconnect;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)disconnect forSceneDestruction:(id)destruction;
+ (void)_FBSDisplayIdentityDisconnected:(id)disconnected;
+ (BOOL)_isProbablyBeingRecorded;
+ (BOOL)_shouldDisableJail;
+ (id)_mainScreenThreadSafeTraitCollection;
+ (id)__displayConfigurationsForViewService;
+ (id)_shortScreensDescription;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point toView:(id)view;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point fromView:(id)view;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toView:(id)view;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromView:(id)view;
+ (BOOL)_supportsInvalidatingFocusCache;

/* instance methods */
- (void *)_fallbackTraitCollection;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)prefix;
- (id)_orientationDebugDescription;
- (id)snapshotViewAfterScreenUpdates:(BOOL)updates;
- (id)snapshotView;
- (id)snapshot;
- (BOOL)_wantsWideContentMargins;
- (id)initWithDisplayConfiguration:(id)configuration;
- (id)initWithDisplayConfiguration:(id)configuration forceMainScreen:(BOOL)screen;
- (void)_invalidate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_capturedStateUpdated:(BOOL)updated;
- (void)_updateTraitsForWindowScenesCallingParentWillTransition:(BOOL)transition;
- (void)_updateAvailableDisplayModes;
- (id)displayIdentity;
- (void)_updateDisplayConfiguration:(id)configuration;
- (BOOL)_hasWindows;
- (BOOL)_isOverscanned;
- (long long)_interfaceOrientation;
- (void)_setInterfaceOrientation:(long long)orientation;
- (void)_setInterfaceOrientation:(long long)orientation andNotify:(BOOL)notify;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)orientation usingStatusbarHeight:(double)height ignoreStatusBar:(BOOL)bar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)orientation usingStatusbarHeight:(double)height ignoreStatusBar:(BOOL)bar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)orientation usingStatusbarHeight:(double)height;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)orientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneReferenceBounds;
- (BOOL)_isRotatable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideReferenceBounds;
- (void)_computeMetrics:(BOOL)metrics;
- (void)_computeMetrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsInPixels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)orientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForInterfaceOrientation:(long long)orientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneBoundsForInterfaceOrientation:(long long)orientation;
- (id)_boundingPathUtilities;
- (id)_displayInfoProvider;
- (id)_exclusionArea;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_displayPeripheryInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_peripheryInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_interfaceOrientedMainSceneBounds;
- (long long)_screenType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrame;
- (double)_touchRadiusScaleFactor;
- (double)_rotation;
- (long long)_imageOrientation;
- (double)_refreshRate;
- (long long)_maximumFramesPerSecond;
- (double)_latency;
- (int)bitsPerComponent;
- (void)setBitsPerComponent:(int)component;
- (unsigned int)_integerDisplayID;
- (unsigned int)_seed;
- (id)_name;
- (BOOL)_isExternal;
- (BOOL)_isEmbeddedScreen;
- (BOOL)_isMainLikeScreen;
- (BOOL)_isMainScreen;
- (BOOL)_isCarScreen;
- (BOOL)_isCarInstrumentsScreen;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (BOOL)_supportsCarPlayHumanPresence;
- (BOOL)_isCarPlayHumanPresenceInRange;
- (void)_setCarPlayHumanPresenceInRange:(BOOL)range;
- (BOOL)_expectsSecureRendering;
- (void)_prepareForWindow;
- (id)displayLinkWithTarget:(id)target selector:(SEL)selector;
- (void)_setReferenceDisplayModeStatus:(long long)status;
- (double)_scale;
- (id)valueForKey:(id)key;
- (void)_setScale:(double)scale;
- (double)_maximumSupportedScale;
- (long long)gamut;
- (void)_ensureComputedMainScreenDPI;
- (double)_pointsPerInch;
- (double)_nativePointsPerMillimeter;
- (BOOL)_isValidInterfaceOrientation:(long long)orientation;
- (void)_connectScreen;
- (void)_disconnectScreen;
- (void)_setInitialDisplayContext:(id)context;
- (void)_resetUserInterfaceIdiom;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (void)_setUserInterfaceIdiom:(long long)idiom;
- (unsigned long long)_artworkSubtype;
- (void)_updateCapabilities;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point toCoordinateSpace:(id)space;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point fromCoordinateSpace:(id)space;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toCoordinateSpace:(id)space;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect fromCoordinateSpace:(id)space;
- (id)_traitTrace:(id)trace;
- (id)_traitTrace;
- (id)_traitCollectionForChildEnvironment:(id)environment;
- (void)traitCollectionDidChange:(id)change;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)orientation;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)orientation inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (long long)_effectiveUserInterfaceStyle;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)orientation inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_updateTraits;
- (void)_setDefaultTraitCollection:(id)collection;
- (void)_setOverrideTraitCollection:(id)collection;
- (void)_notifyTraitsChangedAndPropagate;
- (id)_capabilities;
- (id)_capabilityForKey:(id)key;
- (void)_setCapability:(id)capability forKey:(id)key;
- (double)_traitCollectionDisplayCornerRadius;
- (double)_displayCornerRadius;
- (void)_setExternalDeviceShouldInputText:(BOOL)text;
- (id)fbsDisplay;
- (id)_displayID;
- (id)_eventDisplay;
- (BOOL)_isWorkspaceCapable;
- (BOOL)_isSoftKeyboardLimited;
- (BOOL)_areMusicListsLimited;
- (BOOL)_areListsLimited;
- (BOOL)_isCarPlayNightModeEnabled;
- (BOOL)_isRightHandDrive;
- (id)_display;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneFrame;
- (id)_lazySoftwareDimmingWindow;
- (float)rawBrightnessForBacklightLevel:(float)level;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_endObservingBacklightLevelNotifications;
- (BOOL)_supportsBrightness;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)_snapshotExcludingWindows:(id)windows withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeDisplayBounds;
- (double)_nativeScaleWithLevel:(unsigned long long)level;
- (double)_nativeScale;
- (void)_accessibilityForceTouchEnabledChanged:(id)changed;
- (void)_accessibilityBoldTextChanged:(id)changed;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)changed;
- (void)_accessibilityTraitFlagsChanged:(id)changed;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)changed;
- (id)_preferredFocusedWindowScene;
- (id)_focusScrollManager;
- (id)_focusMovementPerformer;
- (id)_focusSystemManager;
- (id)_focusSystem;
- (BOOL)_isFocusSystemLoaded;
- (void)setFocusEnabled:(BOOL)enabled;
- (BOOL)_supportsDeferredFocus;
- (id)_focusMapContainer;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (void)_setNeedsNonDeferredFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)context;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)context;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_defaultTraitCollection;
- (id)_overrideTraitCollection;
- (id)_lastNotifiedTraitCollection;
- (void)_setLastNotifiedTraitCollection:(id)collection;
- (BOOL)_isPerformingSystemSnapshot;
- (void)_setPerformingSystemSnapshot:(BOOL)snapshot;
- (void)_setSoftwareDimmingWindow:(id)window;
- (void)_setLastNotifiedBacklightLevel:(float)level;
- (BOOL)isCaptured;
- (void)_setCaptured:(BOOL)captured;
- (void)_setUIIBAlwaysProvidePeripheryInsets:(BOOL)insets;
- (void)_setBoundingPathUtilities:(id)utilities;
- (void)_setMainScreen:(BOOL)screen;
- (void)_setFocusedWindow:(id)window;
@end

#endif /* UIScreen_h */