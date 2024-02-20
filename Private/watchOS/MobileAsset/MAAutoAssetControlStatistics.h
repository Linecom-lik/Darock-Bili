//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetControlStatistics_h
#define MAAutoAssetControlStatistics_h
@import Foundation;

#include "MAAutoAssetControlStatisticsByCommand.h"
#include "MAAutoAssetControlStatisticsBySize.h"
#include "NSSecureCoding-Protocol.h"

@interface MAAutoAssetControlStatistics : NSObject<NSSecureCoding>

@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRequests;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesSuccess;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalClientRepliesFailure;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalQueuedClientRequests;
@property (retain, nonatomic) MAAutoAssetControlStatisticsByCommand *totalDequeuedClientRequests;
@property (nonatomic) long long totalAutoAssetJobsStarted;
@property (nonatomic) long long totalAutoJobsFinished;
@property (nonatomic) long long totalStagerDetermineJobsStarted;
@property (nonatomic) long long totalStagerDetermineJobsFinished;
@property (nonatomic) long long totalStagerDownloadJobsStarted;
@property (nonatomic) long long totalStagerDownloadJobsFinished;
@property (nonatomic) long long totalResumedInFlightJobs;
@property (nonatomic) long long totalSchedulerTriggeredJobs;
@property (nonatomic) long long totalFailuresToStartJobs;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *previouslyDownloaded;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalDownloaded;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalStaged;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalUnstaged;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalPromoted;
@property (retain, nonatomic) MAAutoAssetControlStatisticsBySize *totalRemoved;
@property (nonatomic) long long finishedJobSchedulerNetworkFailure;
@property (nonatomic) long long finishedJobSchedulerNotNetworkRelated;
@property (nonatomic) long long finishedJobClientNetworkFailure;
@property (nonatomic) long long finishedJobClientNotNetworkRelated;
@property (nonatomic) BOOL garbageCollectionPerformed;
@property (nonatomic) BOOL garbageCollectionReclaimSpace;
@property (nonatomic) long long garbageCollectionTotalReclaimedSpace;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetCount;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetSpace;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveSpace;
@property (nonatomic) long long garbageCollectionReclaimedStagedCount;
@property (nonatomic) long long garbageCollectionReclaimedStagedSpace;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedSpace;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)allocStringForBytes:(long long)bytes;

/* instance methods */
- (id)init;
- (id)initWithInitialValue:(long long)value;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (id)description;
- (id)summary;
@end

#endif /* MAAutoAssetControlStatistics_h */