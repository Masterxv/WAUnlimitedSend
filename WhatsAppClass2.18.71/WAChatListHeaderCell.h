//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface WAChatListHeaderCell : UITableViewCell
{
    UIButton *_broadcastButton;
    UIButton *_groupButton;
}

@property(readonly, nonatomic) UIButton *groupButton; // @synthesize groupButton=_groupButton;
@property(readonly, nonatomic) UIButton *broadcastButton; // @synthesize broadcastButton=_broadcastButton;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)dealloc;
- (id)init;

@end

