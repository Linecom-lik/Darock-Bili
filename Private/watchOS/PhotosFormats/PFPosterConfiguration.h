//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFPosterConfiguration_h
#define PFPosterConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PFPosterConfigurationAnalyticsSupport-Protocol.h"
#include "PFPosterEditConfiguration.h"
#include "PFPosterShuffleConfiguration.h"
#include "PFWallpaperCompoundDeviceConfiguration.h"

@class NSArray, NSDictionary, NSString;

@interface PFPosterConfiguration : NSObject<NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (readonly, nonatomic) long long posterType;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long configurationType;
@property (nonatomic) long long options;
@property (retain, nonatomic) NSArray *media;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration;
@property (retain, nonatomic) PFWallpaperCompoundDeviceConfiguration *layoutConfiguration;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)loadFromURL:(id)url error:(id *)error;

/* instance methods */
- (id)initWithConfigurationType:(long long)type;
- (id)analyticsPayload;
- (id)mediaAnalyticsPayload;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)saveToURL:(id)url error:(id *)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PFPosterConfiguration_h */