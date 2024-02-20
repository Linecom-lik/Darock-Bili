//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRDataArtwork_h
#define MRDataArtwork_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface MRDataArtwork : NSObject<NSCopying>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;

/* instance methods */
- (id)initWithImageData:(id)data;
- (id)description;
- (id)initWithProtobuf:(id)protobuf;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MRDataArtwork_h */