//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

__attribute__((visibility("hidden")))
@interface XMPPUPICheckMPINRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 mpin:(id)arg4 receiverJID:(id)arg5 receiverHandle:(id)arg6 senderHandle:(id)arg7 amount:(id)arg8 completion:(CDUnknownBlockType)arg9;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

