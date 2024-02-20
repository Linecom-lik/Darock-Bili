//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMimePart_FormatFlowedSupportInternal_h
#define MFMimePart_FormatFlowedSupportInternal_h
@import Foundation;

@interface MFMimePart (FormatFlowedSupportInternal)
/* instance methods */
- (id)newSignedPartWithData:(id)data sender:(id)sender compositionSpecification:(id)specification signatureData:(id *)data;
- (id)_signatureDataForContentData:(id)data forSender:(id)sender compositionSpecification:(id)specification outError:(id *)error;
- (id)_signatureDataUsingMessageSecurity:(id)security forSender:(id)sender compositionSpecification:(id)specification outError:(id *)error;
- (id)_signatureDataUsingSecCMSWithData:(id)data forSender:(id)sender compositionSpecification:(id)specification outError:(id *)error;
- (id)newEncryptedPartWithData:(id)data compositionSpecification:(id)specification encryptedData:(id *)data;
- (id)_encryptedDataForContentData:(id)data compositionSpecification:(id)specification contentType:(id *)type error:(id *)error;
- (id)_encryptedDataUsingSecCMS:(id)cms compositionSpecification:(id)specification error:(id *)error;
- (id)_encryptedDataUsingMessageSecurity:(id)security compositionSpecification:(id)specification contentType:(id *)type error:(id *)error;
- (id)decodeMultipartSigned;
- (id)decodeApplicationPkcs7_mime;
- (id)_decodeWithBlock:(id /* block */)block;
- (id)_decodeEncodedData:(id)data detachedContentData:(id)data isEncrypted:(BOOL *)encrypted isSigned:(BOOL *)signed signers:(id)signers error:(id *)error;
- (id)_verifySignatureWithDecoder:(id)decoder signedData:(id *)data error:(id *)error;
- (struct __SecTrust *)_signingTrustForAddress:(id)address signatureInfo:(id)info encryptionTrust:(struct __SecTrust * *)trust error:(id *)error;
- (id)_signingErrorWithStatus:(int)status localizedDescription:(id)description;
- (id)_messageBodyFromData:(id)data outUnwrappedMessage:(id *)message;
- (id)_associateAttachmentsFrom:(id)from to:(id)to;
- (id)_decodeMultipartSignedWithSecCMS;
- (id)_decodeApplicationPkcs7MimeWithSecCMS;
- (BOOL)isSigned;
- (BOOL)isEncrypted;
- (id)signatureInfo;
- (id)SMIMEError;
- (id)copySigners;
- (unsigned int)formatFlowedOptions;
@end

#endif /* MFMimePart_FormatFlowedSupportInternal_h */