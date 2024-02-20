//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFInputMigrationUUIDProvider_h
#define WFInputMigrationUUIDProvider_h
@import Foundation;

#include "WFAction.h"
#include "WFUUIDProvider-Protocol.h"

@class NSString;

@interface WFInputMigrationUUIDProvider : NSObject<WFUUIDProvider>

@property (readonly, nonatomic) WFAction *action;
@property (readonly, nonatomic) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAction:(id)action atPosition:(unsigned long long)position;
- (id)generateOutputUUIDForAction:(id)action;
@end

#endif /* WFInputMigrationUUIDProvider_h */