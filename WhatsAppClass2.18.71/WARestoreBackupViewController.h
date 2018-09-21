//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWarningViewController.h"

@class NSDate, NSNumber, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIView, WABackupInfoTableCell, WACloudBackupManager, WACloudStatus, WAPreviousBackup, WAWeakTimer, WamEventICloudRestore;
@protocol WARestoreBackupViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WARestoreBackupViewController : WAWarningViewController
{
    _Bool _skipButtonOverride;
    _Bool _skipButtonTableView;
    WamEventICloudRestore *_event;
    NSNumber *_eventStartTime;
    NSNumber *_integrityCheckResult;
    WACloudBackupManager *_manager;
    WAPreviousBackup *_previousBackup;
    WACloudStatus *_cloudStatus;
    id _cloudStatusListener;
    WAWeakTimer *_timer;
    _Bool _registered;
    _Bool _shouldUploadLogs;
    _Bool _allowsUserToSkipRestore;
    _Bool _didFinishEntireRestore;
    _Bool _restoring;
    UIBarButtonItem *_barButtonSkip;
    UIBarButtonItem *_barButtonRestore;
    UIBarButtonItem *_barButtonNext;
    id <WARestoreBackupViewControllerDelegate> _delegate;
    WABackupInfoTableCell *_cellBackupInfo;
    UIView *_viewNoiCloud;
    UILabel *_labelNoiCloud;
    UIView *_viewTableFooter;
    UILabel *_labelProgressInfo;
    UILabel *_labelFooterText;
    UIActivityIndicatorView *_activityIndicator;
    NSDate *_loggedPreviousBackupDate;
    NSNumber *_numberOfMessagesRestored;
    unsigned long long _currentBackupVersion;
}

@property(nonatomic) unsigned long long currentBackupVersion; // @synthesize currentBackupVersion=_currentBackupVersion;
@property(nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(retain, nonatomic) NSNumber *numberOfMessagesRestored; // @synthesize numberOfMessagesRestored=_numberOfMessagesRestored;
@property(retain, nonatomic) NSDate *loggedPreviousBackupDate; // @synthesize loggedPreviousBackupDate=_loggedPreviousBackupDate;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *labelFooterText; // @synthesize labelFooterText=_labelFooterText;
@property(retain, nonatomic) UILabel *labelProgressInfo; // @synthesize labelProgressInfo=_labelProgressInfo;
@property(retain, nonatomic) UIView *viewTableFooter; // @synthesize viewTableFooter=_viewTableFooter;
@property(retain, nonatomic) UILabel *labelNoiCloud; // @synthesize labelNoiCloud=_labelNoiCloud;
@property(retain, nonatomic) UIView *viewNoiCloud; // @synthesize viewNoiCloud=_viewNoiCloud;
@property(retain, nonatomic) WABackupInfoTableCell *cellBackupInfo; // @synthesize cellBackupInfo=_cellBackupInfo;
@property(nonatomic) __weak id <WARestoreBackupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didFinishEntireRestore; // @synthesize didFinishEntireRestore=_didFinishEntireRestore;
@property(nonatomic) _Bool allowsUserToSkipRestore; // @synthesize allowsUserToSkipRestore=_allowsUserToSkipRestore;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadNoICloudHelperText;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)startRestoreIfRequested;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)nextAction:(id)arg1;
- (void)restoreAction:(id)arg1;
- (void)skipAction:(id)arg1;
- (void)notifyDelegateDidFinish;
- (void)unregisterForRestoreNotifications;
- (void)registerForRestoreNotifications;
- (void)runFinishActions;
- (void)submitFieldStatsEvent;
- (void)countNumberOfMessagesRestored;
- (void)integrityCheck:(id)arg1;
- (void)updateUserDefaults;
- (void)restorePhaseChanged:(id)arg1;
- (void)restoreFromBackupIfAvailable;
- (void)startRestoreSequenceWithOptions:(unsigned long long)arg1 fromUserInteraction:(_Bool)arg2;
- (void)startRestoreSequence:(_Bool)arg1;
- (void)presentIcloudSignedOutAlert;
- (void)presentCouldntRestoreChatHistoryAlert;
- (void)presentIcloudNotEnoughSpaceToRestoreAlert;
@property(readonly, nonatomic) UIBarButtonItem *barButtonNext; // @synthesize barButtonNext=_barButtonNext;
@property(readonly, nonatomic) UIBarButtonItem *barButtonRestore; // @synthesize barButtonRestore=_barButtonRestore;
@property(readonly, nonatomic) UIBarButtonItem *barButtonSkip; // @synthesize barButtonSkip=_barButtonSkip;
- (void)updateBarButtonItems;
- (void)overrideSkipButton;
- (void)updateBackupDetails;
- (void)previousBackupChanged:(id)arg1;
- (void)cloudStatusUpdated;
@property(readonly, nonatomic) NSNumber *laterMediaRestoreSize;
- (void)layoutFooterView;
- (void)showProgress:(_Bool)arg1 showFooter:(_Bool)arg2;
- (id)footerTextForDownloadProgress;
- (void)stopTimerIfNeeded;
- (void)startTimerIfNeeded;
- (void)updateProgressText;
- (void)stopAnimatingGears;
- (void)startAnimatingGears;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
