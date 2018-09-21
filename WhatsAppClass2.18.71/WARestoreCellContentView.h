//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIProgressView, WABackupIcon;

__attribute__((visibility("hidden")))
@interface WARestoreCellContentView : UIView
{
    _Bool _showProgressView;
    UILabel *_labelTitle;
    UIProgressView *_progressView;
    UILabel *_labelError;
    WABackupIcon *_backupIcon;
}

+ (id)loadFromNib;
@property(nonatomic) _Bool showProgressView; // @synthesize showProgressView=_showProgressView;
@property(retain, nonatomic) WABackupIcon *backupIcon; // @synthesize backupIcon=_backupIcon;
@property(retain, nonatomic) UILabel *labelError; // @synthesize labelError=_labelError;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)updateAnimation;
- (void)updateFonts;
- (void)updateColors;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end
