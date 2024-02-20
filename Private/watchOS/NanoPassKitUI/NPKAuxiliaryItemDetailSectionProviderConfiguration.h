//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAuxiliaryItemDetailSectionProviderConfiguration_h
#define NPKAuxiliaryItemDetailSectionProviderConfiguration_h
@import Foundation;

#include "NPKPassDetailSectionProviderConfiguration.h"

@class PKPassAuxiliaryPassInformationItem;

@interface NPKAuxiliaryItemDetailSectionProviderConfiguration : NPKPassDetailSectionProviderConfiguration

@property (weak, nonatomic) PKPassAuxiliaryPassInformationItem *auxiliaryItem;

/* instance methods */
- (id)initWithPass:(id)pass auxiliaryItem:(id)item;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)configurationByApplyingConfiguration:(id)configuration;
@end

#endif /* NPKAuxiliaryItemDetailSectionProviderConfiguration_h */