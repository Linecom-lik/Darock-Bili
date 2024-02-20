//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDAttachmentRecord_h
#define IMDAttachmentRecord_h
@import Foundation;

#include "IMDRecord.h"
#include "IMDBridgedRecord-Protocol.h"
#include "IMDMessageRecord.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface IMDAttachmentRecord : IMDRecord<IMDBridgedRecord>

@property (readonly, copy, @dynamic, nonatomic) NSString *filename;
@property (readonly, copy, @dynamic, nonatomic) NSString *uti;
@property (readonly, @dynamic, nonatomic) long long ckSyncState;
@property (readonly, copy, @dynamic, nonatomic) NSData *ckServerChangeTokenBlob;
@property (readonly, copy, @dynamic, nonatomic) NSString *ckRecordID;
@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, @dynamic, nonatomic) NSString *guid;
@property (readonly, copy, @dynamic, nonatomic) NSString *originalGUID;
@property (readonly, copy, @dynamic, nonatomic) NSDate *createdDate;
@property (readonly, copy, @dynamic, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, @dynamic, nonatomic) NSString *transferName;
@property (readonly, copy, nonatomic) NSString *utiString;
@property (readonly, @dynamic, nonatomic) long long transferState;
@property (readonly, @dynamic, nonatomic) BOOL outgoing;
@property (readonly, @dynamic, nonatomic) long long totalBytes;
@property (readonly, @dynamic, nonatomic) BOOL sticker;
@property (readonly, nonatomic) BOOL commSafetySensitive;
@property (readonly, copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) long long cloudSyncState;
@property (readonly, copy, nonatomic) NSData *cloudServerChangeToken;
@property (readonly, copy, nonatomic) NSString *cloudRecordID;
@property (readonly, nonatomic) IMDMessageRecord *messageRecord;

/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)keyPathsToColumns;

/* instance methods */
- (unsigned long long)_cfTypeID;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; long long x1; struct __CFArray * x2; } *)cfAttachmentRecord;
- (void *)_fetchUpdatedRecord;
- (struct __CFArray *)_localCache;
- (struct { char * x0; long long x1; struct  * x2; unsigned int x3; void * x4; })_propertyDescriptorForProperty:(long long)property;
- (int)_propertyIDForProperty:(long long)property;
- (BOOL)isCommSafetySensitive;
- (id)init;
@end

#endif /* IMDAttachmentRecord_h */