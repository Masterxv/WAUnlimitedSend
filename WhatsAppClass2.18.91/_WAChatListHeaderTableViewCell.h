//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _WAChatListHeaderTableViewCell : UITableViewCell
{
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconImageView;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *titleText;
- (void)reloadFonts;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end
