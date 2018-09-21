//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorage.h>

@interface WAChatStorage (StarredMessages)
- (id)messagesDictionariesWithPredicate:(id)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3 groupBy:(id)arg4 propertiesToFetch:(id)arg5;
- (id)messagesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)downloadedStarredMessagesOfType:(int)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 olderThanMessageID:(id)arg2 startOffset:(unsigned long long)arg3 limit:(unsigned long long)arg4 gifOnly:(_Bool)arg5 inContext:(id)arg6;
- (id)starredMessagesInChatSessionsWithJIDs:(id)arg1 startOffset:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (void)markMessages:(id)arg1 asStarred:(_Bool)arg2 notifyWebClient:(_Bool)arg3;
@end
