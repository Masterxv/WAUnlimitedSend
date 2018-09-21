//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol WANoOpGestureRecognizerTouchDelegate;

__attribute__((visibility("hidden")))
@interface WANoOpGestureRecognizer : UIGestureRecognizer
{
    _Bool _isTracking;
    id <WANoOpGestureRecognizerTouchDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <WANoOpGestureRecognizerTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)stopTrackingIfNeeded;
- (void)handleTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
