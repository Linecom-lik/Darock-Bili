//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCManagedMediaSummaryCell_h
#define DMCManagedMediaSummaryCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "DMCManagedMediaCell-Protocol.h"

@interface DMCManagedMediaSummaryCell : UITableViewCell<DMCManagedMediaCell>
/* instance methods */
- (void)setManagedBook:(id)book;
- (void)setManagedApp:(id)app;
- (void)_setText:(id)text image:(id)image;
@end

#endif /* DMCManagedMediaSummaryCell_h */