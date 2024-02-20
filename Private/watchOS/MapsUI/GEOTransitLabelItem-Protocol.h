//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef GEOTransitLabelItem_Protocol_h
#define GEOTransitLabelItem_Protocol_h
@import Foundation;

@protocol GEOTransitLabelItem <NSObject>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *labelArtwork;

@end

#endif /* GEOTransitLabelItem_Protocol_h */