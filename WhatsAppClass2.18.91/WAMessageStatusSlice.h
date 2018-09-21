//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface WAMessageStatusSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _textRect;
    _Bool _lastStarredState;
    unsigned long long _lastFooterStatus;
    UIColor *_textColor;
    long long _statusCharacterIndex;
    long long _starCharacterIndex;
    _Bool _isFromMe;
    _Bool _alwaysAlignOnOutside;
    NSTextStorage *_footerTextStorage;
    NSTextContainer *_footerTextContainer;
    NSLayoutManager *_footerLayoutManager;
    struct CGRect _footerTextRect;
    double _textRectOffsetY;
    double _footerTextRectOffsetY;
    _Bool _shouldDrawBackground;
    struct CGSize _starredStatusBackgroundSize;
    struct CGSize _notStarredStatusBackgroundSize;
    struct CGSize _statusBackgroundSize;
    UIImage *_backgroundImage;
    _Bool _isStarred;
    unsigned long long _style;
}

+ (unsigned long long)styleWithPreviousSlice:(id)arg1;
+ (Class)viewClass;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawFooterTextInCurrentContext;
- (void)drawGlyphsInRange:(struct _NSRange)arg1 exceptGlyphAtIndex:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawBackgroundInCurrentContext;
- (void)drawMessage:(id)arg1 inCurrentContextWithMode:(unsigned long long)arg2;
- (struct CGPoint)translatedBackgroundOriginFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)translatedPointFromPoint:(struct CGPoint)arg1;
- (struct CGRect)boundingRectForStarGlyphReturningOffsetToTopEdge:(double *)arg1;
- (struct CGRect)boundingRectForStatusGlyphReturningOffsetToTopEdge:(double *)arg1;
- (_Bool)shouldShowFooterStatusForMessage:(id)arg1;
- (id)attributedStringForFooterStatus:(unsigned long long)arg1;
- (id)attributedStringForStarWithColor:(id)arg1;
- (id)attributedStringForStar;
- (id)attributedStringForSpace;
- (id)attributedStringForDate:(id)arg1;
- (id)attributedStringForMessage:(id)arg1;
- (id)textContainerWithMetrics:(CDStruct_8ee84fd7)arg1;
- (void)setStarred:(_Bool)arg1;
- (void)setStatusBackgroundSizeWithMessage:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;
- (struct CGSize)visibleSize;
- (void)internalFitToWidth:(double)arg1;
- (struct UIEdgeInsets)backgroundInsets;
- (id)initWithMessage:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2 leadingEdgePadding:(double)arg3 style:(unsigned long long)arg4;

@end
