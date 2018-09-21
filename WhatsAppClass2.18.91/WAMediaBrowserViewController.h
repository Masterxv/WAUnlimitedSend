//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "WACalloutViewPresenterDelegate-Protocol.h"
#import "WAImageToImagePanPopGestureRecognizerDelegate-Protocol.h"
#import "WAMediaBrowserCollectionViewCellDelegate-Protocol.h"
#import "WAMediaBrowserToolbarDelegate-Protocol.h"
#import "WAMediaBrowserVideoCellDelegate-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WANoOpGestureRecognizerTouchDelegate-Protocol.h"

@class NSIndexPath, NSMutableSet, NSNumber, NSString, UIActivityIndicatorView, UIBarButtonItem, UICollectionViewFlowLayout, UINavigationController, UIView, WAImageToImagePanPopGestureRecognizer, WAMediaBrowserCollectionView, WAMediaBrowserTitleView, WAMediaBrowserToolbar, WAMediaCaptionView, WAMediaManager, WAMessage, WANoOpGestureRecognizer, WAStarBarButtonItem;

__attribute__((visibility("hidden")))
@interface WAMediaBrowserViewController : WAViewController <WACalloutViewPresenterDelegate, WAMediaBrowserCollectionViewCellDelegate, WAMediaBrowserVideoCellDelegate, WAMediaBrowserToolbarDelegate, WANoOpGestureRecognizerTouchDelegate, WANavigationControllerPopFromAnimating, WAImageToImagePanPopGestureRecognizerDelegate>
{
    UINavigationController *_lastNavigationController;
    WAMediaBrowserToolbar *_toolbar;
    WAMediaCaptionView *_captionView;
    WAMediaBrowserCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WAMediaManager *_mediaManager;
    long long _initialPageIndex;
    long long _lastDisplayedPageIndex;
    _Bool _needsAdjustCaptionViewAfterLayout;
    WAImageToImagePanPopGestureRecognizer *_panPopGesture;
    long long _presentationStateBeforePan;
    UIView *_busySpinnerView;
    UIActivityIndicatorView *_busySpinner;
    WAMediaBrowserTitleView *_titleView;
    NSIndexPath *_autoplayItemAtIndexPath;
    _Bool _suppressToolbarUpdate;
    _Bool _ignoreToolbarScrolling;
    WANoOpGestureRecognizer *_touchTracker;
    _Bool _isInterfaceOrientationPinned;
    UIBarButtonItem *_allMediaButton;
    UIBarButtonItem *_trashButton;
    UIBarButtonItem *_actionButton;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_pauseButton;
    WAStarBarButtonItem *_starButton;
    WAStarBarButtonItem *_unstarButton;
    WAMessage *_messageBeforeChangingContent;
    NSIndexPath *_indexPathBeforeChangingContent;
    _Bool _needsUpdateInterfaceOnViewDidLayoutSubviews;
    struct CGSize _lastViewWillLayoutSubviewsSize;
    _Bool _needsAllMediaButton;
    double _nonFullscreenTopLayoutInset;
    _Bool _isCollectionViewLoaded;
    NSMutableSet *_unsupportedMessages;
    WAMessage *_currentMessageBeforeReload;
    CDStruct_1b6d18a9 _currentPlayingTimeBeforeReload;
    _Bool _fullScreen;
    NSNumber *_initializationTime;
}

@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) NSNumber *initializationTime; // @synthesize initializationTime=_initializationTime;
@property(readonly, nonatomic) WAMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void).cxx_destruct;
- (void)calloutViewPresenterDidFinish:(id)arg1;
- (struct UIEdgeInsets)overlayInsetsForCalloutViewPresenter:(id)arg1;
- (void)showBackupSettings;
- (void)showMissingVideoErrorWhenForwardingMessage:(_Bool)arg1;
- (void)setProfilePhotoWithMessage:(id)arg1;
- (void)assignGroupImageWithMessage:(id)arg1;
- (void)showActionMenuForMessageInCell:(id)arg1;
- (void)deleteMessageInCell:(id)arg1;
- (void)setStarred:(_Bool)arg1 forMessageInCell:(id)arg2;
- (void)toolbarDidEndScrubbing:(id)arg1;
- (void)toolbarDidBeginScrubbing:(id)arg1;
- (void)toolbar:(id)arg1 didScrollToIndexPath:(id)arg2;
- (void)toolbarDidActivateUnstarButton:(id)arg1;
- (void)toolbarDidActivateStarButton:(id)arg1;
- (void)toolbarDidActivatePauseButton:(id)arg1;
- (void)toolbarDidActivatePlayButton:(id)arg1;
- (void)toolbarDidActivateTrashButton:(id)arg1;
- (void)toolbarDidActivateActionButton:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)unstarButtonTapped:(id)arg1;
- (void)starButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)trashButtonTapped:(id)arg1;
- (void)showAllMedia:(id)arg1;
- (void)forwardMediaInMessage:(id)arg1 toContacts:(id)arg2 postAsStatus:(_Bool)arg3;
- (void)shareMediaInMessageExternally:(id)arg1;
- (void)showPersonPickerForForwardingMediaInMessage:(id)arg1 withPreselectedContacts:(id)arg2;
- (id)wa_previewActionItems;
- (void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)nonTransitioningContainerView;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (id)preferredPopFromInteractionController;
- (id)popFromAnimationIdentifier;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestGoToChat:(id)arg1;
- (_Bool)shouldShowGoToChatFromMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didSelectInteractiveAnnotation:(id)arg2 atPoint:(struct CGPoint)arg3 inInteractiveAnnotationView:(id)arg4;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didUpdateProgress:(double)arg2;
- (double)rateOfChangeForMediaBrowserCollectionViewCell:(id)arg1;
- (id)fastThumbnailForMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didReceiveSingleTapAtPoint:(struct CGPoint)arg2;
- (void)mediaBrowserCollectionViewCell:(id)arg1 prefersFullScreen:(_Bool)arg2;
- (_Bool)isDisplayingMediaBrowserCollectionViewCellInFullScreen:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestPresentBackupSettings:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidChangePresentationState:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidEndChangingVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidChangeVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellWillBeginChangingVisibleContentViewFrame:(id)arg1;
- (_Bool)isPreviewingMediaBrowserCollectionViewCell:(id)arg1;
- (double)topLayoutInsetForMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserVideoCell:(id)arg1 hasBufferedEnoughToPlayWithTimeTaken:(double)arg2;
- (void)mediaManagerWillReloadCollectionView:(id)arg1;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)noOpGestureRecognizerDidEndTrackingTouches:(id)arg1;
- (void)noOpGestureRecognizerDidUpdateTrackedTouches:(id)arg1;
- (void)noOpGestureRecognizerDidBeginTrackingTouches:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)updateCaptionView;
- (void)setUpBusySpinnerView;
@property(nonatomic, getter=isBusySpinnerHidden) _Bool busySpinnerHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)setFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isFullscreen;
- (void)updatePresentationState;
- (void)updateTitleView;
- (void)updateNavigationBarItems;
- (void)updateInterfaceForCurrentMessage;
- (id)currentCell;
@property(nonatomic) long long currentPageIndex;
@property(nonatomic) double currentFractionalIndex;
- (void)willMoveToParentViewController:(id)arg1;
- (void)wa_willBePoppedWithAnimation:(_Bool)arg1;
- (_Bool)shouldBypassMediaAlbumWhenPopping;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (_Bool)wa_prefersMinimalBackButton;
- (void)dealloc;
- (id)initWithMediaManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
