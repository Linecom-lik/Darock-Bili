//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSHTTPArchive_h
#define SSHTTPArchive_h
@import Foundation;

@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject

@property (retain, nonatomic) NSData *backingJSONData;
@property (nonatomic) BOOL compressed;
@property (readonly, nonatomic) NSData *JSONData;
@property (readonly, nonatomic) NSDictionary *JSONObject;
@property (readonly, nonatomic) NSString *JSONString;

/* class methods */
+ (id)merge:(id)merge;
+ (id)merge:(id)merge withEstimatedFileSizeLimit:(unsigned long long)limit;
+ (id)outputDirectoryForLogConfig:(id)config;
+ (void)removeLogsWithLogConfig:(id)config olderThanDate:(id)date;
+ (void)sendWriteAllLogsToDiskNotification;
+ (void)sendWriteAllLogsToDiskDecompressedNotification;
+ (id)_contentDictionaryForResponse:(id)response responseData:(id)data;
+ (id)_creatorDictionary;
+ (id)_dateFormatterForTimeZone:(id)zone;
+ (id)_entriesArrayForTaskMetrics:(id)metrics requestData:(id)data responseData:(id)data;
+ (id)_entryDictionaryForTaskMetrics:(id)metrics requestData:(id)data responseData:(id)data;
+ (id)_headersArrayForHTTPHeaders:(id)httpheaders;
+ (id)_JSONObjectForEntries:(id)entries;
+ (id)_JSONObjectForTaskMetrics:(id)metrics requestData:(id)data responseData:(id)data;
+ (id)_generateCommentsForTaskMetrics:(id)metrics;
+ (id)_localIPAddress;
+ (id)_requestDictionaryForTaskTransactionMetrics:(id)metrics requestData:(id)data;
+ (id)_responseDictionaryForTaskMetrics:(id)metrics responseData:(id)data;
+ (id)_stringFromDate:(id)date;
+ (double)_timeIntervalFromFilename:(id)filename;

/* instance methods */
- (id)initWithJSONObject:(id)jsonobject;
- (id)initWithTaskMetrics:(id)metrics requestData:(id)data responseData:(id)data;
- (BOOL)writeToDiskError:(id *)error;
- (BOOL)writeToDiskWithLogConfig:(id)config compressed:(BOOL)compressed error:(id *)error;
- (id)description;
@end

#endif /* SSHTTPArchive_h */