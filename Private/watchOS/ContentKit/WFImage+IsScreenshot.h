//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFImage_IsScreenshot_h
#define WFImage_IsScreenshot_h
@import Foundation;

@interface WFImage (IsScreenshot)
/* class methods */
+ (BOOL)imageSizeIndicatesScreenshot:(struct CGSize { double x0; double x1; })screenshot;

/* instance methods */
- (BOOL)isScreenshot;
@end

#endif /* WFImage_IsScreenshot_h */