//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPServer_h
#define RPServer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "RPAuthenticatable-Protocol.h"
#include "RPCompanionLinkXPCClientInterface-Protocol.h"

@class NSArray, NSData, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPServer : NSObject<NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable> {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _changesPending;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
  NSXPCConnection *_xpcCnx;
}

@property (readonly, nonatomic) unsigned int internalAuthFlags;
@property (copy, nonatomic) id /* block */ acceptHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (copy, nonatomic) NSData *pairingInfo;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)level;
- (void)activate;
- (void)_activateWithReactivate:(BOOL)reactivate;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)invalidate;
- (void)_invalidated;
- (void)tryPassword:(id)password;
- (void)_updateIfNeededWithBlock:(id /* block */)block;
- (void)_update;
- (void)xpcServerAcceptSession:(id)session completion:(id /* block */)completion;
- (void)xpcServerShowPassword:(id)password flags:(unsigned int)flags;
- (void)xpcServerHidePassword:(unsigned int)password;
@end

#endif /* RPServer_h */