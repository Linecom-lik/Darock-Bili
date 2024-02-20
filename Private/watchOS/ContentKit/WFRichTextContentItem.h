//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRichTextContentItem_h
#define WFRichTextContentItem_h
@import Foundation;

#include "WFGenericFileContentItem.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"

@class NSDictionary, NSString, WFFileType;

@interface WFRichTextContentItem : WFGenericFileContentItem<WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)documentTypeForType:(id)type;
+ (id)attributesDictionaryForType:(id)type;
+ (void)loadAttributedStringInWebViewFromHTMLFile:(id)htmlfile handler:(id /* block */)handler attributedStringOptions:(id)options documentAttributes:(id *)attributes name:(id)name coercionOptions:(id)options;
+ (id)htmlHeader;
+ (id)htmlFooter;
+ (id)normalizedHTMLDocumentFromHTML:(id)html;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)htmldata;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)instance;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (void)generateRTFDRepresentation:(id /* block */)rtfdrepresentation fromAttributedString:(id)string forType:(id)type;
- (void)generateDataRepresentation:(id /* block */)representation fromAttributedString:(id)string forType:(id)type;
- (id)generateFileRepresentationForType:(id)type options:(id)options error:(id *)error;
- (void)generateFileRepresentations:(id /* block */)representations options:(id)options forType:(id)type;
- (void)getFileRepresentationsForSerialization:(id /* block */)serialization;
- (void)generateAttributedString:(id /* block */)string fromFile:(id)file forClass:(Class)class coercionOptions:(id)options;
- (void)generateObjectRepresentations:(id /* block */)representations options:(id)options forClass:(Class)class;
- (BOOL)canGenerateRepresentationForType:(id)type;
- (BOOL)isContent;
- (void)getPDFFromResource:(id)resource includeMargin:(BOOL)margin options:(id)options handler:(id /* block */)handler;
@end

#endif /* WFRichTextContentItem_h */