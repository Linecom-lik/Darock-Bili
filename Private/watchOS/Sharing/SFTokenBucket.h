//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFTokenBucket_h
#define SFTokenBucket_h
@import Foundation;

@interface SFTokenBucket : NSObject {
  /* instance variables */
  unsigned long long _bucketSize;
  unsigned long long _tokensAvailable;
  unsigned long long _tokenDurationTicks;
  unsigned long long _lastRefreshTicks;
}

/* instance methods */
- (id)init;
- (id)initWithBucketSize:(unsigned long long)size tokenDurationTicks:(unsigned long long)ticks;
- (id)initWithBucketSize:(unsigned long long)size tokenDurationSec:(double)sec;
- (id)initWithBucketSize:(unsigned long long)size tokensPerSec:(double)sec;
- (BOOL)acquireToken;
@end

#endif /* SFTokenBucket_h */