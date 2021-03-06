//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source, WASyncManagerDelegate;

__attribute__((visibility("hidden")))
@interface WASyncManager : NSObject
{
    NSObject<OS_dispatch_source> *_fullSyncTimer;
    NSObject<OS_dispatch_source> *_syncPollingTimer;
    NSMutableArray *_syncHistory;
    NSDate *_nextSyncDate;
    unsigned long long _nextSyncMode;
    unsigned long long _nextSyncContext;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingPhoneNumbers;
    NSSet *_processedDeletes;
    NSSet *_processedPhoneNumbers;
    NSMutableSet *_pendingOfflineContactUpdates;
    _Bool _syncEnabled;
    _Bool _syncInProgress;
    id <WASyncManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <WASyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processIncomingContactsNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactUpdated:(id)arg1 offlineStorage:(_Bool)arg2;
- (void)saveSyncHistory;
- (void)cleanSyncHistory;
- (void)loadSyncHistory;
- (void)addDeletedJIDs:(id)arg1;
- (void)addPhoneNumbers:(id)arg1;
- (void)reset;
- (void)enableSync;
- (void)processBusinessResults:(id)arg1;
- (void)finishUnifiedSyncWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2 withResult:(int)arg3 failureReason:(int)arg4;
- (void)processUnifiedSyncResponse:(id)arg1 listUsers:(id)arg2 sidelistUsers:(id)arg3 mode:(unsigned long long)arg4 context:(unsigned long long)arg5 error:(id)arg6;
- (void)reallyPerformUnifiedSync;
- (void)removePendingOfflineContactUpdates;
- (int)runSyncIfNecessary;
- (void)runFullSyncIfNecessary;
- (void)setNextFullSyncDate:(id)arg1;
- (void)requestSyncWithMode:(unsigned long long)arg1 context:(unsigned long long)arg2;
- (void)requestInteractiveQuerySync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestNotificationDeltaSync;
- (void)requestInteractiveDeltaSync;
- (void)requestInteractiveFullSync;
- (id)init;

@end

