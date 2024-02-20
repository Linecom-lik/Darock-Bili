//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSServiceConnection_h
#define TPSServiceConnection_h
@import Foundation;

#include "_TPSXPCConnection.h"
#include "_TPSXPCExportable-Protocol.h"

@class NSString, NSXPCInterface;

@interface TPSServiceConnection : NSObject<_TPSXPCExportable> {
  /* instance variables */
  _TPSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)invalidate;
- (id)connection;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
@end

#endif /* TPSServiceConnection_h */