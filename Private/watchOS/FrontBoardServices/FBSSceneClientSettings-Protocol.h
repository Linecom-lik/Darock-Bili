//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneClientSettings_Protocol_h
#define FBSSceneClientSettings_Protocol_h
@import Foundation;

#include "FBSSettings.h"
#include "FBSSceneClientSettings-Protocol.h"
#include "FBSSceneIdentityToken.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSOrderedSet, NSString;

@protocol FBSSceneClientSettings 

@property (retain, nonatomic) BSKeyedSettings *layers;
@property (nonatomic) double preferredLevel;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;

@end

#endif /* FBSSceneClientSettings_Protocol_h */