//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.11.1.0.0
//
#ifndef CDMTrialAssetsDelegate_Protocol_h
#define CDMTrialAssetsDelegate_Protocol_h
@import Foundation;

@protocol CDMTrialAssetsDelegate <NSObject>
/* instance methods */
- (void)assetsAvailable;
- (void)assetsAvailableForLocale:(id)locale;
- (void)assetsUnavailable;
@end

#endif /* CDMTrialAssetsDelegate_Protocol_h */