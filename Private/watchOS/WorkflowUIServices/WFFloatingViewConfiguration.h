//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFloatingViewConfiguration_h
#define WFFloatingViewConfiguration_h
@import Foundation;

@interface WFFloatingViewConfiguration : NSObject

@property (nonatomic) long long gradientDirection;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) double scalingFactor;

/* class methods */
+ (id)materialWorkflowConfiguration;
+ (id)widgetWorkflowConfiguration;
+ (id)bannerImageConfiguration;
+ (id)paletteColorConfiguration;

/* instance methods */
- (id)init;
@end

#endif /* WFFloatingViewConfiguration_h */