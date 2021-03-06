//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPhoneNumberTextFieldDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UITextField, UIView, WAContactProperty, WAPhoneNumberTextField;
@protocol WANewContactPhoneNumberInputCellDelegate;

__attribute__((visibility("hidden")))
@interface WANewContactPhoneNumberInputCell : UITableViewCell <WAPhoneNumberTextFieldDelegate>
{
    WAPhoneNumberTextField *_phoneNumberTextField;
    UITextField *_countryCodeTextField;
    UIView *_separatorView;
    UIActivityIndicatorView *_loadingView;
    UIImageView *_verifiedImageView;
    UILabel *_stateLabel;
    NSString *_defaultSystemLabel;
    NSString *_countryCode;
    id <WANewContactPhoneNumberInputCellDelegate> _delegate;
    WAContactProperty *_property;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WAContactProperty *property; // @synthesize property=_property;
@property(nonatomic) __weak id <WANewContactPhoneNumberInputCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateStateChange;
- (void)performCheckPhoneNumber;
- (_Bool)becomeFirstResponder;
- (void)phoneNumberTextFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)countryCodeDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

