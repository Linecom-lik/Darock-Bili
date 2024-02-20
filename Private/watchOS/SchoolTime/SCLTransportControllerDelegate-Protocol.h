//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLTransportControllerDelegate_Protocol_h
#define SCLTransportControllerDelegate_Protocol_h
@import Foundation;

@protocol SCLTransportControllerDelegate <NSObject>
/* instance methods */
- (void)transportController:(id)controller didReceiveUnlockHistoryItem:(id)item;
- (void)transportController:(id)controller didReceiveSchedule:(id)schedule forInitialSync:(BOOL)sync;
- (id)currentScheduleSettingsForTransportController:(id)controller;
@end

#endif /* SCLTransportControllerDelegate_Protocol_h */