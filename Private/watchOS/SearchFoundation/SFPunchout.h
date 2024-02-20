//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFPunchout_h
#define SFPunchout_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFPunchout-Protocol.h"
#include "SFUserActivityData.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface SFPunchout : NSObject<SFPunchout, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 isRunnableInBackground; unsigned int x :1 hasClip; } _has;
}

@property (readonly, nonatomic) NSURL *preferredOpenableURL;
@property (retain, nonatomic) NSURL *cachedOpenableURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) SFUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) BOOL isRunnableInBackground;
@property (nonatomic) BOOL hasClip;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)punchoutWithURL:(id)url;
+ (id)punchoutWithURLs:(id)urls;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)canOpenURL:(id)url;
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasIsRunnableInBackground;
- (BOOL)hasHasClip;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFPunchout_h */