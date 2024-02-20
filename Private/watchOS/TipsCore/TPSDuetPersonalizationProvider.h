//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSDuetPersonalizationProvider_h
#define TPSDuetPersonalizationProvider_h
@import Foundation;

@interface TPSDuetPersonalizationProvider : NSObject
/* class methods */
+ (id)personalizedStringsForType:(long long)type error:(id *)error;
+ (id)personalizedStringsForType:(long long)type count:(unsigned long long)count error:(id *)error;
+ (id)_personalizedStringsForType:(long long)type count:(unsigned long long)count duetDataProvider:(id)provider error:(id *)error;
+ (id)nameFromRecipients:(id)recipients;
+ (id)contactFromIntentForSiriTipSendMessage:(id)message;
+ (id)contactFromIntentSiriTipStartCall:(id)call;
@end

#endif /* TPSDuetPersonalizationProvider_h */