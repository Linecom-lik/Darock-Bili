//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOPlaceEVChargerTicket_h
#define _GEOPlaceEVChargerTicket_h
@import Foundation;

#include "GEOAbstractRequestResponseTicket.h"
#include "GEOMapServiceRefreshEVChargerTicket-Protocol.h"
#include "GEOMapServiceTraits.h"

@class NSString;

@interface _GEOPlaceEVChargerTicket : GEOAbstractRequestResponseTicket<GEOMapServiceRefreshEVChargerTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)submitRefreshRequestWithHandler:(id /* block */)handler networkActivity:(id /* block */)activity;
@end

#endif /* _GEOPlaceEVChargerTicket_h */