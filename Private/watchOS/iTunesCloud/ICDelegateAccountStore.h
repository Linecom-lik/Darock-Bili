//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICDelegateAccountStore_h
#define ICDelegateAccountStore_h
@import Foundation;

#include "ICDelegateAccountStore.h"
#include "ICDelegateAccountStoreOptions.h"
#include "ICDelegateAccountStoreWriter-Protocol.h"
#include "ICDelegateAccountStoreXPCWriter.h"
#include "ICSQLiteConnectionDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface ICDelegateAccountStore : NSObject<ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter> {
  /* instance variables */
  NSMutableArray *_connectionPool;
  BOOL _isOpen;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  ICDelegateAccountStoreOptions *_options;
  ICDelegateAccountStore *_strongSelf;
  ICDelegateAccountStoreXPCWriter *_xpcWriter;
}

@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)openWithOptions:(id)options completionHandler:(id /* block */)handler;

/* instance methods */
- (id)_initWithValidatedOptions:(id)options;
- (id)initSingleWriterWithOptions:(id)options error:(id *)error;
- (void)close;
- (void)readUsingBlock:(id /* block */)block;
- (void)addDelegationUUIDs:(id)uuids forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)handler;
- (void)removeDelegationUUIDs:(id)uuids forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removeIdentityPropertiesForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removeTokenForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removeTokensExpiringBeforeDate:(id)date completionHandler:(id /* block */)handler;
- (void)setIdentityProperties:(id)properties forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)setToken:(id)token forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (BOOL)connectionNeedsResetForCorruption:(id)corruption;
- (void)_openWithXPCWriter:(id)xpcwriter completionHandler:(id /* block */)handler;
- (id)_popConnection;
- (void)_postDidChangeNotification;
- (void)_recycleConnection:(id)connection;
- (BOOL)_resetCorruptionUsingSQL;
- (void)_resetCorruptionUsingXPC;
- (void)_writeSQLUsingBlock:(id /* block */)block;
- (void)_writeUsingBlock:(id /* block */)block;
- (void)_writeXPCUsingBlock:(id /* block */)block;
@end

#endif /* ICDelegateAccountStore_h */