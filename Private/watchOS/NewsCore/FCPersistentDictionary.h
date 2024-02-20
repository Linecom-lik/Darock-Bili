//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersistentDictionary_h
#define FCPersistentDictionary_h
@import Foundation;

@class NSSet, NSURL;

@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;

/* instance methods */
- (id)init;
- (id)initWithFileURL:(id)url allowedClasses:(id)classes;
- (id)read;
- (BOOL)writeWithAccessor:(id /* block */)accessor;
@end

#endif /* FCPersistentDictionary_h */