//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WAMediaPickerVideoAssetOverlayView : UIView
{
    UILabel *_durationLabel;
    UIImageView *_mediaTypeIndicator;
    UIImageView *_gradientView;
    UILabel *_starLabel;
    unsigned long long _iconType;
}

+ (double)preferredHeight;
+ (void)initialize;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setStarred:(_Bool)arg1;
- (void)setDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

