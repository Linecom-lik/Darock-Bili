//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaStreamGroup_h
#define VCMediaStreamGroup_h
@import Foundation;

#include "VCObject.h"
#include "AVCStatisticsCollector.h"
#include "VCMediaCaptureController-Protocol.h"
#include "VCMediaKeyIndex.h"
#include "VCMediaRecorder.h"
#include "VCMediaStreamDelegate-Protocol.h"
#include "VCMediaStreamNotification-Protocol.h"
#include "VCNetworkFeedbackController.h"
#include "VCSecurityEventHandler-Protocol.h"
#include "VCSecurityKeyManager.h"

@class NSArray, NSDictionary, NSString, TimingCollection;
@protocol OS_dispatch_queue;

@interface VCMediaStreamGroup : VCObject<VCMediaStreamDelegate, VCMediaCaptureController, VCSecurityEventHandler, VCMediaStreamNotification> {
  /* instance variables */
  NSArray *_mediaStreams;
  NSDictionary *_groupEntries;
  NSString *_participantUUID;
  NSString *_sessionUUID;
  NSObject<OS_dispatch_queue> *_stateQueue;
  VCNetworkFeedbackController *_networkFeedbackController;
  TimingCollection *_perfTimers;
  double _creationTime;
  double _firstMediaPacketTime;
  double _firstMediaKeyIndexTime;
  BOOL _firstMediaFrameGapDetected;
  VCMediaKeyIndex *_firstMediaKeyIndex;
  BOOL _areStreamsSuspended;
  id _delegate;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  unsigned long long _idsParticipantID;
  unsigned int _rtpTimestampRate;
  VCSecurityKeyManager *_securityKeyManager;
  struct tagVCJBTargetEstimatorSynchronizer * _jbTargetEstimatorSynchronizer;
}

@property (readonly, nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int syncGroupID;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaSubtype;
@property (readonly, nonatomic) unsigned int state;
@property (nonatomic) NSObject<VCMediaCaptureController> *captureController;
@property (nonatomic) BOOL encryptionInfoReceived;
@property (readonly, nonatomic) NSArray *mediaStreamInfoArray;
@property (readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap;
@property (readonly, nonatomic) BOOL hasRepairedStreams;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) VCMediaRecorder *mediaRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)willStart;
- (void)didStart;
- (void)willStop;
- (void)didStop;
- (void)didPause:(BOOL)pause;
- (id)initWithConfig:(id)config;
- (void)dealloc;
- (BOOL)setupStreamsWithConfig:(id)config;
- (BOOL)configureStreams;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5] unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)metrics;
- (void)callDelegateWithBlock:(id /* block */)block;
- (BOOL)containsStreamWithIDSStreamID:(unsigned short)id;
- (void)setParticipantJoinedToFirstMKITimer;
- (void)setFirstMKIToFirstMediaReceivedTimerForMKIReceivedTime;
- (void)setTotalMediaStallSaveIntervalWithTime:(double)time;
- (void)setupPerfTimersWithMediaKeyIndex:(id)index perfTimerIndexToStart:(int)start;
- (void)finalizePerfTimersForFirstMediaFrameWithTime:(double)time;
- (id)startMediaStreams;
- (id)stopMediaStreams;
- (BOOL)shouldSetPause:(BOOL)pause onStream:(id)stream;
- (id)setPauseOnMediaStreams:(BOOL)streams;
- (id)pauseMediaStreams;
- (id)resumeMediaStreams;
- (id)start;
- (id)stop;
- (id)pause;
- (id)resume;
- (void)handleActiveConnectionChange:(id)change;
- (BOOL)containsStreamWithSSRC:(unsigned int)ssrc;
- (BOOL)addSyncDestination:(id)destination;
- (BOOL)removeSyncDestination:(id)destination;
- (void)vcMediaStreamServerDidDie:(id)die;
- (id)startCapture;
- (id)stopCapture;
- (BOOL)handleEncryptionInfoChange:(id)change;
- (void)resetDecryptionTimeout;
- (void)didEncryptionKeyRollTimeout;
- (void)registerMediaStreamNotificationDelegate;
- (void)unregisterMediaStreamNotificationDelegate;
- (void)mediaStream:(id)stream didReceiveNewMediaKeyIndex:(id)index;
- (void)mediaStream:(id)stream didReceiveRTPGapForMediaKeyIndex:(id)index;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET * x2[10] struct OpaqueCMBlockBuffer * x3; char * x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472] unsigned short x8[12] unsigned char x9; BOOL x10; unsigned long long x11; struct { struct _RTCPPacketList * x0; } x12; } *)rtcppackets;
- (void)mediaStream:(id)stream didReceiveFlushRequestWithPayloads:(id)payloads;
@end

#endif /* VCMediaStreamGroup_h */