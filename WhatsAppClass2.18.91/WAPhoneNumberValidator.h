//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAPhoneNumberValidator : NSObject
{
}

+ (int)validatePhoneNumber:(id)arg1 forCountry:(id)arg2;
+ (id)trimPhoneNumber:(id)arg1 forCountry:(id)arg2;
+ (void)validatePhoneNumber:(id)arg1 forCountry:(id)arg2 presentingAlertFromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (int)extractFromFreeFormNumber:(id)arg1 countryCode:(id *)arg2 phoneNumber:(id *)arg3 countryInfo:(id *)arg4;
+ (void)presentAlertForPhoneNumberError:(int)arg1 forCountry:(id)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
