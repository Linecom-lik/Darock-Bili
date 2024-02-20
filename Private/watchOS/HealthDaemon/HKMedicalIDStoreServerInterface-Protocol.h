//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDStoreServerInterface_Protocol_h
#define HKMedicalIDStoreServerInterface_Protocol_h
@import Foundation;

@protocol HKMedicalIDStoreServerInterface <NSObject>
/* instance methods */
- (void)remote_fetchMedicalIDWithCompletion:(id /* block */)completion;
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)completion;
- (void)remote_updateMedicalIDData:(id)iddata lastFetchedMedicalIDData:(id)iddata completion:(id /* block */)completion;
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)iddata completion:(id /* block */)completion;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(id /* block */)completion;
- (void)remote_medicalIDClinicalContactsWithCompletion:(id /* block */)completion;
- (void)remote_addEmergencyContact:(id)contact completion:(id /* block */)completion;
- (void)remote_removeEmergencyContact:(id)contact completion:(id /* block */)completion;
@end

#endif /* HKMedicalIDStoreServerInterface_Protocol_h */