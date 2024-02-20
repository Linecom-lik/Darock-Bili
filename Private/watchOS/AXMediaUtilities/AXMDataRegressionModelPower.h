//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMDataRegressionModelPower_h
#define AXMDataRegressionModelPower_h
@import Foundation;

#include "AXMDataRegressionModel.h"

@interface AXMDataRegressionModelPower : AXMDataRegressionModel
/* instance methods */
- (id)modelDescription;
- (id /* block */)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:(double *)params;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:(double *)parameters significantFigures:(int)figures;
- (BOOL)dataSatisfiesInitialConditions;
@end

#endif /* AXMDataRegressionModelPower_h */