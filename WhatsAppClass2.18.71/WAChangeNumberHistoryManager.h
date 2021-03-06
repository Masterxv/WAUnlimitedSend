//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAChangeNumberHistoryManager : NSObject
{
}

+ (id)sharedManager;
- (void)cleanupDatabase;
- (void)setDismissedForNewJID:(id)arg1;
- (void)setDismissedForOldJID:(id)arg1;
- (void)recordJIDChangeWithOldJID:(id)arg1 newJID:(id)arg2;
- (id)valueForJID:(id)arg1 inNamespace:(id)arg2;
- (id)previousJIDForContactWithJID:(id)arg1;
- (id)latestJIDForContactWithJID:(id)arg1;
- (void)reallyScheduleCleanupTask;
- (void)scheduleCleanupTask;
- (id)init;

@end

