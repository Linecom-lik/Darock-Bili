//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryRepresentableTransformItem_h
#define HFAccessoryRepresentableTransformItem_h
@import Foundation;

#include "HFTransformItem.h"
#include "HFAccessoryRepresentable-Protocol.h"
#include "HFAccessoryRepresentableItem-Protocol.h"
#include "HFHomeKitObject-Protocol.h"

@class NSString;

@interface HFAccessoryRepresentableTransformItem : HFTransformItem<HFAccessoryRepresentableItem>

@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)itemWithAccessoryRepresentableObject:(id)object valueSource:(id)source;
@end

#endif /* HFAccessoryRepresentableTransformItem_h */