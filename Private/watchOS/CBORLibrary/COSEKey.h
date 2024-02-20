//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.1.1.0.0
//
#ifndef COSEKey_h
#define COSEKey_h
@import Foundation;

#include "CBOR.h"

@class NSArray, NSData, NSNumber;

@interface COSEKey : NSObject {
  /* instance variables */
  CBOR *_cborObj;
  NSNumber *_curveID;
  NSData *_paramX;
  NSData *_paramY;
  NSData *_paramD;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long algorithm;
@property (readonly, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) NSData *baseInitializationVector;
@property (readonly, nonatomic) NSNumber *ecCurveIdentifier;
@property (readonly, nonatomic) NSData *ecCurveX;
@property (readonly, nonatomic) NSData *ecCurveY;
@property (readonly, nonatomic) NSData *ecCurveD;
@property (readonly, nonatomic) NSNumber *okpCurveIdentifier;
@property (readonly, nonatomic) NSData *okpCurveX;
@property (readonly, nonatomic) NSData *okpCurveD;
@property (readonly, nonatomic) NSData *symmetricKey;

/* instance methods */
- (id)initWithData:(id)data;
- (id)initWithCBOR:(id)cbor;
- (id)initEC2WithAlgorithm:(long long)algorithm curveIdentifier:(long long)identifier x:(id)x signBit:(BOOL)bit d:(id)d keyOperations:(id)operations keyIdentifier:(id)identifier;
- (id)initEC2WithAlgorithm:(long long)algorithm curveIdentifier:(long long)identifier x:(id)x y:(id)y d:(id)d keyOperations:(id)operations keyIdentifier:(id)identifier;
- (id)initOKPWithAlgorithm:(long long)algorithm curveIdentifier:(long long)identifier x:(id)x d:(id)d keyOperations:(id)operations keyIdentifier:(id)identifier;
@end

#endif /* COSEKey_h */