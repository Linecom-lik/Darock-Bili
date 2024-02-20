//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteActionUserInterface_h
#define WFRemoteActionUserInterface_h
@import Foundation;

#include "WFActionRemoteUserInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface WFRemoteActionUserInterface : NSObject<WFActionRemoteUserInterface>

@property (readonly, nonatomic) NSObject<WFActionRemoteUserInterface> *remoteUserInterface;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ onInterfaceInterruption;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserInterfaceType:(id)type listenerEndpoint:(id)endpoint interface:(id)interface;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)conformsToProtocol:(id)protocol;
- (BOOL)respondsToSelector:(SEL)selector;
@end

#endif /* WFRemoteActionUserInterface_h */