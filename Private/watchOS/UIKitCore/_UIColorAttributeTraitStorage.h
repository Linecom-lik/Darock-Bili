//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIColorAttributeTraitStorage_h
#define _UIColorAttributeTraitStorage_h
@import Foundation;

#include "_UITraitStorage.h"
#include "NSCoding-Protocol.h"
#include "_UICoreUICatalogColorWrapper.h"

@interface _UIColorAttributeTraitStorage : _UITraitStorage<NSCoding> {
  /* instance variables */
  _UICoreUICatalogColorWrapper *_namedColor;
}

/* instance methods */
- (id)initWithObject:(id)object keyPath:(id)path color:(id)color;
- (void)applyRecordsMatchingTraitCollection:(id)collection;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_propertyDescriptionString;
@end

#endif /* _UIColorAttributeTraitStorage_h */