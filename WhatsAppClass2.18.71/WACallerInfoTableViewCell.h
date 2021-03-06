//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WACallerCancelButton;
@protocol WACallerInfoTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WACallerInfoTableViewCell : UITableViewCell
{
    WACallerCancelButton *_cancelButton;
    _Bool _showCancel;
    id <WACallerInfoTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WACallerInfoTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showCancel; // @synthesize showCancel=_showCancel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cancelPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

