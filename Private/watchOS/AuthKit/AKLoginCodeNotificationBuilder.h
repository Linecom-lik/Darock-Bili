//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKLoginCodeNotificationBuilder_h
#define AKLoginCodeNotificationBuilder_h
@import Foundation;

@interface AKLoginCodeNotificationBuilder : NSObject
/* class methods */
+ (struct __CFUserNotification *)buildLoginCodeNotificationWithTitle:(id)title body:(id)body footer:(id)footer loginCode:(id)code;
+ (id)buildLoginCodeNotificationOptionsWithTitle:(id)title body:(id)body footer:(id)footer loginCode:(id)code;
@end

#endif /* AKLoginCodeNotificationBuilder_h */