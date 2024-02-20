//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScreenRoutePickerRemoteViewController_h
#define _UIScreenRoutePickerRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "_UIScreenRoutePickerRemoteViewControllerHost-Protocol.h"
#include "_UIScreenRoutePickerViewController.h"

@class NSExtension, NSString;
@protocol NSCopying><NSObject;

@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController<_UIScreenRoutePickerRemoteViewControllerHost>

@property (weak, nonatomic) _UIScreenRoutePickerViewController *publicController;
@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) NSObject<NSCopying><NSObject> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (void)invalidate;
- (void)_dismissViewController;
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* _UIScreenRoutePickerRemoteViewController_h */