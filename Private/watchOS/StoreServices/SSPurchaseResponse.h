//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPurchaseResponse_h
#define SSPurchaseResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SSPurchase.h"
#include "SSURLConnectionResponse.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSString;

@interface SSPurchaseResponse : NSObject<SSXPCCoding, NSSecureCoding> {
  /* instance variables */
  SSURLConnectionResponse *_response;
  NSMutableDictionary *_transactionIdentifiers;
}

@property (nonatomic) BOOL cancelsPurchaseBatch;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) SSPurchase *purchase;
@property (retain, nonatomic) SSURLConnectionResponse *URLResponse;
@property (copy, nonatomic) NSArray *downloadIdentifiers;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)downloadMetadataForItemIdentifier:(long long)identifier;
- (id)downloadsMetadata;
- (id)transactionIdentifierForItemIdentifier:(long long)identifier;
- (id)responseMetrics;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
@end

#endif /* SSPurchaseResponse_h */