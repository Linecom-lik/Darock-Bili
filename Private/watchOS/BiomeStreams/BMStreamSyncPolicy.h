//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStreamSyncPolicy_h
#define BMStreamSyncPolicy_h
@import Foundation;

@class NSDictionary, NSString;

@interface BMStreamSyncPolicy : NSObject {
  /* instance variables */
  long long _currentPlatform;
}

@property (nonatomic) BOOL supportsSharedDeviceSync;
@property (readonly, nonatomic) NSString *legacyDescriptor;
@property (readonly, nonatomic) NSDictionary *platformPolicies;

/* class methods */
+ (id)syncableStreams;
+ (id)syncableStreamConfigurations;

/* instance methods */
- (id)init;
- (id)initWithPolicyDictionary:(id)dictionary syncUUID:(id)uuid legacySyncID:(id)id eventClass:(Class)class;
- (id)initWithLegacyDescriptor:(id)descriptor platformPolicies:(id)policies;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)transport;
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)transport fromPlatform:(long long)platform;
- (BOOL)supportsTransport:(unsigned long long)transport direction:(unsigned long long)direction;
- (BOOL)supportsTransport:(unsigned long long)transport direction:(unsigned long long)direction fromPlatform:(long long)platform;
- (BOOL)supportsSyncingWithPlatform:(long long)platform overTransport:(unsigned long long)transport inDirection:(unsigned long long)direction;
- (BOOL)supportsSyncingWithPlatform:(long long)platform overTransport:(unsigned long long)transport inDirection:(unsigned long long)direction fromPlatform:(long long)platform;
@end

#endif /* BMStreamSyncPolicy_h */