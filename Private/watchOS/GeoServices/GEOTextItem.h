//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTextItem_h
#define GEOTextItem_h
@import Foundation;

#include "GEOTextItem-Protocol.h"

@class NSString;

@interface GEOTextItem : NSObject<GEOTextItem>

@property (readonly, nonatomic) NSString *primaryText;

/* instance methods */
- (id)init;
- (id)initWithPrimaryText:(id)text;
- (id)initWithTextItem:(id)item;
@end

#endif /* GEOTextItem_h */