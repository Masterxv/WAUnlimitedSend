//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WAChatButton, WAProfilePictureThumbnailView;

__attribute__((visibility("hidden")))
@interface WAReportSpamCell : UITableViewCell
{
    UIView *_backgroundView;
    WAChatButton *_blockButton;
    WAChatButton *_reportButton;
    WAChatButton *_trustButton;
    _Bool _trustButtonSemiBold;
    WAProfilePictureThumbnailView *_profilePictureView;
    UIImageView *_verifiedBadgeView;
    UILabel *_bizNameLabel;
    UILabel *_bizInfoLabel;
    UILabel *_bizDescriptionLabel;
    _Bool _biz;
    _Bool _bizVerified;
}

+ (double)preferredHeightForWidth:(double)arg1 chatJID:(id)arg2 promptText:(id)arg3 checkBusiness:(_Bool)arg4;
+ (_Bool)selectable;
+ (id)bizNameTextFont;
+ (id)buttonTitleFont;
+ (id)warningTextFont;
- (void).cxx_destruct;
- (void)configureBusinessWithJID:(id)arg1;
- (void)configureBlockButtonTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)configureSpamButtonTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)configureTrustButtonTitle:(id)arg1 semiBold:(_Bool)arg2 action:(CDUnknownBlockType)arg3;
- (void)configurePrompt:(id)arg1;
- (void)reloadFonts;
- (void)layoutSubviews;
- (void)setUpBizElementsIfNeeded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

