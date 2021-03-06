//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAActionManager.h"

@class NSDate, NSNumber, WABackupKeyManager, WAChatStorage, WACloudBackupManager, WamEventICloudBackup;

__attribute__((visibility("hidden")))
@interface WABackup : WAActionManager
{
    _Bool _additionalSpaceRequired;
    _Bool _includeVideos;
    _Bool _didTransferToCloud;
    unsigned long long _potentialSize;
    unsigned long long _additionalSpaceAmount;
    unsigned long long _actualSize;
    WACloudBackupManager *_manager;
    WAChatStorage *_storage;
    WABackupKeyManager *_keyManager;
    WamEventICloudBackup *_event;
    NSDate *_startDate;
    NSNumber *_fieldStatTimeInterval;
    unsigned long long _estimatedTotalSize;
    unsigned long long _backupVersion;
}

+ (id)stringForError:(id)arg1;
@property _Bool didTransferToCloud; // @synthesize didTransferToCloud=_didTransferToCloud;
@property unsigned long long backupVersion; // @synthesize backupVersion=_backupVersion;
@property unsigned long long estimatedTotalSize; // @synthesize estimatedTotalSize=_estimatedTotalSize;
@property _Bool includeVideos; // @synthesize includeVideos=_includeVideos;
@property(retain) NSNumber *fieldStatTimeInterval; // @synthesize fieldStatTimeInterval=_fieldStatTimeInterval;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) WamEventICloudBackup *event; // @synthesize event=_event;
@property(readonly) WABackupKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) WAChatStorage *storage; // @synthesize storage=_storage;
@property(readonly) WACloudBackupManager *manager; // @synthesize manager=_manager;
@property(nonatomic) unsigned long long actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) unsigned long long additionalSpaceAmount; // @synthesize additionalSpaceAmount=_additionalSpaceAmount;
@property(nonatomic) _Bool additionalSpaceRequired; // @synthesize additionalSpaceRequired=_additionalSpaceRequired;
@property(nonatomic) unsigned long long potentialSize; // @synthesize potentialSize=_potentialSize;
- (void).cxx_destruct;
- (void)sendFieldStatsWithError:(id)arg1;
- (void)phaseCompleted:(id)arg1;
- (void)initializeFieldStats;
- (_Bool)test:(int)arg1 didPass:(_Bool)arg2;
- (unsigned long long)maximumPhase;
- (id)errorForCode:(unsigned long long)arg1;
- (id)errorDomain;
- (void)start;
- (id)initWithManager:(id)arg1 keyManager:(id)arg2 chatStorage:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithOptions:(unsigned long long)arg1;

@end

