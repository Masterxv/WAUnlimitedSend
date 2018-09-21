//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMPPConnectionHandler-Protocol.h"

@class NSCache, NSDate, NSMutableArray, NSMutableDictionary, NSString, WAChatSessionTransactionListener, WAWebClientSession, XMPPConnection;
@protocol WAWebClientDelegate;

__attribute__((visibility("hidden")))
@interface WAWebClient : NSObject <XMPPConnectionHandler>
{
    XMPPConnection *_xmppConnection;
    WAWebClientSession *_currentSession;
    _Bool _available;
    _Bool _didResumeOnDifferentBrowser;
    _Bool _idleTimerDisabled;
    NSMutableDictionary *_deferredSyncTasks;
    NSCache *_actionResponseCache;
    NSString *_actionResponseCacheEpoch;
    NSMutableArray *_requestsPendingChallenge;
    NSMutableDictionary *_issuedChallenges;
    NSString *_lastSyncedBrowserID;
    NSMutableArray *_pausedForwardRequests;
    long long _forwardRequestsPauseLevel;
    NSDate *_lastForwardMostContactedChats;
    double _lastActiveTriggerTime;
    NSMutableDictionary *_chatStates;
    WAChatSessionTransactionListener *_chatTransactionListener;
    id <WAWebClientDelegate> _delegate;
}

