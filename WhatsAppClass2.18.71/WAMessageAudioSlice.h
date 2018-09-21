//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

__attribute__((visibility("hidden")))
@interface WAMessageAudioSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _durationTextRect;
    _Bool _onLeftEdge;
    long long _currentDuration;
    double _bottomContentMargin;
    struct CGRect _durationStringFrame;
}

+ (double)profileImageScale;
+ (Class)viewClass;
@property(readonly, nonatomic) double bottomContentMargin; // @synthesize bottomContentMargin=_bottomContentMargin;
@property(nonatomic) long long currentDuration; // @synthesize currentDuration=_currentDuration;
@property(readonly, nonatomic) struct CGRect durationStringFrame; // @synthesize durationStringFrame=_durationStringFrame;
- (void).cxx_destruct;
- (void)drawDurationStringInCurrentContext;
- (void)recalculateDurationStringFrame;
- (void)internalFitToWidth:(double)arg1;
- (_Bool)showsMedia;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end
