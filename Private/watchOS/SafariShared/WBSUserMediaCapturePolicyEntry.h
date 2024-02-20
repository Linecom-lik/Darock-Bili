//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSUserMediaCapturePolicyEntry_h
#define WBSUserMediaCapturePolicyEntry_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface WBSUserMediaCapturePolicyEntry : NSObject

@property (nonatomic) double permissionExpirationDate;
@property (nonatomic) double permissionGrantDate;
@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSString *topLevelOrigin;
@property (retain, nonatomic) NSString *persistentSalt;
@property (nonatomic) unsigned long long permission;
@property (retain, nonatomic) NSMutableDictionary *ephemeralSalts;

/* instance methods */
- (id)initWithPermission:(unsigned long long)permission expirationPolicy:(unsigned long long)policy forOrigin:(id)origin topLevelOrigin:(id)origin;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (BOOL)isValid;
- (BOOL)permissionExpiresWithinOneDay;
- (void)updatePermission:(unsigned long long)permission expirationPolicy:(unsigned long long)policy;
- (BOOL)_isValidUserMediaPermission:(unsigned long long)permission;
@end

#endif /* WBSUserMediaCapturePolicyEntry_h */