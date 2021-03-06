//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSMutableArray, UIButton, UIImageView, WAMessageContactSlice;

__attribute__((visibility("hidden")))
@interface WAMessageContactSliceView : WAMessageContainerSliceView
{
    UIButton *_saveContactButton;
    UIButton *_messageContactButton;
    UIButton *_inviteContactButton;
    UIButton *_showAllContactsButton;
    UIImageView *_chevronImageView;
    NSMutableArray *_imageViews;
}

+ (void)initialize;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (id)wa_accessibilityElements;
- (id)showAllContactsButton;
@property(readonly, nonatomic) UIButton *messageContactButton;
@property(readonly, nonatomic) UIButton *inviteContactButton;
@property(readonly, nonatomic) UIButton *saveContactButton;
- (void)showAllContacts:(id)arg1;
- (void)messageContact:(id)arg1;
- (void)inviteContact:(id)arg1;
- (void)saveContact:(id)arg1;
- (void)prepareForPreviewWithContext:(id)arg1;
- (id)dataForPreviewingContext:(id)arg1 location:(struct CGPoint)arg2;
- (void)layoutActionButtons;
- (void)drawRect:(struct CGRect)arg1;
- (void)profilePictureManagerPictureDidChange:(id)arg1;
- (void)reloadProfilePictureForJID:(id)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageContactSlice *slice; // @dynamic slice;

@end

