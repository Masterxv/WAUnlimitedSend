//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

__attribute__((visibility("hidden")))
@interface WALocationManagerAuthRequester : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _showDialogBlock;
    CDUnknownBlockType _completion;
    _Bool _haveShownAlertAskingForPermission;
    _Bool _haveShownAlertAskingToEnableLocationServices;
    unsigned long long _backgroundLocationPreference;
}

+ (id)requestWithBackgroundLocationPreference:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool haveShownAlertAskingToEnableLocationServices; // @synthesize haveShownAlertAskingToEnableLocationServices=_haveShownAlertAskingToEnableLocationServices;
@property(readonly, nonatomic) _Bool haveShownAlertAskingForPermission; // @synthesize haveShownAlertAskingForPermission=_haveShownAlertAskingForPermission;
@property(nonatomic) unsigned long long backgroundLocationPreference; // @synthesize backgroundLocationPreference=_backgroundLocationPreference;
- (void).cxx_destruct;
- (void)tellUserToGiveUpgradePermission:(CDUnknownBlockType)arg1;
- (void)tellUserToGiveUsPermission:(CDUnknownBlockType)arg1;
- (void)tellUserToAskTheirParentsForPermissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)tellUserToEnableLocationServicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)showDialog;
- (void)showAlert:(id)arg1;
- (void)authorizationStatusDidChange:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)requestAuthorization;
- (_Bool)haveRequestedAlwaysAuthorization;
- (void)request;
- (_Bool)requestWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
