//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDRemoteAuthorizationRecord_h
#define _HDRemoteAuthorizationRecord_h
@import Foundation;

@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject {
  /* instance variables */
  HKAuthorizationRequestRecord *_record;
  id /* block */ _requestSentHandler;
  id /* block */ _requestFinishedHandler;
}

/* instance methods */
@end

#endif /* _HDRemoteAuthorizationRecord_h */