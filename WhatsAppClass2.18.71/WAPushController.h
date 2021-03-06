//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKPushRegistryDelegate-Protocol.h"

@class NSString, PKPushRegistry;
@protocol WAPushControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAPushController : NSObject <PKPushRegistryDelegate>
{
    PKPushRegistry *_voipRegistry;
    _Bool _needsAPNSToken;
    _Bool _needsVOIPToken;
    long long _lastSeenVOIPPushIndex;
    long long _lastSeenAPNSPushIndex;
    id <WAPushControllerDelegate> _delegate;
    CDUnknownBlockType _voipPushCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType voipPushCompletionHandler; // @synthesize voipPushCompletionHandler=_voipPushCompletionHandler;
@property(nonatomic) __weak id <WAPushControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)didReceiveIncomingPushWithPayload:(id)arg1 forType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (id)jidFromLocalNotification:(id)arg1;
- (id)strippedRemoteNotification:(id)arg1;
- (void)registerForPushTokens;
- (void)registerForVOIPPush;
- (long long)reportVOIPPushDelayFromPayload:(id)arg1;
- (void)submitPushTokensIfReady;
- (void)processRemotePushPayload:(id)arg1;
- (void)processVOIPPushWithPayload:(id)arg1 counter:(long long)arg2;
- (void)applicationDidResumeForUnknownReason;
- (void)didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)applicationDidFinishLaunchingWithOptions:(id)arg1;
- (void)register;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

