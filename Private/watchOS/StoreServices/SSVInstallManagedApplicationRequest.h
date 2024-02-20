//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVInstallManagedApplicationRequest_h
#define SSVInstallManagedApplicationRequest_h
@import Foundation;

#include "SSRequest.h"
#include "SSXPCCoding-Protocol.h"

@class NSNumber, NSString;

@interface SSVInstallManagedApplicationRequest : SSRequest<SSXPCCoding>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) BOOL skipDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItemIdentifer:(id)identifer externalVersionIdentifier:(id)identifier bundleIdentifier:(id)identifier bundleVersion:(id)version;
- (id)initWithItemIdentifer:(id)identifer externalVersionIdentifier:(id)identifier bundleIdentifier:(id)identifier bundleVersion:(id)version skipDownloads:(BOOL)downloads;
- (void)startWithResponseBlock:(id /* block */)block;
- (void)startWithDetailedResponseBlock:(id /* block */)block;
- (void)startWithMetadataResponseBlock:(id /* block */)block;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
@end

#endif /* SSVInstallManagedApplicationRequest_h */