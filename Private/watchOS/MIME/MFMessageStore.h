//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMessageStore_h
#define MFMessageStore_h
@import Foundation;

#include "MFMessageStoreObjectCache.h"
#include "NSCopying-Protocol.h"

@class BOOL *, NSMutableSet;

@interface MFMessageStore : NSObject<NSCopying> {
  /* instance variables */
  NSMutableSet *_uniqueStrings;
}

@property (readonly, retain, nonatomic) MFMessageStoreObjectCache *objectCache;

/* class methods */
+ (id)log;
+ (Class)headersClass;
+ (Class)classForMimePart;
+ (void)setDefaultMessageHeadersClass:(Class)class;

/* instance methods */
- (id)init;
- (void)_flushAllMessageData;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
- (id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;
- (id)_downloadHeadersForMessages:(id)messages;
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)_bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;
- (id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;
- (id)uniquedString:(id)string;
- (id)dataForMimePart:(id)part inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;
- (BOOL)dataForMimePart:(id)part inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range isComplete:(BOOL *)complete withConsumer:(id)consumer downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;
- (BOOL)downloadMimePartNumber:(id)number message:(id)message withProgressBlock:(id /* block */)block;
- (BOOL)dataForMimePart:(id)part inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withConsumer:(id)consumer downloadIfNecessary:(BOOL)necessary;
- (id)decryptedTopLevelPartForPart:(id)part;
- (id)defaultAlternativeForPart:(id)part;
- (id)bestAlternativeForPart:(id)part;
- (id)newObjectCache;
- (id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;
- (void)_flushAllCaches;
- (id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available downloadIfNecessary:(BOOL)necessary partial:(BOOL *)partial;
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;
- (BOOL)hasCompleteDataForMimePart:(id)part;
- (BOOL)messageCanBeTriaged:(id)triaged;
- (void)setNumberOfAttachments:(unsigned int)attachments isSigned:(BOOL)signed isEncrypted:(BOOL)encrypted forMessage:(id)message;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;
- (void)setMessageClass:(Class)class;
- (void)flushCacheForMessage:(id)message;
@end

#endif /* MFMessageStore_h */