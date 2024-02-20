//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiationBlobVideoSettings_h
#define VCMediaNegotiationBlobVideoSettings_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 customVideoHeight; unsigned int x :1 customVideoWidth; unsigned int x :1 hdrModesSupported; unsigned int x :1 pixelFormats; unsigned int x :1 tilesPerFrame; unsigned int x :1 fecEnabled; unsigned int x :1 ltrpEnabled; unsigned int x :1 rtxEnabled; } _has;
}

@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) BOOL allowRTCPFB;
@property (retain, nonatomic) NSMutableArray *videoPayloadCollections;
@property (nonatomic) BOOL hasCustomVideoWidth;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) BOOL hasCustomVideoHeight;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) BOOL hasTilesPerFrame;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) BOOL hasLtrpEnabled;
@property (nonatomic) BOOL ltrpEnabled;
@property (nonatomic) BOOL hasPixelFormats;
@property (nonatomic) unsigned int pixelFormats;
@property (nonatomic) BOOL hasHdrModesSupported;
@property (nonatomic) unsigned int hdrModesSupported;
@property (nonatomic) BOOL hasFecEnabled;
@property (nonatomic) BOOL fecEnabled;
@property (nonatomic) BOOL hasRtxEnabled;
@property (nonatomic) BOOL rtxEnabled;

/* class methods */
+ (unsigned int)storePixelFormatsInBitMap:(id)map;
+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)modes;
+ (Class)videoPayloadCollectionsType;

/* instance methods */
- (id)initWithSSRC:(unsigned int)ssrc allowRTCPFB:(BOOL)rtcpfb videoRuleCollections:(id)collections featureStrings:(id)strings isCellular16x9Capable:(BOOL)capable tilesPerFrame:(unsigned int)frame ltrpEnabled:(BOOL)enabled;
- (id)initWithScreenSSRC:(unsigned int)ssrc allowRTCPFB:(BOOL)rtcpfb videoRuleCollections:(id)collections featureStrings:(id)strings isCellular16x9Capable:(BOOL)capable customVideoWidth:(unsigned int)width customVideoHeight:(unsigned int)height tilesPerFrame:(unsigned int)frame ltrpEnabled:(BOOL)enabled pixelFormats:(id)formats hdrModesSupported:(id)supported fecEnabled:(BOOL)enabled rtxEnabled:(BOOL)enabled;
- (id)getPayloadSettingsForPayload:(int)payload;
- (BOOL)setVideoRuleCollections:(id)collections featureStrings:(id)strings isScreen:(BOOL)screen isCellular16x9Capable:(BOOL)capable;
- (void)checkAndInsertRuleWithWidth:(unsigned int)width height:(unsigned int)height framerate:(int)framerate payload:(int)payload priority:(double)priority negotiationBitfield:(unsigned int *)bitfield negotiationBit:(unsigned int)bit rules:(id)rules isCellular16x9Capable:(BOOL)capable;
- (id)newVideoRuleCollectionsForScreen:(BOOL)screen isCellular16x9Capable:(BOOL)capable isLocalConfig:(BOOL)config;
- (id)newFeatureStrings;
- (id)parameterSetStringFromPayloadSettings:(id)settings;
- (void)prepareFormatString:(id)string format:(id)format formatIndex:(unsigned int)index preferredFormat:(unsigned int)format;
- (void)printVideoWithLogFile:(void *)file;
- (void)printScreenWithLogFile:(void *)file;
- (void)dealloc;
- (void)clearVideoPayloadCollections;
- (void)addVideoPayloadCollections:(id)collections;
- (unsigned long long)videoPayloadCollectionsCount;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* VCMediaNegotiationBlobVideoSettings_h */