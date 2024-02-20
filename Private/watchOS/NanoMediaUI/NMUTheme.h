//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUTheme_h
#define NMUTheme_h
@import Foundation;

@interface NMUTheme : NSObject
/* class methods */
+ (id)downloadCloudImage;
+ (id)downloadWaitingSpinnerImage;
+ (id)downloadProgressIndicatorShadowImage;
+ (id)screenEdgeVignetteImage;
+ (id)nowPlayingNoteImage;
+ (id)artworkViewPlaceholderBackgroundColor;
+ (id)downloadContentFromPhoneImage;
+ (id)_cachedObjectForKey:(id)key withCreationBlock:(id /* block */)block;
+ (id)_imageNamed:(id)named;
@end

#endif /* NMUTheme_h */