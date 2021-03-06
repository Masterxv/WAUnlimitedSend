//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAModalNavigationController.h>

@protocol WAVerificationBaseControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAVerificationBaseController : WAModalNavigationController
{
    id <WAVerificationBaseControllerDelegate> _verificationDelegate;
}

@property(nonatomic) __weak id <WAVerificationBaseControllerDelegate> verificationDelegate; // @synthesize verificationDelegate=_verificationDelegate;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)cancelVerification;
- (void)finishVerification;
- (id)init;

@end

