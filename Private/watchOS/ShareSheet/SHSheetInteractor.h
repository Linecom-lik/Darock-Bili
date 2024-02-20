//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetInteractor_h
#define SHSheetInteractor_h
@import Foundation;

#include "SFCollaborationCreationDelegate-Protocol.h"
#include "SFCollaborationPerformerDelegate-Protocol.h"
#include "SHSheetActivityPerformer.h"
#include "SHSheetActivityPerformerDelegate-Protocol.h"
#include "SHSheetActivityPerformerPresentationInterface-Protocol.h"
#include "SHSheetInteractor-Protocol.h"
#include "SHSheetInteractorDelegate-Protocol.h"
#include "SHSheetServiceManager.h"
#include "SHSheetServiceManagerDelegate-Protocol.h"
#include "SHSheetSession.h"
#include "SHSheetSessionDelegate-Protocol.h"

@class NSString, SFCollaborationPerformer;

@interface SHSheetInteractor : NSObject<SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SFCollaborationPerformerDelegate, SFCollaborationCreationDelegate, SHSheetInteractor>

@property (retain, nonatomic) SHSheetSession *session;
@property (retain, nonatomic) SHSheetServiceManager *serviceManager;
@property (retain, nonatomic) SHSheetActivityPerformer *activityPerformer;
@property (retain, nonatomic) SFCollaborationPerformer *collaborationPerformer;
@property (weak, nonatomic) NSObject<SHSheetInteractorDelegate> *delegate;
@property (weak, nonatomic) NSObject<SHSheetActivityPerformerPresentationInterface> *activityPresentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSessionStarted;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)setWantsCollaborativeSession:(BOOL)session;
- (void)updateSessionWithContext:(id)context;
- (void)startSession;
- (void)stopSession;
- (void)requestServiceUpdate;
- (void)_updateRemoteScene;
- (void)invalidateRemoteSession;
- (void)clearActivityForResult:(id)result;
- (void)performActivity:(id)activity;
- (void)performPeopleSuggestion:(id)suggestion;
- (void)performActivityWithRequest:(id)request forExtension:(id)extension completion:(id /* block */)completion;
- (void)preheatActivitiesIfNeeded;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)performShareActivityWithIdentifier:(id)identifier;
- (void)performActionActivityWithIdentifier:(id)identifier;
- (void)performEditAction;
- (void)performPersonSuggestionWithIdentifier:(id)identifier;
- (void)removePersonSuggestionWithIdentifier:(id)identifier;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)identifier activityCategory:(long long)category;
- (void)favoriteUserDefaultsActivity:(BOOL)activity withIdentifier:(id)identifier activityCategory:(long long)category;
- (void)updateUserDefaultsFavorites:(id)favorites activityCategory:(long long)category;
- (void)performUserDefaultsActivityWithIdentifier:(id)identifier activityCategory:(long long)category;
- (void)longPressShareActivityWithIdentifier:(id)identifier;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)identifier;
- (void)_setupServiceManagerIfNeeded;
- (void)_performActivity:(id)activity;
- (void)_runActivity:(id)activity;
- (void)_deleteSharingURL:(id)url;
- (void)_didPerformActivityWithResult:(id)result;
- (id)_prepareActivityProxyForRequest:(id)request;
- (void)sessionConfigurationDidChangeForSession:(id)session;
- (void)showOptionsDidChangeForSession:(id)session;
- (void)metadataCollectionDidLoadForSession:(id)session;
- (void)headerMetadataDidChangeForSession:(id)session;
- (void)isCollaborativeDidChangeForSession:(id)session;
- (void)collaborationFooterViewModelDidChangeForSession:(id)session;
- (id)collaborationSharingResultForActivity:(id)activity;
- (id)collaborationServiceForSession:(id)session;
- (void)session:(id)session didChangeMetadata:(id)metadata;
- (void)serviceManagerDidChangeConnectionState:(id)state;
- (void)serviceManager:(id)manager performActivity:(id)activity;
- (void)serviceManager:(id)manager performUserDefaultsActivityWithContext:(id)context;
- (void)serviceManager:(id)manager performAirdropViewActivityWithNoContentView:(BOOL)view;
- (void)serviceManager:(id)manager didUpdateAirDropTransferWithChange:(id)change;
- (void)serviceManager:(id)manager willPerformActivityInServiceForRequest:(id)request completion:(id /* block */)completion;
- (void)serviceManager:(id)manager didPerformInServiceActivityWithIdentifier:(id)identifier completed:(BOOL)completed items:(id)items error:(id)error;
- (id)serviceManager:(id)manager identificationResultsFromSuggestedImageData:(id)data;
- (void)_recordActivityViewControllerInteraction;
- (void)_recordActivityInteractionForResult:(id)result;
- (id)linkMetadataForActivityPerformer:(id)performer;
- (id)collaborationServiceForActivityPerformer:(id)performer;
- (void)createSharingURLForCollaborationRequest:(id)request completionHandler:(id /* block */)handler;
- (void)createSharingURLWithParticipantsForCollaborationRequest:(id)request completionHandler:(id /* block */)handler;
- (void)addParticipantsAllowedForCollaborationItem:(id)item completionHandler:(id /* block */)handler;
- (void)shareStatusForURL:(id)url completionHandler:(id /* block */)handler;
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id /* block */)handler;
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(id /* block */)handler;
- (void)manageShareForDocumentInSharedFolder;
- (void)didBeginCreationForCollaborationPerformer:(id)performer;
- (void)didFinishCreationForCollaborationPerformer:(id)performer;
- (void)didCancelCreationForCollaborationPerformer:(id)performer;
- (void)didFailCreationForCollaborationPerformer:(id)performer error:(id)error;
@end

#endif /* SHSheetInteractor_h */