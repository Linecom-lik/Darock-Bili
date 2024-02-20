//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDynamicItemBehavior_h
#define UIDynamicItemBehavior_h
@import Foundation;

#include "UIDynamicBehavior.h"

@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior : UIDynamicBehavior {
  /* instance variables */
  BOOL _useDefaultViewPropertiesApplier;
  struct { unsigned int x :1 elasticityChanged; unsigned int x :1 frictionChanged; unsigned int x :1 densityChanged; unsigned int x :1 resistanceChanged; unsigned int x :1 angularResistanceChanged; unsigned int x :1 rotationEnabledChanged; unsigned int x :1 useDefaultViewPropertiesApplierChanged; unsigned int x :1 chargeChanged; unsigned int x :1 dynamicChanged; } _stateFlags;
  NSMapTable *_cachedAngularVelocities;
  NSMapTable *_cachedLinearVelocities;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) double elasticity;
@property (nonatomic) double friction;
@property (nonatomic) double density;
@property (nonatomic) double resistance;
@property (nonatomic) double angularResistance;
@property (nonatomic) double charge;
@property (nonatomic) BOOL anchored;
@property (nonatomic) BOOL allowsRotation;

/* class methods */
+ (BOOL)_isPrimitiveBehavior;

/* instance methods */
- (id)init;
- (id)initWithItems:(id)items;
- (void)_configureBody:(id)body forView:(id)view;
- (void)addItem:(id)item;
- (void)removeItem:(id)item;
- (void)addLinearVelocity:(struct CGPoint { double x0; double x1; })velocity forItem:(id)item;
- (struct CGPoint { double x0; double x1; })linearVelocityForItem:(id)item;
- (void)_setPosition:(struct CGPoint { double x0; double x1; })position forItem:(id)item;
- (struct CGPoint { double x0; double x1; })_positionForItem:(id)item;
- (void)_setAngle:(double)angle forItem:(id)item;
- (double)_angleForItem:(id)item;
- (void)addAngularVelocity:(double)velocity forItem:(id)item;
- (double)angularVelocityForItem:(id)item;
- (double)_elasticityForItem:(id)item;
- (double)_frictionForItem:(id)item;
- (double)_densityForItem:(id)item;
- (double)_resistanceForItem:(id)item;
- (double)_angularResistanceForItem:(id)item;
- (double)_massForItem:(id)item;
- (BOOL)_rotationEnabledForItem:(id)item;
- (void)applyImpulse:(struct CGPoint { double x0; double x1; })impulse toItem:(id)item;
- (void)_reevaluate:(unsigned long long)_reevaluate;
- (void)_associate;
- (void)_dissociate;
- (BOOL)useDefaultViewPropertiesApplier;
- (void)setUseDefaultViewPropertiesApplier:(BOOL)applier;
- (id)description;
- (BOOL)isAnchored;
@end

#endif /* UIDynamicItemBehavior_h */