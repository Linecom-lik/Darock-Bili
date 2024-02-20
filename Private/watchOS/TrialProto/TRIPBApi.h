//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBApi_h
#define TRIPBApi_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBSourceContext.h"

@class NSMutableArray, NSString;

@interface TRIPBApi : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *name;
@property (retain, @dynamic, nonatomic) NSMutableArray *methodsArray;
@property (readonly, @dynamic, nonatomic) unsigned long long methodsArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *optionsArray;
@property (readonly, @dynamic, nonatomic) unsigned long long optionsArray_Count;
@property (copy, @dynamic, nonatomic) NSString *version;
@property (retain, @dynamic, nonatomic) TRIPBSourceContext *sourceContext;
@property (@dynamic, nonatomic) BOOL hasSourceContext;
@property (retain, @dynamic, nonatomic) NSMutableArray *mixinsArray;
@property (readonly, @dynamic, nonatomic) unsigned long long mixinsArray_Count;
@property (@dynamic, nonatomic) int syntax;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBApi_h */