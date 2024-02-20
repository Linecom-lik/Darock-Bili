//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFClockTimerMutating_Protocol_h
#define AFClockTimerMutating_Protocol_h
@import Foundation;

@protocol AFClockTimerMutating <NSObject>
/* instance methods */
- (void)setTimerID:(id)id;
- (void)setTimerURL:(id)url;
- (void)setIsFiring:(BOOL)firing;
- (void)setTitle:(id)title;
- (void)setState:(long long)state;
- (void)setDuration:(double)duration;
- (void)setType:(long long)type;
- (void)setFireTimeInterval:(double)interval;
- (void)setFireDate:(id)date;
- (void)setFiredDate:(id)date;
- (void)setDismissedDate:(id)date;
- (void)setLastModifiedDate:(id)date;
@end

#endif /* AFClockTimerMutating_Protocol_h */