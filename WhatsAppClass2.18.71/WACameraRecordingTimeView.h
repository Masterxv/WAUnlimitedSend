//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WACameraRecordingTimeView : UIView
{
    UILabel *_timeLabel;
    UIImageView *_recordingDot;
    CDStruct_1b6d18a9 _recordingTime;
}

@property(nonatomic) CDStruct_1b6d18a9 recordingTime; // @synthesize recordingTime=_recordingTime;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)updateAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
