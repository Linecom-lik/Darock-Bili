//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPInformationStream_h
#define CVNLPInformationStream_h
@import Foundation;

@class NSNumber;

@interface CVNLPInformationStream : NSObject {
  /* instance variables */
  double _decodingWeightValue;
  double _lowerBoundLogProbabilityValue;
}

@property (readonly, nonatomic) NSNumber *decodingWeight;
@property (readonly, nonatomic) NSNumber *lowerBoundLogProbability;

/* class methods */
+ (id)defaultDecodingWeight;
+ (id)defaultLowerBoundLogProbability;

/* instance methods */
- (id)initWithDecodingWeight:(id)weight;
- (id)initWithDecodingWeight:(id)weight lowerBoundLogProbability:(id)probability;
- (double)decodingWeightValue;
- (double)lowerBoundLogProbabilityValue;
@end

#endif /* CVNLPInformationStream_h */