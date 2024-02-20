//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKShareMetadata_CKDaemonExtensions_h
#define CKShareMetadata_CKDaemonExtensions_h
@import Foundation;

@interface CKShareMetadata (CKDaemonExtensions)
/* instance methods */
- (struct _OpaquePCSShareProtection *)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)pcs;
- (BOOL)hasEncryptedData;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)pcsblob pcsManager:(id)manager;
- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)pcsblob pcsManager:(id)manager;
@end

#endif /* CKShareMetadata_CKDaemonExtensions_h */