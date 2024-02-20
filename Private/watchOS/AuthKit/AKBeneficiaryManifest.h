//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKBeneficiaryManifest_h
#define AKBeneficiaryManifest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary;

@interface AKBeneficiaryManifest : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSArray *accessibleBundleInformation;
@property (readonly, nonatomic) long long manifestOptions;
@property (readonly, nonatomic) NSDictionary *parsableRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleInformation:(id)information manifestOptions:(long long)options;
- (id)_bundleTypeFrom:(unsigned long long)from;
- (BOOL)_isAllOptionsSelected;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AKBeneficiaryManifest_h */