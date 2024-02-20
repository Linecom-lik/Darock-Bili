//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSelector_h
#define MAAutoAssetSelector_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface MAAutoAssetSelector : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSData *downloadDecryptionKey;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initForAssetType:(id)type withAssetSpecifier:(id)specifier;
- (id)initForAssetType:(id)type withAssetSpecifier:(id)specifier usingDecryptionKey:(id)key;
- (id)initForAssetType:(id)type withAssetSpecifier:(id)specifier matchingAssetVersion:(id)version;
- (id)initForAssetType:(id)type;
- (id)initForAssetType:(id)type withAssetSpecifier:(id)specifier matchingAssetVersion:(id)version usingDecryptionKey:(id)key;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (BOOL)isEqual:(id)equal;
- (void)assignAssetVersion:(id)version;
- (id)copyClearingWriteOnlyFields;
- (id)persistedEntryID;
- (id)description;
- (id)summary;
- (id)newSummaryDictionary;
@end

#endif /* MAAutoAssetSelector_h */