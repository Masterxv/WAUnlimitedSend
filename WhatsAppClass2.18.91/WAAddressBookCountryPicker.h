//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

@class NSArray, NSDictionary;
@protocol WAAddressBookCountryPickerDelegate;

__attribute__((visibility("hidden")))
@interface WAAddressBookCountryPicker : WATableViewController
{
    NSArray *_sectionTitles;
    NSDictionary *_countryMap;
    id <WAAddressBookCountryPickerDelegate> _delegate;
}

+ (id)pickerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WAAddressBookCountryPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)countryInfoForTableIndexPath:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end
