//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMXPCTimer_h
#define FMXPCTimer_h
@import Foundation;

@class NSDate, NSString;
@protocol OS_xpc_object;

@interface FMXPCTimer : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData;

/* instance methods */
- (id)initWithName:(id)name date:(id)date gracePeriod:(double)period priority:(long long)priority options:(unsigned long long)options block:(id /* block */)block;
- (id)initWithName:(id)name date:(id)date priority:(long long)priority options:(unsigned long long)options block:(id /* block */)block;
- (id)initWithName:(id)name timeInterval:(double)interval gracePeriod:(double)period priority:(long long)priority options:(unsigned long long)options block:(id /* block */)block;
- (id)initWithName:(id)name timeInterval:(double)interval priority:(long long)priority options:(unsigned long long)options block:(id /* block */)block;
- (void)schedule;
- (id)criteria;
- (void)invalidate;
- (id /* block */)activityHandler;
- (void)handleActivity;
@end

#endif /* FMXPCTimer_h */