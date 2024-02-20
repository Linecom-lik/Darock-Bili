//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelAccountExchangeDeclaration_SMIME_h
#define RMModelAccountExchangeDeclaration_SMIME_h
@import Foundation;

#include "RMModelPayloadBase.h"
#include "RMModelAccountExchangeDeclaration_SMIMEEncryption.h"
#include "RMModelAccountExchangeDeclaration_SMIMESigning.h"

@interface RMModelAccountExchangeDeclaration_SMIME : RMModelPayloadBase

@property (copy, nonatomic) RMModelAccountExchangeDeclaration_SMIMESigning *payloadSigning;
@property (copy, nonatomic) RMModelAccountExchangeDeclaration_SMIMEEncryption *payloadEncryption;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithSigning:(id)signing encryption:(id)encryption;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelAccountExchangeDeclaration_SMIME_h */