//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXMIDIDeviceEntityEndpoint_h
#define AXMIDIDeviceEntityEndpoint_h
@import Foundation;

#include "AXMIDIDeviceEntity.h"

@class NSNumber, NSString;

@interface AXMIDIDeviceEntityEndpoint : NSObject

@property (nonatomic) unsigned int midiEndpoint;
@property (weak, nonatomic) AXMIDIDeviceEntity *entity;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSNumber *uniqueID;
@property (readonly, nonatomic) NSNumber *receiveChannels;
@property (readonly, nonatomic) NSNumber *transmitChannels;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *driverName;

/* instance methods */
- (id)initWithMIDIEndpoint:(unsigned int)midiendpoint entity:(id)entity;
- (id)description;
@end

#endif /* AXMIDIDeviceEntityEndpoint_h */