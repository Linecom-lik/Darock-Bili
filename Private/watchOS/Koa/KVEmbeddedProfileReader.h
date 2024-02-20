//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVEmbeddedProfileReader_h
#define KVEmbeddedProfileReader_h
@import Foundation;

#include "KVProfileInfo.h"
#include "KVProfileReader-Protocol.h"

@class NSData, NSString;

@interface KVEmbeddedProfileReader : NSObject<KVProfileReader> {
  /* instance variables */
  NSData *_data;
  const struct Profile { unsigned char x0[1] } * _profile;
  KVProfileInfo *_profileInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithData:(id)data profile:(const struct Profile { unsigned char x0[1] } *)profile profileInfo:(id)info;
- (id)data;
- (BOOL)enumerateDatasetsWithError:(id *)error usingBlock:(id /* block */)block;
- (id)profileInfo;
@end

#endif /* KVEmbeddedProfileReader_h */