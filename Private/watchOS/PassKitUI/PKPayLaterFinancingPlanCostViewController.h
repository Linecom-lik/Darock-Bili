//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanCostViewController_h
#define PKPayLaterFinancingPlanCostViewController_h
@import Foundation;

#include "PKPayLaterViewController.h"
#include "PKPayLaterFinancingPlanCostSectionController.h"

@class PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanCostViewController : PKPayLaterViewController {
  /* instance variables */
  PKPayLaterFinancingPlan *_financingPlan;
  PKPayLaterFinancingPlanCostSectionController *_sectionController;
}

/* instance methods */
- (id)initWithFinancingPlan:(id)plan payLaterAccount:(id)account;
- (void)viewDidLoad;
- (void)didUpdateFinancingPlan:(id)plan;
- (id)pageTag;
- (id)additionalAnalyticsDictionary;
@end

#endif /* PKPayLaterFinancingPlanCostViewController_h */