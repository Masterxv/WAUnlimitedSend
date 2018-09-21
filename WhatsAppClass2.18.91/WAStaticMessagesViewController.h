//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatMessagesViewController.h"

#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSArray, NSString, WAChatCellData;

__attribute__((visibility("hidden")))
@interface WAStaticMessagesViewController : WAChatMessagesViewController <WANavigationItemCustomBackButtonTitle>
{
    WAChatCellData *_topCellData;
    double _topCellRelativeOffset;
    NSArray *_messages;
}

+ (_Bool)preservesContentAlongBottomEdgeAfterRotation;
+ (_Bool)scrollsToBottomInitially;
+ (Class)messageBubbleTableViewCellClass;
+ (_Bool)needsWallpaper;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)willSelectTableViewCellAtIndexPath:(id)arg1;
- (void)setCellData:(id)arg1 forBubbleTableViewCell:(id)arg2 atIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (unsigned long long)presentationContextForBubbleTableViewCell:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)controller:(id)arg1 needsConfigureInsertedChatCellData:(id)arg2;
- (void)reloadMessagesControllerAtMessage:(id)arg1;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (void)viewDidLoad;
- (double)tableViewAdditionalTopContentInset;
- (id)initWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
