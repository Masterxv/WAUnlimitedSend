//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAPaymentUPIGetTokenRequest : WAPaymentRequest
{
    NSString *_providerType;
    NSString *_deviceId;
    NSString *_tokenType;
    NSString *_challenge;
}

+ (id)identifier;
@property(readonly, copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeviceId:(id)arg1 tokenType:(id)arg2 challenge:(id)arg3 providerType:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

