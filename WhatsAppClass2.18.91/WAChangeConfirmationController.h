//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSLayoutConstraint, UILabel, UIScrollView;
@protocol WAChangeConfirmationControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAChangeConfirmationController : WAViewController
{
    id <WAChangeConfirmationControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UILabel *_textLabel;
    NSLayoutConstraint *_contentViewMinimumHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewMinimumHeight; // @synthesize contentViewMinimumHeight=_contentViewMinimumHeight;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WAChangeConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)wa_viewLayoutMarginsDidChange;
- (void)loadView;
- (void)nextAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
