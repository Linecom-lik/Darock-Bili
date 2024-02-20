//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAssetExtracting_Protocol_h
#define TRIAssetExtracting_Protocol_h
@import Foundation;

@protocol TRIAssetExtracting 
/* instance methods */
- (struct { unsigned char x0; })extractArchiveFromFile:(id)file withArchiveName:(id)name toEmptyDirectory:(id)directory postExtractionCompression:(struct { unsigned long long x0; })compression error:(id *)error;
@end

#endif /* TRIAssetExtracting_Protocol_h */