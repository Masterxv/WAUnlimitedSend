//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSMutableArray, NSString;
@protocol _WAListRecipientsControllerDelegate;

__attribute__((visibility("hidden")))
@interface _WAListRecipientsController : NSObject <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_contacts;
    id <_WAListRecipientsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_WAListRecipientsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (id)removeGroupMemberFromContacts:(id)arg1 returningIndex:(out long long *)arg2;
- (id)addGroupMemberToContacts:(id)arg1 returningIndex:(out long long *)arg2;
- (long long)indexOfContactWithJID:(id)arg1;
- (id)contactAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfContacts;
- (id)allContacts;
- (void)fetchAllContacts;
- (void)contactsVisualRepresentationDidChange:(id)arg1;
- (void)resortContacts;
- (long long)compareContact:(id)arg1 toContact:(id)arg2;
- (void)updateContactsWithStatusV2Data:(id)arg1;
- (void)dealloc;
- (id)initWithList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
