//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatDataStore.h"

#import "WAPersistentRequestManagerRegistering-Protocol.h"
#import "WAUpgradeCallback-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, WAChatSession, WAChatSessionSpotlightIndexer, WAExactTimer, WAMessageSearchEngine, WAMessagesBySessionTask, WASpotlightIndexer, WAStickerStartupManager, WATask;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WAChatStorage : WAChatDataStore <WAUpgradeCallback, WAPersistentRequestManagerRegistering>
{
    unsigned long long _failedSaveCounter;
    _Bool _scheduledDelayedSave;
    unsigned long long _unreadChatSessionCount;
    NSMutableDictionary *_cachedPushNames;
    WAMessageSearchEngine *_searchEngine;
    NSObject<OS_dispatch_group> *_searchEngineDispatchGroup;
    _Bool _searchEngineIndexingRapidly;
    unsigned long long _searchEngineIndexingRapidlyCount;
    WAStickerStartupManager *_stickerStartupManager;
    WATask *_taskIndexMessages;
    WAMessagesBySessionTask *_taskDeleteMessages;
    WAChatSessionSpotlightIndexer *_chatSessionSpotlightIndexer;
    NSMutableArray *_groupsPendingStateChanges;
    NSMutableSet *_pendingParticipantsRefreshRequests;
    NSMutableDictionary *_pendingOutgoingMessages;
    NSMutableArray *_participatingGroupsRequestCompletions;
    _Bool _needsRegisterSiriKitOnBecomeActive;
    WAChatSession *_statusChatSession;
    WAExactTimer *_statusPSATimer;
    WAExactTimer *_statusExpirationTimer;
    NSDictionary *_statusExpirationTasks;
    _Bool _statusBadgeVisible;
    _Bool _statusTabVisible;
    NSDictionary *_statusBadges;
    NSMutableDictionary *_statusMessageCounts;
    _Bool _didEverLoadDatabase;
    NSDate *_statusMarkerDate;
    CLLocationManager *_locationManager;
    CLLocation *_bestLocation;
    NSMutableSet *_locationQueue;
}

