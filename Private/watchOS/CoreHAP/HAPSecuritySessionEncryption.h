//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPSecuritySessionEncryption_h
#define HAPSecuritySessionEncryption_h
@import Foundation;

@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject

@property (retain, nonatomic) NSData *inputKey;
@property (retain, nonatomic) NSMutableData *inputNonce;
@property (retain, nonatomic) NSData *outputKey;
@property (retain, nonatomic) NSMutableData *outputNonce;

/* instance methods */
- (id)init;
- (id)initWithInputKey:(id)key outputKey:(id)key;
- (id)encrypt:(id)encrypt additionalAuthenticatedData:(id)data;
- (id)decrypt:(id)decrypt additionalAuthenticatedData:(id)data error:(id *)error;
- (id)decrypt:(const void *)decrypt length:(unsigned long long)length additionalAuthData:(const void *)data additionalAuthDataLength:(unsigned long long)length authTagData:(const void *)data authTagDataLength:(unsigned long long)length error:(id *)error;
@end

#endif /* HAPSecuritySessionEncryption_h */