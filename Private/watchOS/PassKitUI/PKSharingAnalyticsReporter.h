//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingAnalyticsReporter_h
#define PKSharingAnalyticsReporter_h
@import Foundation;

@class NSData, NSString;

@interface PKSharingAnalyticsReporter : NSObject {
  /* instance variables */
  NSString *_subject;
  BOOL _isSessionOwned;
}

@property (readonly, nonatomic) NSData *sessionToken;

/* instance methods */
- (id)init;
- (id)initWithSubject:(id)subject sessionToken:(id)token reuseExistingSession:(BOOL)session;
- (void)dealloc;
- (void)sendEvent:(id)event;
@end

#endif /* PKSharingAnalyticsReporter_h */