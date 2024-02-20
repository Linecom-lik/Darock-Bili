//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMInstrumental_Protocol_h
#define MXMInstrumental_Protocol_h
@import Foundation;

@protocol MXMInstrumental <NSCopying>
/* instance methods */
- (BOOL)harvestData:(id *)data error:(id *)error;
@optional
/* instance methods */
- (BOOL)prepareWithOptions:(id)options error:(id *)error;
- (void)willStartAtEstimatedTime:(unsigned long long)time;
- (void)didStartAtTime:(unsigned long long)time startDate:(id)date;
- (void)willStop;
- (void)didStopAtTime:(unsigned long long)time stopDate:(id)date;
- (void)didStartAtContinuousTime:(unsigned long long)time absoluteTime:(unsigned long long)time startDate:(id)date;
- (void)didStopAtContinuousTime:(unsigned long long)time absoluteTime:(unsigned long long)time stopDate:(id)date;
@end

#endif /* MXMInstrumental_Protocol_h */