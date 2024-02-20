//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBButton_h
#define BBButton_h
@import Foundation;

#include "BBAction.h"
#include "BBImage.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface BBButton : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBImage *image;
@property (copy, nonatomic) BBAction *action;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *glyphData;

/* class methods */
+ (id)buttonWithTitle:(id)title action:(id)action;
+ (id)buttonWithTitle:(id)title action:(id)action identifier:(id)identifier;
+ (id)buttonWithTitle:(id)title glyphData:(id)data action:(id)action identifier:(id)identifier;
+ (id)buttonWithTitle:(id)title image:(id)image action:(id)action identifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title image:(id)image action:(id)action identifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)replacementObjectForCoder:(id)coder;
- (id)awakeAfterUsingCoder:(id)coder;
@end

#endif /* BBButton_h */