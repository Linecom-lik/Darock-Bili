//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTModuleComponent_Protocol_h
#define PTModuleComponent_Protocol_h
@import Foundation;

@protocol PTModuleComponent <NSObject, NSCopying, NSSecureCoding>

@property (weak, nonatomic) NSObject<PTComponentObserver> *componentObserver;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) NSPredicate *appearancePredicate;
@property (retain, nonatomic) NSString *childSettingsKeyPath;
@property (readonly, nonatomic) NSArray *allSections;
@property (readonly, nonatomic) NSArray *enabledSections;

/* instance methods */
- (id)_remoteEditingWhitelistedComponent;
@end

#endif /* PTModuleComponent_Protocol_h */