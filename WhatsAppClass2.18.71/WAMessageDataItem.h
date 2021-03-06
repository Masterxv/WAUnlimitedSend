//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

@class NSDate, NSString, WAMessage;

__attribute__((visibility("hidden")))
@interface WAMessageDataItem : WAChatStorageManagedObject
{
}

+ (id)fetchRequestForType:(short)arg1 chatSession:(id)arg2;
+ (id)uniqueIdentifierForChatSession:(id)arg1;
+ (void)initialize;
+ (id)newItemForMessage:(id)arg1;
+ (void)copyDataItemsInMessage:(id)arg1 toMessage:(id)arg2;
+ (id)insertURLDataItemForWebPageMessage:(id)arg1;
+ (_Bool)wouldInsertDataItemsFor:(id)arg1;
+ (unsigned long long)insertDataItemsFromTextInMessage:(id)arg1 startingAtIndex:(long long)arg2 excludingURLs:(id)arg3;
+ (void)enumerateURLsFor:(id)arg1 excludingURLs:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (unsigned long long)internalInsertDataItemsForMessageIfNeeded:(id)arg1;
+ (void)insertDataItemsForMessages:(id)arg1;
+ (id)fetchRequestForMessagesNeedingDataItemsWithChatSessionID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *absoluteThumbnailPath;
- (void)setExternalRelativeThumbnailPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasThumbnail;
- (id)bestURL;
- (id)canonicalURL;
- (id)originalURL;
@property(readonly, nonatomic) NSString *context;
- (void)didSave;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (void)dealloc;
- (void)startObservingManagedObjectContext;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)awakeFromFetch;
- (id)makeCopyForForwardedOrChildMessage;
- (void)setDate:(id)arg1 allowExternalSideEffects:(_Bool)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *chatJID; // @dynamic chatJID;
@property(copy, nonatomic) NSString *content1; // @dynamic content1;
@property(copy, nonatomic) NSString *content2; // @dynamic content2;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) long long index; // @dynamic index;
@property(copy, nonatomic) NSString *matchedText; // @dynamic matchedText;
@property(retain, nonatomic) WAMessage *message; // @dynamic message;
@property(nonatomic) _Bool ownsThumbnail; // @dynamic ownsThumbnail;
@property(copy, nonatomic) NSString *sectionID; // @dynamic sectionID;
@property(copy, nonatomic) NSString *senderJID; // @dynamic senderJID;
@property(copy, nonatomic) NSString *summary; // @dynamic summary;
@property(copy, nonatomic) NSString *thumbnailPath; // @dynamic thumbnailPath;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) short type; // @dynamic type;

@end

