//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTMemojiDescriptor_h
#define AVTMemojiDescriptor_h
@import Foundation;

#include "AVTAvatarDescriptor.h"

@class BOOL *;

@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
  /* instance variables */
  NSString * _presetIdentifiers[40];
  AVTColorPreset"] * x[40[3] _colorPresets;
}

/* class methods */
+ (id)randomDescriptor;
+ (id)presetsDictionaryFromRecipe:(id)recipe didFail:(BOOL *)fail error:(id *)error;
+ (id)colorPresetFromColorData:(id)data forCategory:(long long)category colorIndex:(unsigned long long)index version:(unsigned short)version didFail:(BOOL *)fail error:(id *)error;
+ (unsigned char)classIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionaryRepresentation:(id)representation error:(id *)error;
- (id)initWithDictionaryRepresentation:(id)representation error:(id *)error isResettingToDefault:(BOOL)default;
- (id)initWithMemoji:(id)memoji;
- (void)applyToMemoji:(id)memoji;
- (id)presetIdentifierForCategory:(long long)category;
- (void)setPresetIdentifier:(id)identifier forCategory:(long long)category;
- (void)setColorPreset:(id)preset forCategory:(long long)category colorIndex:(unsigned long long)index;
- (id)colorPresetForCategory:(long long)category colorIndex:(unsigned long long)index;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeInDictionaryRepresentation:(id)representation;
- (void)_decode:(id)_decode isResettingToDefault:(BOOL)default error:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)debugDescription;
@end

#endif /* AVTMemojiDescriptor_h */