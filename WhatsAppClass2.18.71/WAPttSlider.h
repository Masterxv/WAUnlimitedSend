//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface WAPttSlider : UISlider
{
    UIImage *_thumbImage;
    _Bool _isUsingLargeThumbImage;
    _Bool _thumbHidden;
    double _skipValue;
}

+ (id)largeThumbImage;
+ (id)standardThumbImage;
+ (id)thumbImageWithDiameter:(double)arg1;
@property(nonatomic) double skipValue; // @synthesize skipValue=_skipValue;
@property(nonatomic, getter=isThumbHidden) _Bool thumbHidden; // @synthesize thumbHidden=_thumbHidden;
- (void).cxx_destruct;
- (_Bool)shouldUseLargeThumbImage;
- (void)updateThumbImage;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)skipBackward;
- (_Bool)skipForward;
- (id)initWithFrame:(struct CGRect)arg1;

@end

