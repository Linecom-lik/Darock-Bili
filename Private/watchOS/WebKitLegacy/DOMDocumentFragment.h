//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMDocumentFragment_h
#define DOMDocumentFragment_h
@import Foundation;

#include "DOMNode.h"

@interface DOMDocumentFragment : DOMNode
/* instance methods */
- (id)children;
- (id)firstElementChild;
- (id)lastElementChild;
- (unsigned int)childElementCount;
- (id)getElementById:(id)id;
- (id)querySelector:(id)selector;
- (id)querySelectorAll:(id)all;
@end

#endif /* DOMDocumentFragment_h */