//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REHTMLTagElement_h
#define REHTMLTagElement_h
@import Foundation;

#include "REHTMLElement.h"

@class NSArray, NSDictionary, NSString;

@interface REHTMLTagElement : REHTMLElement {
  /* instance variables */
  NSString *_tag;
  NSString *_content;
  NSArray *_classes;
  NSDictionary *_attributes;
  NSString *_prefix;
  NSString *_suffix;
}

/* instance methods */
- (id)initWithTag:(id)tag content:(id)content;
- (id)_prefixContentString;
- (id)_contentString;
- (id)_suffixContentString;
- (id)classes;
- (id)elementByAddingClass:(id)class;
- (id)elementByAddingClasses:(id)classes;
- (id)elementBySettingClasses:(id)classes;
- (id)attributes;
- (id)elementBySettingAtttibutes:(id)atttibutes;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REHTMLTagElement_h */