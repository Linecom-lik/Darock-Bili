//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef INSpeakableString_WFNaming_h
#define INSpeakableString_WFNaming_h
@import Foundation;

@interface INSpeakableString (WFNaming) <WFNaming, WFINObject>
/* instance methods */
- (id)wf_initWithIdentifier:(id)identifier displayString:(id)string;
- (id)wfName;
@end

#endif /* INSpeakableString_WFNaming_h */