//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAVerificationBaseController.h"

#import "WAChangeConfirmationControllerDelegate-Protocol.h"
#import "WAChangeNumberInputControllerDelegate-Protocol.h"
#import "WANetworkChangedControllerDelegate-Protocol.h"
#import "WAPassInputViewControllerDelegate-Protocol.h"
#import "WATwoFactorRegistrationViewControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAVerificationChangeNumberController : WAVerificationBaseController <WAChangeConfirmationControllerDelegate, WANetworkChangedControllerDelegate, WAChangeNumberInputControllerDelegate, WATwoFactorRegistrationViewControllerDelegate, WAPassInputViewControllerDelegate>
{
    unsigned long long _mode;
}

@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)passInputViewControllerDidFail2FA:(id)arg1 response:(id)arg2;
- (void)passInputViewControllerDidCancel:(id)arg1;
- (void)passInputViewControllerDidFinish:(id)arg1;
- (void)registrationViewControllerVerificationDidCancel:(id)arg1;
- (void)registrationViewControllerVerificationDidFail:(id)arg1;
- (void)registrationViewControllerVerificationDidSucceed:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3;
- (void)changeNumberInputControllerDidCancel:(id)arg1;
- (void)changeNumberInputControllerDidEnterPhone:(id)arg1;
- (void)changeNumberInputControllerDidFail2FA:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 response:(id)arg4;
- (void)changeNumberInputControllerDidFinish:(id)arg1 normalizedNumber:(id)arg2 countryCode:(id)arg3 notificationContacts:(id)arg4;
- (void)networkChangedController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)changeConfirmationControllerDidCancel:(id)arg1;
- (void)changeConfirmationControllerDidFinish:(id)arg1;
- (void)presentTwoFactorCodeViewControllerWithCountryCode:(id)arg1 phoneNumber:(id)arg2 response:(id)arg3 smsVerificationCodeUsed:(id)arg4;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
