//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSyndicationAction_h
#define IMSyndicationAction_h
@import Foundation;

#include "IMRemoteObjectCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface IMSyndicationAction : NSObject<NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned char syndicatedItemType;
@property (readonly, nonatomic) unsigned char syndicationActionType;
@property (readonly, nonatomic) NSDate *syndicationStartDate;
@property (readonly, copy, nonatomic) NSString *chatGUID;

/* class methods */
+ (id)dateFromNanoSeconds:(id)seconds;
+ (id)nanoSecondsFromDate:(id)date;
+ (BOOL)supportsSecureCoding;
+ (id)unarchiveClasses;

/* instance methods */
- (id)_stringFromActionType:(unsigned char)type;
- (id)_stringFromItemType:(unsigned char)type;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)dictionary;
- (id)init;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)dictionary;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithChatGUID:(id)guid syndicationStartDate:(id)date syndicationActionType:(unsigned char)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IMSyndicationAction_h */