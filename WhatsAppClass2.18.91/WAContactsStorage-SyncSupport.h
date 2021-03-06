//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAContactsStorage.h>

@interface WAContactsStorage (SyncSupport)
+ (id)fullNotificationHashFromString:(id)arg1;
+ (id)notificationHashDataFromString:(id)arg1 length:(unsigned long long)arg2;
- (void)processResultsOfFullSync:(_Bool)arg1 usingContext:(id)arg2 listContacts:(id)arg3 sidelistContacts:(id)arg4 statusEntries:(id)arg5;
- (id)allContactsMatchingPhoneNumbers:(id)arg1 inContext:(id)arg2;
- (id)sidelistJIDsMatchingHash:(id)arg1;
- (id)allSidelistContactsInContext:(id)arg1;
- (id)unsyncedSidelistJIDsFromJIDs:(id)arg1;
- (id)processContactAddedNotificationWithHash:(id)arg1;
- (id)statusTimestampsForWhatsAppIDs:(id)arg1 contactStatus:(short)arg2;
- (id)phoneNumbersForFullSync:(_Bool)arg1;
@end

