//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTRow_h
#define PTRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PTRowAction.h"
#include "PTSection.h"
#include "PTSettings.h"
#include "PTSettingsKeyPathObserver-Protocol.h"

@class NSHashTable, NSPredicate, NSString, UIImage;

@interface PTRow : NSObject<PTSettingsKeyPathObserver, NSCopying, NSSecureCoding> {
  /* instance variables */
  NSHashTable *_observers;
}

@property (copy, nonatomic) id /* block */ valueGetter;
@property (copy, nonatomic) id /* block */ valueSetter;
@property (copy, nonatomic) id /* block */ externalCondition;
@property (copy, nonatomic) id /* block */ unregisterBlock;
@property (weak, nonatomic) PTSection *section;
@property (nonatomic) BOOL isEncodable;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *valueKeyPath;
@property (copy, nonatomic) NSString *staticTitle;
@property (copy, nonatomic) NSString *titleKeyPath;
@property (retain, nonatomic) UIImage *staticImage;
@property (copy, nonatomic) NSString *imageKeyPath;
@property (copy, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) PTRowAction *action;
@property (copy, nonatomic) id /* block */ valueValidatator;
@property (copy, nonatomic) id /* block */ valueFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)row;
+ (id)rowWithTitle:(id)title valueKeyPath:(id)path;
+ (id)rowWithTitle:(id)title valueGetter:(id /* block */)getter valueSetter:(id /* block */)setter;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)valueKeyPath:(id)path;
- (id)staticTitle:(id)title;
- (id)titleKeyPath:(id)path;
- (id)staticImage:(id)image;
- (id)imageKeyPath:(id)path;
- (id)action:(id)action;
- (id)valueValidator:(id /* block */)validator;
- (id)valueFormatter:(id /* block */)formatter;
- (id)condition:(id)condition;
- (id)conditionFormat:(id)format;
- (id)title;
- (id)image;
- (id)childSettingsForKeyPath:(id)path;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)reloadRow;
- (id)_defaultAction;
- (id)_validatedValue:(id)value;
- (void)settings:(id)settings changedValueForKeyPath:(id)path;
- (void)_sendValueChanged;
- (void)_sendTitleChanged;
- (void)_sendImageChanged;
- (void)_sendRowDidReload;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PTRow_h */