//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLChangeStorage_h
#define CPLChangeStorage_h
@import Foundation;

@class NSString;

@interface CPLChangeStorage : NSObject

@property (readonly, nonatomic) NSString *storageDescription;

/* instance methods */
- (BOOL)getRelatedScopedIdentifier:(id *)identifier forRecordWithScopedIdentifier:(id)identifier;
- (BOOL)getStoredChangeType:(unsigned long long *)type forRecordWithScopedIdentifier:(id)identifier;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)identifier class:(Class)class;
- (id)changeWithScopedIdentifier:(id)identifier;
- (id)changesWithRelatedScopedIdentifier:(id)identifier class:(Class)class;
@end

#endif /* CPLChangeStorage_h */