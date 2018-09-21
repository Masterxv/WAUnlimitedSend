//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WAStickerCategoryPresenting-Protocol.h"

@class NSFetchRequest, NSString, WAFetchedResultsController, WAStickerStorage;

__attribute__((visibility("hidden")))
@interface WAStickerCategoryManager : NSObject <NSFetchedResultsControllerDelegate, WAStickerCategoryPresenting>
{
    WAFetchedResultsController *_controller;
    WAStickerStorage *_storage;
}

@property(readonly, nonatomic) WAStickerStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)stickers;
- (long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) NSFetchRequest *request;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 stickerStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
