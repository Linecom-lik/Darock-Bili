//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebPDFSearchOperation_h
#define UIWebPDFSearchOperation_h
@import Foundation;

#include "NSOperation.h"
#include "UIPDFDocument.h"
#include "UIWebPDFSearchOperationDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface UIWebPDFSearchOperation : NSOperation {
  /* instance variables */
  NSMutableArray *_results;
  unsigned long long _pageIndex;
  unsigned long long _totalResultsCount;
  BOOL _complete;
}

@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
@property (readonly, nonatomic) unsigned long long currentPageResultCount;
@property (retain) UIPDFDocument *documentToSearch;
@property (readonly, nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long startingPageIndex;
@property (nonatomic) unsigned long long numberOfResultsToSkip;
@property (nonatomic) unsigned long long resultLimit;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) double documentScale;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)_hitSearchLimit;
- (void)_notifyDelegateOfStatus;
- (struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)pdffont size:(double)size;
- (id)sanitizedAttributedStringForAttributedString:(id)string;
- (void)_search;
- (void)main;
- (void)cancel;
@end

#endif /* UIWebPDFSearchOperation_h */