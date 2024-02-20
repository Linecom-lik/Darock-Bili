//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSHistogramFeatureData_h
#define _PSHistogramFeatureData_h
@import Foundation;

@class NSDictionary, NSMutableDictionary;

@interface _PSHistogramFeatureData : NSObject

@property (retain, nonatomic) NSDictionary *cache;
@property (retain, nonatomic) NSDictionary *bucketSums;
@property (retain, nonatomic) NSDictionary *bucketHasEver;
@property (retain, nonatomic) NSDictionary *factorToUniqueBucketNames;
@property (retain, nonatomic) NSMutableDictionary *candidateTimeIntervalSums;

/* instance methods */
@end

#endif /* _PSHistogramFeatureData_h */