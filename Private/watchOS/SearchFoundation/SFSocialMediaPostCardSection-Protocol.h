//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFSocialMediaPostCardSection_Protocol_h
#define SFSocialMediaPostCardSection_Protocol_h
@import Foundation;

#include "SFCardSection.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCard.h"
#include "SFColor.h"
#include "SFCommand.h"
#include "SFImage.h"
#include "SFRichText.h"
#include "SFSocialMediaPostCardSection-Protocol.h"
#include "SFUserReportRequest.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol SFSocialMediaPostCardSection <SFCardSection>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL nameNoWrap;
@property (copy, nonatomic) NSNumber *nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) SFImage *verifiedGlyph;
@property (retain, nonatomic) SFImage *profilePicture;
@property (retain, nonatomic) SFRichText *post;
@property (retain, nonatomic) SFImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFSocialMediaPostCardSection_Protocol_h */