//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _MFInvocationQOSOverride_h
#define _MFInvocationQOSOverride_h
@import Foundation;

@interface _MFInvocationQOSOverride : NSObject {
  /* instance variables */
  struct pthread_override_s * _override;
}

@property (readonly, nonatomic) BOOL lowPriority;
@property (readonly, nonatomic) unsigned int desiredQoS;
@property (readonly, nonatomic) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec * x1; char x2[8176] } * pthread;

/* instance methods */
- (id)initWithPthread:(struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec * x1; char x2[8176] } *)pthread desiredQoS:(unsigned int)s lowPriority:(BOOL)priority;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)applyOverrideWhileForeground:(BOOL)foreground;
- (BOOL)removeOverride;
- (BOOL)isLowPriority;
@end

#endif /* _MFInvocationQOSOverride_h */