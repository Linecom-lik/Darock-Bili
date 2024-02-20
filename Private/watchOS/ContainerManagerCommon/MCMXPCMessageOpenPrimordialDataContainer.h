//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMXPCMessageOpenPrimordialDataContainer_h
#define MCMXPCMessageOpenPrimordialDataContainer_h
@import Foundation;

#include "MCMXPCMessageBase.h"
#include "MCMParametersOpenPrimordialDataContainer-Protocol.h"

@interface MCMXPCMessageOpenPrimordialDataContainer : MCMXPCMessageBase<MCMParametersOpenPrimordialDataContainer>

@property (readonly, nonatomic) BOOL useCodeSignDatabase;

/* instance methods */
- (id)initWithXPCObject:(id)xpcobject context:(id)context error:(unsigned long long *)error;
@end

#endif /* MCMXPCMessageOpenPrimordialDataContainer_h */