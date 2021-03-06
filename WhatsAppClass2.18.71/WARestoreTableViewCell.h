//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIProgressView, WABackupIcon, WARestoreCellContentView;

__attribute__((visibility("hidden")))
@interface WARestoreTableViewCell : UITableViewCell
{
    WARestoreCellContentView *_restoreContentView;
}

+ (id)newCell;
@property(readonly, nonatomic) WARestoreCellContentView *restoreContentView; // @synthesize restoreContentView=_restoreContentView;
- (void).cxx_destruct;
@property(nonatomic) _Bool showProgressView;
@property(readonly, nonatomic) WABackupIcon *backupIcon;
@property(readonly, nonatomic) UILabel *labelError;
@property(readonly, nonatomic) UIProgressView *progressView;
@property(readonly, nonatomic) UILabel *labelTitle;
- (void)updateAnimation;
- (void)updateFonts;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureRestoreCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

