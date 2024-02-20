//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECServerMessage_h
#define ECServerMessage_h
@import Foundation;

#include "ECIMAPServerMessageBuilder-Protocol.h"
#include "ECMessageFlags.h"
#include "ECServerMessageBuilder-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSSet, NSString;

@interface ECServerMessage : NSObject<ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying>

@property (retain, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) ECMessageFlags *serverFlags;
@property (copy, nonatomic) NSString *remoteID;
@property (copy, nonatomic) NSSet *labels;
@property (readonly, nonatomic) id remoteIDObject;
@property (readonly, nonatomic) unsigned int imapUID;

/* instance methods */
- (id)initWithServerMessageBuilder:(id /* block */)builder;
- (id)initWithIMAPServerMessageBuilder:(id /* block */)builder;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ECServerMessage_h */