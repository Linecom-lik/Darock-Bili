//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCoreDataDatabaseResultFetchOperation_Protocol_h
#define WFCoreDataDatabaseResultFetchOperation_Protocol_h
@import Foundation;

@protocol WFCoreDataDatabaseResultFetchOperation <NSObject, NSCopying>

@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors;

/* instance methods */
- (id)resultsWithContext:(id)context error:(id *)error;
- (long long)countWithContext:(id)context error:(id *)error;
@end

#endif /* WFCoreDataDatabaseResultFetchOperation_Protocol_h */