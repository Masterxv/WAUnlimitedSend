//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWarningViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WABackupViewControllerDataProviderDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, UIActivityIndicatorView, UILabel, UISwitch, UIView, WABackupInfoTableCell, WABackupViewControllerDataProvider, WAUploadedBackup;

__attribute__((visibility("hidden")))
@interface WABackupViewController : WAWarningViewController <UITableViewDataSource, UITableViewDelegate, WABackupViewControllerDataProviderDelegate>
{
    _Bool _needsTableViewReload;
    _Bool _loadingVideoEstimate;
    _Bool _animatingCloud;
    WAUploadedBackup *_uploadedInformation;
    WABackupInfoTableCell *_cellBackupInfo;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_backupStatusView;
    UILabel *_backupStatusLabel;
    double _backupStatusViewHeight;
    UISwitch *_switchIncludeVideos;
    NSNumber *_videoEstimate;
    WABackupViewControllerDataProvider *_dataProvider;
    NSArray *_buttons;
}

+ (void)showIfPossibleFromTabBarController:(id)arg1;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic, getter=isAnimatingCloud) _Bool animatingCloud; // @synthesize animatingCloud=_animatingCloud;
@property(retain, nonatomic) WABackupViewControllerDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSNumber *videoEstimate; // @synthesize videoEstimate=_videoEstimate;
@property(nonatomic) _Bool loadingVideoEstimate; // @synthesize loadingVideoEstimate=_loadingVideoEstimate;
@property(retain, nonatomic) UISwitch *switchIncludeVideos; // @synthesize switchIncludeVideos=_switchIncludeVideos;
@property(nonatomic) double backupStatusViewHeight; // @synthesize backupStatusViewHeight=_backupStatusViewHeight;
@property(retain, nonatomic) UILabel *backupStatusLabel; // @synthesize backupStatusLabel=_backupStatusLabel;
@property(retain, nonatomic) UIView *backupStatusView; // @synthesize backupStatusView=_backupStatusView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) WABackupInfoTableCell *cellBackupInfo; // @synthesize cellBackupInfo=_cellBackupInfo;
@property(retain, nonatomic) WAUploadedBackup *uploadedInformation; // @synthesize uploadedInformation=_uploadedInformation;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)mappedSectionForIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedIndexForSection:(unsigned long long)arg1;
- (_Bool)hasExtraSection;
- (void)showAutobackupSettings;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dismissModal:(id)arg1;
- (void)calculateVideoEstimate;
- (_Bool)tryToUpdateVideoEstimate;
@property(readonly, nonatomic) _Bool needsVideoEstimate;
- (void)changedIncludeVideos:(id)arg1;
- (void)updateBackupDetails;
- (void)backupInformationUpdated:(id)arg1;
- (void)layoutFooterViewAnimated:(_Bool)arg1;
@property(copy, nonatomic) NSString *statusMessage;
- (void)stopAnimatingGears;
- (void)startAnimatingGears;
- (void)dataProvider:(id)arg1 didUpdateStatusMessage:(id)arg2;
- (void)dataProvider:(id)arg1 didUpdateButtons:(id)arg2;
- (void)dataProvider:(id)arg1 didUpdateAnimation:(_Bool)arg2;
- (void)dataProviderDidFinishSendingUpdates:(id)arg1;
- (void)reloadTableViewIfNeeded;
- (void)dataProviderWillStartSendingUpdates:(id)arg1;
- (void)dataProvider:(id)arg1 didUpdateError:(id)arg2 withAction:(CDUnknownBlockType)arg3;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)updateDataProvider;
- (void)loadInitialDataProvider;
- (void)dealloc;
- (void)configureWarningView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
