//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLHapticCrownDetentConfiguration_h
#define CSLHapticCrownDetentConfiguration_h
@import Foundation;

@interface CSLHapticCrownDetentConfiguration : NSObject

@property (nonatomic) long long detentType;
@property (nonatomic) long long audioType;
@property (nonatomic) double audioGain;
@property (nonatomic) double strongAudioGain;
@property (nonatomic) long long hapticType;
@property (nonatomic) double hapticGain;
@property (nonatomic) double strongHapticGain;
@property (nonatomic) long long hapticTypeForGain;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (long long)stringToAssetType:(id)type;
- (id)description;
- (id)debugDescription;
- (void)_buildDescriptionWithBuilder:(id)builder;
@end

#endif /* CSLHapticCrownDetentConfiguration_h */