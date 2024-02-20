//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSAccountDeviceInfoTask_h
#define AMSAccountDeviceInfoTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSProcessInfo.h"
#include "AMSURLRequestEncoder.h"
#include "AMSURLSession.h"

@class ACAccount, ACAccountStore, NSString;

@interface AMSAccountDeviceInfoTask : AMSTask<AMSBagConsumer>

@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) AMSURLRequestEncoder *requestEncoder;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)initWithAccount:(id)account accountStore:(id)store bag:(id)bag;
- (id)initWithAccount:(id)account accountStore:(id)store bag:(id)bag requestEncoder:(id)encoder session:(id)session serialNumber:(id)number;
- (id)perform;
- (id)_deviceInfoRequest;
- (id)_requestWithURL:(id)url;
- (void)_updateAccountWithInfo:(id)info;
@end

#endif /* AMSAccountDeviceInfoTask_h */