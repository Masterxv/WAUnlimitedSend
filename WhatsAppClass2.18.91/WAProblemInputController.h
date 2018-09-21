//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WAFAQBrowserViewControllerDelegate-Protocol.h"
#import "WAImageAttachmentContainerViewDelegate-Protocol.h"
#import "WAProblemInputControllerBottomViewDelegate-Protocol.h"

@class NSArray, NSObject, NSString, ProblemInputControllerConfiguration, UIBarButtonItem, UIImage, UITableViewCell, UITapGestureRecognizer, UITextView, UIView, WADoneWithSpinnerBarButtonItem, WAHTTPFetcher, WAImageAttachmentContainerView, _WAShortTableViewSectionHeader;
@protocol OS_dispatch_group, WAProblemInputControllerBottomView, WAProblemInputControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAProblemInputController : WATableViewController <WAImageAttachmentContainerViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, WAFAQBrowserViewControllerDelegate, WAProblemInputControllerBottomViewDelegate, UITextViewDelegate>
{
    UITableViewCell *_textViewCell;
    UITableViewCell *_faqButtonCell;
    UITextView *_textView;
    _WAShortTableViewSectionHeader *_sectionHeaderView;
    WADoneWithSpinnerBarButtonItem *_doneButton;
    NSObject<OS_dispatch_group> *_logsGatheringDispatchGroup;
    NSString *_gzippedLogs;
    double _keyboardHeight;
    WAImageAttachmentContainerView *_imageAttachmentContainer;
    UIBarButtonItem *_cancelBarButtonItem;
    _Bool _keyboardHidden;
    WAHTTPFetcher *_searchFetcher;
    NSArray *_imagesToSend;
    double _faqReadStartTime;
    UITapGestureRecognizer *_tapGesture;
    UIView<WAProblemInputControllerBottomView> *_bottomView;
    id <WAProblemInputControllerDelegate> _delegate;
    NSString *_initialText;
    UIImage *_initialImageToAttach;
    unsigned long long _numberOfFAQSearchResultsReturned;
    unsigned long long _numberOfFAQSearchResultsOpened;
    double _timeSpentOnFAQ;
    NSArray *_topFAQEntriesByReadTime;
    ProblemInputControllerConfiguration *_configuration;
}

@property(readonly, nonatomic) ProblemInputControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSArray *topFAQEntriesByReadTime; // @synthesize topFAQEntriesByReadTime=_topFAQEntriesByReadTime;
@property(readonly, nonatomic) double timeSpentOnFAQ; // @synthesize timeSpentOnFAQ=_timeSpentOnFAQ;
@property(readonly, nonatomic) unsigned long long numberOfFAQSearchResultsOpened; // @synthesize numberOfFAQSearchResultsOpened=_numberOfFAQSearchResultsOpened;
@property(readonly, nonatomic) unsigned long long numberOfFAQSearchResultsReturned; // @synthesize numberOfFAQSearchResultsReturned=_numberOfFAQSearchResultsReturned;
@property(retain, nonatomic) UIImage *initialImageToAttach; // @synthesize initialImageToAttach=_initialImageToAttach;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(nonatomic) __weak id <WAProblemInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attemptOutgoingCellularVoicePhoneCallForNumber:(id)arg1;
- (void)handleCallbackForFAQViewController:(id)arg1;
- (void)faqBrowserViewControllerWasPopped:(id)arg1;
- (void)faqBrowserViewControllerShouldProceedToEmail:(id)arg1;
- (void)cancelPendingSearch;
- (void)searchFAQ:(id)arg1 checkpoint:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imageAttachmentContainerViewDidDeleteImage:(id)arg1;
- (void)imageAttachmentContainerViewDidRequestAddImage:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)wa_applicationDidEnterBackground;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)openFAQ;
- (void)cancelAction:(id)arg1;
- (void)proceedToEmail;
- (void)doneAction:(id)arg1;
- (void)updateButtonState;
- (_Bool)userHasEnteredSufficientText;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
