//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARCommandTagging_h
#define _EARCommandTagging_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString;
@protocol {unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>>="__ptr_"{__compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>>="__value_"^{CommandTagging}}};

@interface _EARCommandTagging : NSObject<NSCopying> {
  /* instance variables */
  struct unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> { struct __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>> { struct CommandTagging *__value_; } __ptr_; } _tagging;
}

@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, copy, nonatomic) NSArray *tagSequence;

/* instance methods */
- (id)_initWithQuasarCommandTagging:(const void *)tagging;
- (id)tokensForTag:(id)tag;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _EARCommandTagging_h */