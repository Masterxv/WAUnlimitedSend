//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UITableViewDelegate-Protocol.h"
#import "WAAddressBookCountryPickerDelegate-Protocol.h"
#import "WAAddressBookLabelPickerDelegate-Protocol.h"
#import "WAAddressBookPropertyPickerDelegate-Protocol.h"
#import "WAContactAddressEditingCellDelegate-Protocol.h"
#import "WAContactMultiValueEditingCellDelegate-Protocol.h"
#import "WAContactPropertyEditingCellDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"
#import "WANewContactPhoneNumberInputCellDelegate-Protocol.h"
#import "WANewContactTextEditingCellDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSSet, NSString, UITableView, UITableViewCell, WAContact, WACountryInfo, WANewContactPhoneNumberInputCell;
@protocol WANewContactViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WANewContactViewController : WAViewController <UITableViewDelegate, WACountryPickerControllerDelegate, WANewContactTextEditingCellDelegate, WANewContactPhoneNumberInputCellDelegate, WAAddressBookPropertyPickerDelegate, WAContactPropertyEditingCellDelegate, WAContactMultiValueEditingCellDelegate, WAContactAddressEditingCellDelegate, WAAddressBookLabelPickerDelegate, WAAddressBookCountryPickerDelegate>
{
    NSMutableArray *_propertyKeys;
    NSMutableArray *_propertyValues;
    NSArray *_expandedPropertyKeys;
    NSArray *_allPropertyKeys;
    NSSet *_addtionalPropertyKeys;
    UITableView *_tableView;
    _Bool _expanded;
    NSDictionary *_propertiesDict;
    NSIndexPath *_indexPathForEditingCell;
    id <WANewContactViewControllerDelegate> _delegate;
    WAContact *_contactToAdd;
    WACountryInfo *_selectedCountry;
    UITableViewCell *_countrySelectorCell;
    WANewContactPhoneNumberInputCell *_phoneNumberInputCell;
}

@property(retain, nonatomic) WANewContactPhoneNumberInputCell *phoneNumberInputCell; // @synthesize phoneNumberInputCell=_phoneNumberInputCell;
@property(retain, nonatomic) UITableViewCell *countrySelectorCell; // @synthesize countrySelectorCell=_countrySelectorCell;
@property(retain, nonatomic) WACountryInfo *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(retain, nonatomic) WAContact *contactToAdd; // @synthesize contactToAdd=_contactToAdd;
@property(nonatomic) __weak id <WANewContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resignAndFindNextFirstResponderForCell:(id)arg1;
- (void)addNewValueToMultiValueProperty:(id)arg1;
- (id)contactPropertyForKey:(id)arg1 atIndex:(long long)arg2;
- (void)showCountryPicker;
- (void)updatePhoneInputCell;
- (void)updateCountryCell;
- (void)expandForm;
- (id)unusedContactProperties;
- (void)validateChanges;
- (id)tableIndexPathForContactProperty:(id)arg1;
- (unsigned long long)insertIndexForProperty:(id)arg1;
- (void)addressBookPropertyPickerDidCancel:(id)arg1;
- (void)addressBookPropertyPicker:(id)arg1 didFinishWithProperty:(id)arg2;
- (void)addContactPropertyField;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)adjustContentInsetForKeyboardHeight:(double)arg1;
- (void)addressBookCountryPickerDidCancel:(id)arg1;
- (void)addressBookCountryPicker:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)presentCountryPickerForAddressEditingCell:(id)arg1;
- (void)addressBookLabelPickerDidFinish:(id)arg1;
- (void)addressBookLabelPickerDidCancel:(id)arg1;
- (void)handleLabelButtonActionInContactMultiValueEditingCell:(id)arg1;
- (void)newContactPhoneNumberInputCellValueDidChange:(id)arg1;
- (void)newContactPhoneNumberInputCell:(id)arg1 countryCodeDidChange:(id)arg2;
- (_Bool)newContactTextEditingCellShouldReturn:(id)arg1;
- (void)newContactTextEditingCellDidEndEditing:(id)arg1;
- (void)newContactTextEditingCellDidBeginEditing:(id)arg1;
- (_Bool)contactPropertyEditingCellShouldReturn:(id)arg1;
- (void)contactPropertyEditingCellDidEndEditing:(id)arg1;
- (_Bool)contactPropertyEditingCellShouldEndEditing:(id)arg1;
- (void)contactPropertyEditingCellDidBeginEditing:(id)arg1;
- (_Bool)contactPropertyEditingCellShouldBeginEditing:(id)arg1;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)setupForm;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