+ (_Bool)isSupported;
@property(nonatomic) __weak id <WAWebClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendParticipantsIfNeeded:(id)arg1 forSession:(id)arg2;
- (void)notifyChangeOfArchiveStateInChatSession:(id)arg1;
- (void)markNotSpamChatWithJID:(id)arg1;
- (void)sendResultCode:(long long)arg1 forRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reallyForwardMostContactedChatsForWebSession:(id)arg1;
- (void)forwardMostContactedChatsForWebSession:(id)arg1;
- (void)forwardMostContactedChatsIfNeeded;
- (CDUnknownBlockType)requestCompletionHandlerWithDescription:(id)arg1 ackingNotification:(id)arg2;
- (CDUnknownBlockType)requestCompletionHandlerWithDescription:(id)arg1;
- (void)unpauseForwardRequests;
- (void)pauseForwardRequests;
- (void)enqueueForwardRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (void)transactionDidProcessMessages:(id)arg1;
- (void)e2eIdentityChanged:(id)arg1;
- (void)batteryLevelOrStateDidChange:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)reenableIdleTimer;
- (void)disableIdleTimer;
- (void)pauseOutgoingChatStateForJID:(id)arg1;
- (void)setOutgoingChatState:(unsigned long long)arg1 forJID:(id)arg2;
- (unsigned long long)outgoingChatStateForJID:(id)arg1;
- (_Bool)handleNotification:(id)arg1 onConnection:(id)arg2;
- (void)connectionDidReceiveOfflineCompleteMarker:(id)arg1;
- (_Bool)handleLoginResponseStanza:(id)arg1 onConnection:(id)arg2;
- (void)xmppConnection:(id)arg1 initialConfigurationAsync:(CDUnknownBlockType)arg2;
- (void)clearCurrentSession;
- (void)makeSessionCurrent:(id)arg1;
- (void)terminateCurrentSessionWithReason:(unsigned long long)arg1;
- (void)beginNewSessionWithQRCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginSessionWithQRCode:(id)arg1 completion:(id)arg2;
- (void)removeSession:(id)arg1;
- (void)removeSessionWithData:(id)arg1;
- (id)allSavedSessionDataObjects;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) _Bool hasActiveSession;
- (void)dealloc;
- (id)initWithXMPPConnection:(id)arg1;
- (void)rejectServerLoginWithWebRef:(id)arg1 reason:(unsigned long long)arg2;
- (void)handlePersistentLoginRequestErrorForRequest:(id)arg1;
- (void)acceptPersistentLoginRequest:(id)arg1;
- (id)challengeWithNotificationID:(id)arg1 webRef:(id)arg2 browserID:(id)arg3 syncType:(id)arg4;
- (void)sendChallengeToServerForRequest:(id)arg1 notificationID:(id)arg2 syncType:(id)arg3;
- (void)handleChallengeResponse:(id)arg1;
- (_Bool)isJIDCurrentUser:(id)arg1;
- (void)handleUnsubscribeLocation:(id)arg1 inNotification:(id)arg2;
- (void)handleDisableLocation:(id)arg1 inNotification:(id)arg2;
- (void)handleAddContacts:(id)arg1 inNotification:(id)arg2;
- (void)handleAddContact:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleSetStatusPrivacyTo:(long long)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleContactsStatusPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleWhitelistStatusPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleBlacklistStatusPrivacy:(id)arg1 inNotification:(id)arg2;
- (void)handleSetProfile:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleSetBlockedTo:(_Bool)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleRemoveBlock:(id)arg1 inNotification:(id)arg2;
- (void)handleAddBlock:(id)arg1 inNotification:(id)arg2;
- (void)handleDescriptionGroup:(id)arg1 inNotification:(id)arg2;
- (void)handlePropGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleCreateGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleSubjectGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleLeaveGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleDemoteGroup:(id)arg1 inNotification:(id)arg2;
- (void)handlePromoteGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleAddGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleRemoveGroup:(id)arg1 inNotification:(id)arg2;
- (void)handleDeletePicture:(id)arg1 inNotification:(id)arg2;
- (void)handleSetPicture:(id)arg1 inNotification:(id)arg2;
- (void)handleModifyChat:(id)arg1 inNotification:(id)arg2;
- (void)handleSpamChat:(id)arg1 inNotification:(id)arg2;
- (void)handleSetSpam:(id)arg1 inNotification:(id)arg2;
- (void)handlePinChat:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleSetStarredStateTo:(_Bool)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleUnstarChat:(id)arg1 inNotification:(id)arg2;
- (void)handleStarChat:(id)arg1 inNotification:(id)arg2;
- (void)handleMuteChat:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleSetArchivedStateTo:(_Bool)arg1 forElement:(id)arg2 inNotification:(id)arg3;
- (void)handleUnarchiveChat:(id)arg1 inNotification:(id)arg2;
- (void)handleArchiveChat:(id)arg1 inNotification:(id)arg2;
- (void)handleClearChat:(id)arg1 inNotification:(id)arg2;
- (void)handleDeleteChat:(id)arg1 inNotification:(id)arg2;
- (void)handlePlayedReceived:(id)arg1 inNotification:(id)arg2;
- (void)handleSetStatus:(id)arg1 inNotification:(id)arg2;
- (void)handleSetStatusRead:(id)arg1 inNotification:(id)arg2;
- (void)handleSetRead:(id)arg1 inNotification:(id)arg2;
- (void)handleRecordingPresence:(id)arg1 inNotification:(id)arg2;
- (void)handlePausedPresence:(id)arg1 inNotification:(id)arg2;
- (void)handleComposingPresence:(id)arg1 inNotification:(id)arg2;
- (void)handleSubscribePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleUnavailablePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleAvailablePresence:(id)arg1 inNotification:(id)arg2;
- (void)handleDebugAction:(id)arg1 inNotification:(id)arg2;
- (void)handleSetAction:(id)arg1 inNotification:(id)arg2;
- (void)handleRelayCall:(id)arg1 inNotification:(id)arg2;
- (void)handleRelayMessage:(id)arg1 inNotification:(id)arg2;
- (void)handleRelayAction:(id)arg1 inNotification:(id)arg2;
- (void)handleDeleteAction:(id)arg1 inNotification:(id)arg2;
- (void)handleSyncAction:(id)arg1 inNotification:(id)arg2;
- (_Bool)callHandlerForElement:(id)arg1 inNotification:(id)arg2 defaultVerb:(id)arg3;
- (id)formatSelectorFromString:(id)arg1 defaultValue:(id)arg2;
- (void)sendImplicitSuccessResultCode:(long long)arg1 andFinishAction:(id)arg2;
- (void)sendResultCode:(long long)arg1 andFinishAction:(id)arg2;
- (void)sendImplicitSuccessResultCode:(long long)arg1 andAckNotification:(id)arg2;
- (void)sendResultCode:(long long)arg1 andAckNotification:(id)arg2;
- (void)finishAction:(id)arg1 withResultCode:(long long)arg2;
- (id)cachedActionResultCodeForRequestID:(id)arg1;
- (id)beginActionForNotification:(id)arg1;
- (void)handleTask:(id)arg1 inNotification:(id)arg2;
- (void)handleAllDeferredTasks;
- (void)handleWebNotification:(id)arg1;
- (void)sendGroupInfoForChatSession:(id)arg1 forNotification:(id)arg2;
- (void)sendRecentMessagesInChats:(id)arg1 forSession:(id)arg2;
- (id)outgoingMessagesAndPTTFromMessages:(id)arg1 withStatusUpdateAfterTimestamp:(double)arg2 lastTimestamp:(double *)arg3;
- (void)sendResumeResponseWithChatSessionStates:(id)arg1 forNotification:(id)arg2;
- (void)sendContacts:(id)arg1 forNotification:(id)arg2 forSession:(id)arg3 isDuplicate:(_Bool)arg4 isPreemptive:(_Bool)arg5;
- (void)sendContactsForNotification:(id)arg1 forSession:(id)arg2 isDuplicate:(_Bool)arg3 isPreemptive:(_Bool)arg4;
- (void)sendChatSessions:(id)arg1 forNotification:(id)arg2 forSession:(id)arg3 isDuplicate:(_Bool)arg4 isPreemptive:(_Bool)arg5;
- (void)sendChatSessionsForNotification:(id)arg1 forSession:(id)arg2 isDuplicate:(_Bool)arg3 isPreemptive:(_Bool)arg4;
- (void)sendPreemptiveResponseForSession:(id)arg1;
- (void)handleCallOfferQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleCallQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleVnameQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleLocationParticipantQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleLocationSubscribeQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleNotificationQuery:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleStatusQuery:(id)arg1 inNotification:(id)arg2 withRelation:(unsigned long long)arg3;
- (void)handleStatusAfterQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleStatusBeforeQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleStatusQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleVcardQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleUrlQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleIdentityQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleStarQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleSearchQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleGroupQuery:(id)arg1 inNotification:(id)arg2;
- (void)handlePreviewStatusQuery:(id)arg1 inNotification:(id)arg2;
- (void)handlePreviewQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMessageInfoQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleReceiptQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleResumeQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMediaQuery:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleMediaMessageQuery:(id)arg1 inNotification:(id)arg2 withRelation:(unsigned long long)arg3;
- (void)handleMediaMessageAfterQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMediaMessageBeforeQuery:(id)arg1 inNotification:(id)arg2;
- (void)reallyHandleMessageQuery:(id)arg1 inNotification:(id)arg2 withRelation:(unsigned long long)arg3;
- (void)handleMessageAfterQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleMessageBeforeQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleContactsQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleContactsRetryQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleChatQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleChatRetryQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleActionQuery:(id)arg1 inNotification:(id)arg2;
- (void)handleSyncQuery:(id)arg1 inNotification:(id)arg2;
- (void)sendResultCode:(long long)arg1 forRequestID:(id)arg2;
- (void)forwardMostContactedChats;
- (void)notifyLiveLocationUpdateFromSenderJID:(id)arg1 message:(id)arg2 elapsed:(long long)arg3;
- (void)notifyAddedOrUpdatedContacts:(id)arg1 removedJIDs:(id)arg2 removeMissingJIDs:(_Bool)arg3;
- (void)notifyAllChatsArchived:(_Bool)arg1;
- (void)notifyChangeNumberNotificationDismissedForChatJID:(id)arg1;
- (void)notifyNumberChangedFromJID:(id)arg1 toJID:(id)arg2;
- (void)notifyAllChatsDeleted;
- (void)notifyChatDeleted:(id)arg1;
- (void)notifyAllChatsCleared;
- (void)notifyChatCleared:(id)arg1 beforeDate:(id)arg2 ofKind:(id)arg3 shouldDeleteStarred:(_Bool)arg4;
- (void)notifyMessagesStarredStateChanged:(id)arg1 starred:(_Bool)arg2 inChatJID:(id)arg3;
- (void)notifyMessagesDeleted:(id)arg1 inChatSession:(id)arg2;
- (void)notifyChangeOfMuteStateForJID:(id)arg1;
- (void)notifyChangeOfPinnedStateInChatSession:(id)arg1;
- (void)notifyChangeOfNameInChatSessions:(id)arg1;
- (void)markStatusAsSeen:(id)arg1;
- (void)markChatWithJID:(id)arg1 read:(_Bool)arg2;
- (void)notifyStatusChangeInMessage:(id)arg1;
- (void)forwardModifyTagForChatSession:(id)arg1;
- (void)forwardUpdateForChatSession:(id)arg1;
- (void)forwardCallOffer:(id)arg1;
- (void)forwardMessage:(id)arg1 invisible:(_Bool)arg2 update:(_Bool)arg3;
- (void)forwardMessagesIfNeeded:(id)arg1 fromChatSession:(id)arg2 update:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