+ (void)updatePlaceholderCountForMessages:(id)arg1;
+ (id)findJIDInPath:(id)arg1;
+ (id)allValidationErrorsFrom:(id)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)refreshStatusETag;
+ (id)statusETag;
+ (double)statusHiddenIntervalFor:(short)arg1;
+ (double)statusVisibleIntervalFor:(short)arg1;
@property(retain, nonatomic) NSMutableSet *locationQueue; // @synthesize locationQueue=_locationQueue;
@property(retain, nonatomic) CLLocation *bestLocation; // @synthesize bestLocation=_bestLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) NSDate *statusMarkerDate; // @synthesize statusMarkerDate=_statusMarkerDate;
@property(readonly, nonatomic) WAStickerStartupManager *stickerStartupManager; // @synthesize stickerStartupManager=_stickerStartupManager;
@property(readonly, nonatomic) WAMessageSearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
- (void).cxx_destruct;
- (id)existingChatSessionForJID:(id)arg1;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
@property(readonly, nonatomic) long long newMessageCountSinceEnteringBackground;
- (id)existingChatSessionsForJIDs:(id)arg1 prefetchRelationships:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)existingChatSessionsForJIDs:(id)arg1 prefetchRelationships:(id)arg2 context:(id)arg3;
- (id)existingChatSessionsForJIDs:(id)arg1 prefetchRelationships:(id)arg2;
- (id)profilePictureItemForJID:(id)arg1 inContext:(id)arg2;
- (id)profilePictureItemForJID:(id)arg1;
- (void)didDetectDatabaseCorruption;
- (id)executeDatabaseFetchRequest:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (void)didCreateDatabase;
- (_Bool)needsDatabaseMigrationForMetadata:(id)arg1;
- (_Bool)messageSearchNeedsMigration;
- (_Bool)needsDatabaseRepairGetMetadata:(out id *)arg1;
- (void)dropDatabase;
- (_Bool)loadDatabase;
- (id)managedObjectContext;
- (id)initWithUniqueIdentifier:(id)arg1 model:(id)arg2 storeURL:(id)arg3 logIdentifier:(id)arg4 maximumBackgroundContextCount:(unsigned long long)arg5 blacklistBackup:(_Bool)arg6;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)fetchChatHistoryMonthsForJID:(id)arg1 year:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchChatHistoryYearsForJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)internalFetchChatHistoryForChatWithJID:(id)arg1 year:(long long)arg2 context:(id)arg3;
- (long long)numberOfMessagesInChatSession:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)earliestAndLatestMessageDateInChatSession:(id)arg1 year:(long long)arg2;
- (id)firstMessageInChatSession:(id)arg1 forDate:(id)arg2;
- (void)searchGroupsWithSubjectMatchingSearchText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchChatsWithJIDs:(id)arg1 orName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchChatSessionsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)predicateForGroupsWithSubject:(id)arg1;
- (id)predicateForChatsWithJIDs:(id)arg1 orName:(id)arg2;
- (id)predicateForCommonGroupsWithJID:(id)arg1;
- (void)updateStickerPackStoreContent;
- (void)scheduleInitialStickerPackDownload;
- (void)scheduleContentDownload;
- (id)chatSessionsMostContactedSince:(id)arg1 preferredContentType:(long long)arg2 limit:(unsigned long long)arg3;
- (id)mostContactedChatsWithPreferredContentType:(long long)arg1 limit:(unsigned long long)arg2;
- (void)addGroupPictureChangeEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)addGroupPictureDeleteEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)requestAndMergeAllListsFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)insertListIfNeeded:(id)arg1;
- (void)requestListsIfNeeded;
- (id)createNewList;
- (void)clearOldParticipantHistory;
- (_Bool)clearParticipantHistoryWithPredicate:(id)arg1;
- (void)markParticipantsWithJIDs:(id)arg1 admin:(_Bool)arg2 chatSession:(id)arg3 notification:(id)arg4;
- (void)requestDemotionOfAdminWithJID:(id)arg1 inGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestPromotionOfMemberWithJID:(id)arg1 inGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestUpdatedAdminsWithPromotedJIDs:(id)arg1 demotedJIDs:(id)arg2 inGroupWithJID:(id)arg3 webClientRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateGroupsAfterPhoneNumberChangeFrom:(id)arg1 to:(id)arg2;
- (void)modifyParticipantInChatSession:(id)arg1 oldJID:(id)arg2 newJID:(id)arg3 timestamp:(id)arg4;
- (void)removeParticipantsWithJIDs:(id)arg1 fromChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestRemovalOfMemberJIDs:(id)arg1 fromGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAdditionOfParticipantsWithJIDs:(id)arg1 toGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)syncGroupsOnlyIfNecessary;
- (void)requestParticipatingGroups:(_Bool)arg1 retryIfNecessary:(_Bool)arg2 requestType:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)requestParticipatingGroups:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestInfoForGroupWithJID:(id)arg1 requestType:(unsigned long long)arg2;
- (void)requestInfoForGroupWithJID:(id)arg1;
- (void)requestAnnouncementOnlyChangeForGroupWithJID:(id)arg1 to:(_Bool)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestLockedStateChangeForGroupWithJID:(id)arg1 to:(_Bool)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestDescriptionChangeForGroupWithJID:(id)arg1 to:(id)arg2 descriptionID:(id)arg3 webClientRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestSubjectChangeForGroupWithJID:(id)arg1 to:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endGroupWithWAChatSession:(id)arg1 participantUnknown:(_Bool)arg2 groupNotification:(id)arg3;
- (void)setAnnouncementOnly:(_Bool)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)setLockedState:(_Bool)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestGroupEndForWAChatSession:(id)arg1;
- (void)requestToLeaveGroupWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestGroupCreateForChatSession:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retryGroupCreateForChatSession:(id)arg1;
- (void)finishCreationOfGroupWithTempJID:(id)arg1 usingXMPPGroup:(id)arg2;
- (void)createChatSessionForContacts:(id)arg1 subject:(id)arg2 description:(id)arg3 descriptionID:(id)arg4 picture:(id)arg5 announcementOnly:(_Bool)arg6 locked:(_Bool)arg7 webClientRequestID:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)createChatSessionForContactJIDs:(id)arg1 subject:(id)arg2 description:(id)arg3 descriptionID:(id)arg4 picture:(id)arg5 announcementOnly:(_Bool)arg6 locked:(_Bool)arg7 webClientRequestID:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)legacyPrepareChatSession:(id)arg1 subject:(id)arg2 notification:(id)arg3;
- (void)failGroupsPendingStateChanges;
- (void)addGroupPendingStateChange:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setInviteCode:(id)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (_Bool)isJID:(id)arg1 participantInGroupWithJID:(id)arg2;
- (_Bool)hasGroupChatSessions;
- (void)processIncomingGroupV2Notification:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleInviteCodeResetNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleGroupAnnouncementOnlyNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleDeleteGroupLockedUnlockedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleDeleteGroupNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleParticipantPromotionDemotionNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleCreateGroupNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleParticipantChangedPhoneNumberNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleParticipantsRemovedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleParticipantsAddedNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleDescriptionChangeNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)handleSubjectChangeNotification:(id)arg1 groupNotification:(id)arg2 element:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)verifiedNameDidUpdate:(id)arg1;
- (void)reallyRegisterHandlersForPersistentRequestManager:(id)arg1;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)postGlobalChatSessionUpdateNotification;
@property(readonly, nonatomic) WASpotlightIndexer *chatSessionSpotlightIndexer;
- (unsigned long long)countAllMessagesOfType:(int)arg1;
- (unsigned long long)countEntitiesOfType:(Class)arg1 withPredicate:(id)arg2;
- (unsigned long long)countOfMessages;
- (id)tarFilePathsOfTypes:(id)arg1 usingContext:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)thumbnailFilePathsUsingContext:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (id)filePathsForProperty:(id)arg1 ofTypes:(id)arg2 usingContext:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;
- (id)estimatedVideoUploadSize;
- (void)calculatePotentialBackupSize:(CDStruct_ac5c10e2 *)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (unsigned long long)calculateDocumentTARExpectedSizeWithItemCount:(unsigned long long)arg1;
- (long long)calculateThumbnailTARExpectedSizeForSmallItemCount:(unsigned long long)arg1 largeItemCount:(unsigned long long)arg2 documentItemCount:(unsigned long long)arg3;
- (long long)calculateVideoTARExpectedSizeWithItemCount:(unsigned long long)arg1;
- (long long)calculateMediaTARExpectedSizeWithItemCount:(unsigned long long)arg1 shouldCancel:(CDUnknownBlockType)arg2;
- (long long)calculateStandardTarSizeForCount:(unsigned long long)arg1;
- (void)calculateDatabaseSizes:(CDStruct_33dcf794 *)arg1;
- (unsigned long long)sizeForMediaOfType:(int)arg1;
- (void)e2eIdentityChanged:(id)arg1;
- (void)addE2EIdentityChangeEventToChatSession:(id)arg1 groupMember:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)useBestLocationResult:(id)arg1;
- (void)stopLocationManagerIfPossible;
- (void)startLocationManagerIfNecessary;
- (void)oldLocationRequestFailedWithError:(id)arg1 userInfo:(id)arg2;
- (void)oldLocationRequestFinishedWithLocation:(id)arg1 userInfo:(id)arg2;
- (void)requestLocationWithCallbackDictionary:(id)arg1;
- (void)newLocationRequestFailedWithError:(id)arg1 message:(id)arg2;
- (void)newLocationRequestFinishedWithLocation:(id)arg1 message:(id)arg2 startDate:(id)arg3;
- (void)requestLocationForMessage:(id)arg1;
- (id)uniqueKeyOfMostRecentlySentLiveLocationMessageForContact:(id)arg1;
- (void)setLastLiveLocationMessageUniqueKey:(id)arg1 forContact:(id)arg2;
- (id)liveLocationMessageUniqueKeyCache;
- (void)resendPendingReceipts;
- (void)deleteUnusedRevocationSignals;
- (void)debug_deleteAllOrphanedMessagesNow;
- (void)didBulkDeleteMessagesInChatSession:(id)arg1 beforeDate:(id)arg2 ofTypes:(id)arg3 shouldDeleteStarred:(_Bool)arg4 fromWebClient:(_Bool)arg5;
- (void)deleteMessages:(id)arg1 fromWebClient:(_Bool)arg2;
- (void)deleteOrphanedMessages:(id)arg1;
- (void)clearAllChatSessions;
- (void)deleteAllChatSessions;
- (id)allChatSessionsToEmpty;
- (void)clearChatSession:(id)arg1 fromWebClient:(_Bool)arg2;
- (void)clearChatSession:(id)arg1;
- (void)deleteChatSessions:(id)arg1 fromWebClient:(_Bool)arg2;
- (void)deleteChatSession:(id)arg1 fromWebClient:(_Bool)arg2;
- (void)deleteChatSession:(id)arg1;
- (void)emptyChatSessions:(id)arg1 deleteGroups:(_Bool)arg2 deleteOthers:(_Bool)arg3 notifyWebClient:(_Bool)arg4;
- (void)prepareChatSessionForClearing:(id)arg1;
- (_Bool)addChildMessagesIfNeededForParentMessage:(id)arg1;
- (void)changeStatus:(int)arg1 forOutgoingMessages:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out _Bool *)arg6;
- (unsigned long long)changeStatus:(int)arg1 forOutgoingMessagesWithStanzas:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out _Bool *)arg6;
- (void)sendVideoAtURL:(id)arg1 isGIF:(_Bool)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 messageOrigin:(int)arg6 toChatSessions:(id)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)sendDocumentAttachment:(id)arg1 replyingToMessage:(id)arg2 toChatSessions:(id)arg3 openedFromURL:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 messageOrigin:(int)arg3 toChatSessions:(id)arg4 isImageLikeDocument:(_Bool)arg5 optimisticUploadIdentifier:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 toChatSessions:(id)arg3 hasTextFromURL:(_Bool)arg4;
- (id)multicastMessage:(id)arg1 forRemainingSessions:(id)arg2;
- (id)prepareMulticastMessage:(id)arg1 forRemainingSessions:(id)arg2;
- (void)sendVCard:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3 openedFromURL:(_Bool)arg4;
- (void)sendVCard:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3;
- (void)sendLocationMessage:(id)arg1 place:(id)arg2;
- (void)finishSendingLocationMessage:(id)arg1 place:(id)arg2;
- (void)sendMessageContainingPlace:(id)arg1 liveLocationEndDate:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 openedFromURL:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)messageWithAudioFilePath:(id)arg1 quotedMessage:(id)arg2 inChatSession:(id)arg3 openedFromURL:(_Bool)arg4 removesOriginal:(_Bool)arg5 origin:(int)arg6 durationSeconds:(long long)arg7 failMessageSend:(_Bool)arg8 shouldSendMessage:(_Bool)arg9 streaming:(_Bool)arg10 voicemail:(_Bool)arg11 streamingHash:(id)arg12 mediaKey:(id)arg13 error:(out id *)arg14;
- (void)sendVideoAtURL:(id)arg1 isGIF:(_Bool)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 replyingToMessage:(id)arg6 messageOrigin:(int)arg7 inChatSession:(id)arg8 openedFromURL:(_Bool)arg9 interactiveAnnotations:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)sendVideoAtURL:(id)arg1 isGIF:(_Bool)arg2 gifProvider:(id)arg3 caption:(id)arg4 cameraRollReferenceUrl:(id)arg5 replyingToMessage:(id)arg6 messageOrigin:(int)arg7 inChatSession:(id)arg8 interactiveAnnotations:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)sendVideoAtURL:(id)arg1 caption:(id)arg2 cameraRollReferenceUrl:(id)arg3 replyingToMessage:(id)arg4 messageOrigin:(int)arg5 inChatSession:(id)arg6 openedFromURL:(_Bool)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)sendVideoAtURL:(id)arg1 caption:(id)arg2 cameraRollReferenceUrl:(id)arg3 replyingToMessage:(id)arg4 messageOrigin:(int)arg5 inChatSession:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)sendMessageWithManagedSticker:(id)arg1 replyingToMessage:(id)arg2 messageOrigin:(int)arg3 inChatSession:(id)arg4;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 messageOrigin:(int)arg4 inChatSession:(id)arg5 isImageLikeDocument:(_Bool)arg6 openedFromURL:(_Bool)arg7 optimisticUploadIdentifier:(id)arg8 interactiveAnnotations:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 messageOrigin:(int)arg4 inChatSession:(id)arg5 isImageLikeDocument:(_Bool)arg6 optimisticUploadIdentifier:(id)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)sendMessageWithText:(id)arg1 metadata:(id)arg2 multicast:(_Bool)arg3 replyingToMessage:(id)arg4 quotingChatSession:(id)arg5 inChatSession:(id)arg6 hasTextFromURL:(_Bool)arg7 openedFromURL:(_Bool)arg8;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 multicast:(_Bool)arg3 replyingToMessage:(id)arg4 inChatSession:(id)arg5;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 hasTextFromURL:(_Bool)arg5 openedFromURL:(_Bool)arg6;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4;
- (unsigned long long)forwardMessages:(id)arg1 toChatSessions:(id)arg2;
- (void)retrySendingMessage:(id)arg1;
- (void)commitTransactions:(id)arg1 sendMulticastMessages:(id)arg2;
- (void)commitTransactions:(id)arg1 sendMessageGroups:(id)arg2;
- (void)sendMessage:(id)arg1 transaction:(id)arg2;
- (void)resendAllServerErrorReceiptsWithoutAck;
- (void)receivedServerErrorForStanzas:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3;
- (void)receivedServerErrorAckForStanzaID:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3 edit:(long long)arg4;
- (id)sentMessagesWithStanzaIDs:(id)arg1 toJID:(id)arg2;
- (void)receiveError:(id)arg1 forMessage:(id)arg2;
- (void)updateBackgroundMessageCountForReadChatSession:(id)arg1 readSort:(int)arg2;
- (void)markChatsReadBySiri:(id)arg1;
- (void)updateBackgroundMessageCountForNewUnreadMessage:(id)arg1 shouldBadge:(_Bool)arg2;
- (void)updateBackgroundMessageCountForJID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)stopTrackingBackgroundMessageCount;
- (void)startTrackingBackgroundMessageCount;
- (id)groupMembersWithJIDs:(id)arg1;
- (void)addExternalMessage:(id)arg1 cachedGroupMembers:(id)arg2 to:(id)arg3;
- (void)internalHandleExternalChatMessages:(id)arg1 transactionChatSessions:(id)arg2 cachedGroupMembers:(id)arg3;
- (_Bool)handleExternalChatMessages:(id)arg1 error:(out id *)arg2;
- (void)dismissChangeNumberNotificationForChatJID:(id)arg1;
- (void)handleChangeNumberFromJID:(id)arg1 toJID:(id)arg2 timestamp:(id)arg3;
- (void)callLoggerDidAddEvent:(id)arg1;
- (void)checkFutureProofMessages;
- (_Bool)insertOrUpdateIncomingHSMMessageWithText:(id)arg1 messageContainer:(id)arg2 error:(out id *)arg3;
- (id)messagePlaceholderForStanza:(id)arg1;
- (int)setChatSession:(id)arg1 pinned:(_Bool)arg2 notifyWebClient:(_Bool)arg3 webClientPinDate:(id)arg4;
- (id)fetchAllPinnedChatSession;
- (void)setAllChatSessionsArchived:(_Bool)arg1;
- (id)newOrExistingChatSessionsForContacts:(id)arg1 includeStatusChat:(_Bool)arg2;
- (id)insertChatSessionWithJID:(id)arg1 preferredContact:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)newOrExistingChatSessions:(out id *)arg1 forJIDs:(id)arg2 preferredContacts:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)newOrExistingChatSessions:(out id *)arg1 forContacts:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)newOrExistingChatSessions:(out id *)arg1 forJIDs:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)newOrExistingChatSession:(out id *)arg1 forContact:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)newOrExistingChatSession:(out id *)arg1 forJID:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)newOrExistingChatSessionsForContacts:(id)arg1 options:(unsigned long long)arg2;
- (id)newOrExistingChatSessionsForJIDs:(id)arg1 options:(unsigned long long)arg2;
- (id)newOrExistingChatSessionForContact:(id)arg1 options:(unsigned long long)arg2;
- (id)newOrExistingChatSessionForJID:(id)arg1 options:(unsigned long long)arg2;
- (id)newChatSessionForTimeBasedJID:(CDUnknownBlockType)arg1 options:(unsigned long long)arg2;
- (id)messageWithID:(id)arg1 inContext:(id)arg2;
- (id)messageWithID:(id)arg1;
- (id)messagesForChatSession:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 ascending:(_Bool)arg4;
- (id)messagesForChatSession:(id)arg1 limit:(long long)arg2;
- (id)unreadEligibleMessagesForChatSession:(id)arg1 beforeSort:(int)arg2 limit:(long long)arg3;
- (id)messagesForChatSession:(id)arg1 afterSort:(int)arg2 limit:(long long)arg3;
- (id)messagesForChatSession:(id)arg1 beforeSort:(int)arg2 limit:(long long)arg3;
- (void)enumerateRelevantObjectsForJIDs:(id)arg1 options:(unsigned long long)arg2 chatBlock:(CDUnknownBlockType)arg3 groupMemberBlock:(CDUnknownBlockType)arg4;
- (id)chatSessionsWithExpiredSharingLiveLocation;
- (id)chatSessionsSharingLiveLocation;
- (unsigned long long)unarchivedUnreadChatSessionCount;
- (id)allUnarchivedUnreadChatSessions;
@property(readonly, nonatomic) _Bool hasUnarchivedChatSessions;
@property(readonly, nonatomic) _Bool hasArchivedChatSessions;
@property(readonly, nonatomic) unsigned long long archivedChatSessionsCount;
@property(readonly, nonatomic) _Bool hasIndividualOrGroupChatSessions;
@property(readonly, nonatomic) _Bool hasChatMessages;
- (id)chatSessionWithObjectID:(id)arg1;
- (id)chatSessionsForContactsUpdateInContext:(id)arg1;
- (void)modifyUnreadChatSessionCountBy:(long long)arg1;
@property(readonly, nonatomic) long long unreadChatSessionCount;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)reportChatsFieldStats;
- (void)registerSiriKitVocabulary;
- (void)registerSiriKitVocabularyIfNeeded;
- (void)changeAfterRestore;
- (void)deleteDatabase;
- (void)saveBackgroundContext:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)delayedSave;
- (void)runDelayedSave:(id)arg1;
- (void)validateGroupChats;
- (_Bool)checkAndRepairPotentialValidationErrors:(id)arg1;
- (id)internalSaveMOCAndValidate;
- (_Bool)saveMOCAndValidate:(id *)arg1;
- (_Bool)saveDatabase:(id *)arg1;
- (_Bool)contextContainsUnindexedMessages:(id)arg1;
- (_Bool)arrayContainsUnindexedMessages:(id)arg1;
- (void)postNotificationForModifiedChatSessionJIDs:(id)arg1;
- (id)modifiedChatSessionJIDsFor:(id)arg1;
- (void)crashAndClearLastMessageReferenceForChatSession:(id)arg1;
- (void)performBeforeStoreDrop;
- (void)performAfterVerification;
- (void)performAfterStoreAdd:(_Bool)arg1;
- (void)performAfterInit;
- (void)deleteAllMedia;
- (void)fetchLocationMessagesInChatSession:(id)arg1 afterDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasSentMedia;
- (void)reportSearchIndexStatsIfNeededWithLastIndexedMessagesCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasSufficientFreeDiskSpaceForSearchIndexing;
- (void)countMessagesMatchingText:(id)arg1 chatSessionJIDs:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)searchMessagesMatchingText:(id)arg1 chatSessionJIDs:(id)arg2 starredOnly:(_Bool)arg3 type:(long long)arg4 offset:(unsigned long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)runWithTimeout:(double)arg1 orWhenIndexUpdated:(CDUnknownBlockType)arg2;
- (void)setBalancedShouldIndexRapidly:(_Bool)arg1;
- (void)setShouldIndexRapidly:(_Bool)arg1;
- (_Bool)internalPerformCommonMigration:(id)arg1;
- (_Bool)internalPerformMediaSectionIDMigration:(id)arg1;
- (_Bool)internalPerformManualMigration:(unsigned long long)arg1 storage:(id)arg2;
- (_Bool)internalMigrateLoadedChatDatabase:(id)arg1 metadata:(id)arg2;
- (_Bool)internalMigrateChatDatabase;
- (id)generateMigrateStoreURL;
- (id)backupDatabaseStoreURL;
- (_Bool)needManualMigration:(unsigned long long *)arg1 mediaSectionMigration:(_Bool *)arg2 forMetadata:(id)arg3;
- (void)reportMigrationTimeFieldStatsWithDuration:(double)arg1 databaseSize:(long long)arg2;
- (void)migrateChatDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recoverChatDatabaseFromFailedMigration;
- (_Bool)removeDocIDColumnUsingSQLite;
- (_Bool)removeDocIDColumnUsingBatchUpdate:(id)arg1;
- (_Bool)removeSearchIndex:(id)arg1;
- (_Bool)migrateMediaSectionID:(id)arg1;
- (id)validMessageObjectIDsInMediaItems:(id)arg1 storage:(id)arg2;
- (void)migrateVCardAndLocationSearch:(id)arg1;
- (void)migrateChatNotificationSettings:(id)arg1;
- (void)migrateGroupAdminAndCreator:(id)arg1;
- (void)migrateChatSessionProperties:(id)arg1;
- (id)sendPayment:(long long)arg1 currency:(id)arg2 credentialId:(id)arg3 note:(id)arg4 mentions:(id)arg5 receiverJID:(id)arg6 receiverHandle:(id)arg7 senderHandle:(id)arg8 clTransactionId:(id)arg9 encryptedMpin:(id)arg10 replyingToMessage:(id)arg11 inChatSession:(id)arg12;
- (void)fetchPushNamesIfNeeded;
- (void)updatePushNamesForJIDsIfNeeded:(id)arg1;
- (id)profilePushNameForJID:(id)arg1;
- (id)pushNameForJID:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *allPushNames;
- (id)downloadedRecentMessagesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 hashFromMessage:(CDUnknownBlockType)arg3;
- (id)downloadedUniquedRecentGIFMessagesWithLimit:(unsigned long long)arg1;
- (id)downloadedUniquedRecentStickerMessagesWithLimit:(unsigned long long)arg1;
- (void)revokeIncomingMessage:(id)arg1 updatedStanzaID:(id)arg2 outOfOrder:(_Bool)arg3 revokeDate:(id)arg4;
- (void)revokeMessage:(id)arg1 fromWebClient:(_Bool)arg2 updatedStanzaID:(id)arg3;
- (void)revokeMessage:(id)arg1;
- (void)cleanUpMessageBeforeRevoking:(id)arg1;
- (void)markCallAsSpam:(id)arg1 calleeJID:(id)arg2 callerJID:(id)arg3 isVideo:(_Bool)arg4 durationInMilliseconds:(int)arg5 terminatorJID:(id)arg6 terminationReason:(id)arg7;
- (void)reportJIDAsSpam:(id)arg1 reportOrigin:(unsigned long long)arg2;
- (void)markChatSessionAsSpam:(id)arg1 reportOrigin:(unsigned long long)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markChatSessionAsTrusted:(id)arg1 fromWebClient:(_Bool)arg2;
- (id)messagesDictionariesWithPredicate:(id)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3 groupBy:(id)arg4 propertiesToFetch:(id)arg5;
- (id)messagesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)downloadedStarredMessagesOfType:(int)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 olderThanMessageID:(id)arg2 startOffset:(unsigned long long)arg3 limit:(unsigned long long)arg4 gifOnly:(_Bool)arg5 inContext:(id)arg6;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (void)markMessages:(id)arg1 asStarred:(_Bool)arg2 notifyWebClient:(_Bool)arg3;
- (void)registerForLocalNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)updateStatusRankingForAllVisibleChatSessions;
- (void)checkPSADeletion;
- (void)schedulePSADeletionIn:(double)arg1;
- (id)queryIncomingStatusPSASession;
- (void)registerForMessageDeletionNotification;
- (void)registerForMessageReceivedNotification;
- (void)internalBadgeDidChangeExpirationDate;
- (void)hideStatusBadge;
- (void)applyBadgeDateBoundary;
- (void)saveBadgeDateBoundary;
- (void)updateStatusBadgeVisible;
- (_Bool)shouldShowStatusBadge;
@property(readonly, nonatomic, getter=isStatusBadgeVisible) _Bool statusBadgeVisible;
@property(nonatomic, getter=isStatusTabVisible) _Bool statusTabVisible;
- (void)internalPrepareStatusBadge;
- (unsigned long long)statusMessageCountFor:(id)arg1;
- (void)invalidateStatusMessageCountFor:(id)arg1;
- (void)registerForMessageUpdatedNotification;
- (void)registerForMessagesAddedNotification;
- (void)registerForServerShiftNotification;
- (void)rescheduleAllStatusExpirationTasks;
- (void)scheduleUpdateExpirationDate;
- (void)scheduleDelayedUpdateExpirationDate;
- (void)scheduleStatusExpirationTasks;
- (void)postVisibleExpirationDateChangedNotification;
- (id)nextVisibleStatusExpirationDate;
- (_Bool)statusMessageExpired:(id)arg1;
- (id)statusOldestMessageDateForType:(short)arg1;
- (void)updateLastStatusExpirationDate;
- (void)updateStatusListMembers;
@property(readonly, nonatomic) WAChatSession *statusChatSession;
- (id)existingStatusChatSession;
- (id)sidelistJIDs;
- (id)removeOrphanedFilesTaskForStore:(id)arg1;
- (id)orphanedFileTaskForStore:(id)arg1;
- (void)addAllExistingFilePathsToStore:(id)arg1;
- (void)searchForOrphanedMediaFilesIfNeededUsingQueue:(id)arg1;
- (id)task_cleanHSMMetadata;
- (id)task_fixSpotlightStatus;
- (id)task_cleanMediaCache;
- (id)task_cleanStreamingMediaKeyCache;
- (id)task_indexMultiVCards;
- (id)task_indexVCardsMentions;
- (id)task_retryIndexMessages;
- (id)task_deleteMessagesWithoutChatSessions;
- (void)extractWebURLsForChatSessionIfNeeded:(id)arg1 shouldRunAgain:(CDUnknownBlockType)arg2;
- (id)task_extractWebURLs;
- (id)createIndexMessagesTask;
- (id)createDeleteMessagesTask;
@property(readonly, nonatomic) WATask *taskDeleteMessages;
- (void)startIndexingMessages;
- (void)setUpRecurringTasks;
- (_Bool)indexVCardMentionsForMessages:(id)arg1 chatContext:(id)arg2 contactStorage:(id)arg3;
- (id)indexMultiVCardMessagesInContext:(id)arg1 startDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)indexVCardMentionsForMessagesInContext:(id)arg1 startDate:(id)arg2 limit:(unsigned long long)arg3 contactsStorage:(id)arg4;
- (void)fetchVCardsFromKnownContactsForWhatsAppID:(id)arg1 contactsStorage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)trustedSenderJIDs:(id)arg1 chatContext:(id)arg2 contactStorage:(id)arg3;
- (_Bool)relayOutgoingMessage:(id)arg1;
- (id)messagePlaceholderForWebMessageInfo:(id)arg1;
- (id)allOutgoingMessagesAndPTTInChatSessionIncludingAndAfterMessage:(id)arg1;
- (id)recentMessagesForChatSession:(id)arg1 activityLevel:(long long)arg2;
- (id)allChatSessionsInContext:(id)arg1;
- (unsigned long long)countMessagesInChatSession:(id)arg1 ofType:(int)arg2;
- (unsigned long long)countMediaMessagesInChatSession:(id)arg1;
- (unsigned long long)countMessagesInChatSession:(id)arg1;
- (id)messagesInChatSession:(id)arg1 ofType:(int)arg2 count:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 withRelation:(unsigned long long)arg5 toMessageID:(id)arg6;
- (id)mediaMessagesInChatSession:(id)arg1 count:(unsigned long long)arg2 sortOrder:(unsigned long long)arg3 withRelation:(unsigned long long)arg4 toMessageID:(id)arg5;
- (id)messagesInChatSession:(id)arg1 count:(unsigned long long)arg2 sortOrder:(unsigned long long)arg3 withRelation:(unsigned long long)arg4 toMessageID:(id)arg5;
- (id)messagesPredicateForChatSession:(id)arg1 type:(int)arg2 beforeMessage:(id)arg3 afterMessage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

