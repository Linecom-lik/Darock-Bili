//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef NSURL_DoNotDisturb_h
#define NSURL_DoNotDisturb_h
@import Foundation;

@interface NSURL (DoNotDisturb)
/* class methods */
+ (id)dnd_defaultSettingsURL;
+ (id)dnd_defaultSetupURL;
+ (id)dnd_setupURLWithSemanticType:(long long)type;
+ (id)dnd_settingsURLWithModeIdentifier:(id)identifier;
@end

#endif /* NSURL_DoNotDisturb_h */