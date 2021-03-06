//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaPickerBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAMediaPickerAlbumControllerDelegate-Protocol.h"
#import "WAMediaPickerAlbumTableViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class CADisplayLink, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIImageView, UILabel, UIPanGestureRecognizer, UIView, WAMediaPickerAlbumController;

__attribute__((visibility("hidden")))
@interface WAMediaPickerAlbumViewController : WAMediaPickerBaseViewController <WAMediaPickerAlbumTableViewCellDelegate, UIGestureRecognizerDelegate, WAMediaPickerAlbumControllerDelegate, WANavigationControllerPopToAnimating>
{
    unsigned long long _assetsCountPerRow;
    UIView *_footerView;
    UILabel *_footerLabel;
    _Bool _albumLoadingInProgress;
    NSNumber *_assetIndexToRestore;
    struct CGPoint _contentOffsetAtStartOfRotation;
    UIImageView *_beforeRotationSnapshotImageView;
    UIImageView *_afterRotationSnapshotImageView;
    UIView *_whiteBackgroundView;
    _Bool _rotatingViewWithNoMedia;
    UILabel *_noMediaTitleLabel;
    UILabel *_noMediaBodyTextLabel;
    _Bool _needsScrollToSelectedPhoto;
    struct CGRect _previousPreheatRect;
    _Bool _needsUpdateFooterText;
    UIPanGestureRecognizer *_multiSelectPanGesture;
    _Bool _isInMultiSelectPanStatus;
    _Bool _isInAutoScrollUpProgress;
    _Bool _isInAutoScrollDownProgress;
    long long _quickSelectType;
    NSArray *_originalSelectedLocalIdentifiers;
    long long _firstQuickSelectIndex;
    long long _lastQuickSelectIndex;
    struct CGPoint _autoScrollTouchPointInCollectionView;
    CADisplayLink *_autoScrollDisplayLink;
    double _autoScrollDistancePerFrame;
    NSMutableDictionary *_quickSelectIdAndIndexDict;
    NSMutableSet *_quickSelectLivePhotoAsVideoIdentifiers;
    WAMediaPickerAlbumController *_albumController;
}

@property(readonly, nonatomic) WAMediaPickerAlbumController *albumController; // @synthesize albumController=_albumController;
- (void).cxx_destruct;
- (void)markCellUnselectedForLocalIdentifier:(id)arg1;
- (void)markCellSelectedForLocalIdentifier:(id)arg1;
- (void)addLocalIdentifierIfPossibleWithIndex:(long long)arg1 toOrderSet:(id)arg2;
- (id)allLocalIdentifiersFromIndex:(long long)arg1 toIndex:(long long)arg2 needReverse:(_Bool)arg3;
- (void)unselectMediaIfPossibleFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)selectMediaIfPossibleFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)handleAutoScrollQuickSelectWithTouchDeltaY:(double)arg1;
- (void)startAutoScrollDown;
- (void)stopAutoScrollDown;
- (void)startAutoScrollUp;
- (void)stopAutoScrollUp;
- (void)handleAutoScrollDownWithCurrentContentOffsetY:(double)arg1;
- (void)handleAutoScrollUpWithCurrentContentOffsetY:(double)arg1;
- (void)resetQuickSelectData;
- (void)multiSelectPanGestureDidFinish:(id)arg1;
- (void)calculateAutoScrollDistancePerFrameWithOffset:(double)arg1 total:(double)arg2;
- (long long)quickSelectThumbnailIndexAtPoint:(struct CGPoint)arg1;
- (long long)thumbnailIndexAtPoint:(struct CGPoint)arg1;
- (void)multiSelectPanGestureDidChange:(id)arg1;
- (void)multiSelectPanGestureDidBegin:(id)arg1;
- (void)handleMultiSelectPanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)adjustContentOffsetOfTableViewToNearestValidMultipleOfRowHeight;
- (id)tableViewSnapshot;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (struct _NSRange)rangeOfAssetsInRect:(struct CGRect)arg1;
- (void)updateThumbnailCache;
- (void)scrollViewDidScroll:(id)arg1;
- (void)previewingContext:(id)arg1 inTableViewCell:(id)arg2 commitViewController:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForAsset:(id)arg2 inTableViewCell:(id)arg3;
- (id)registerPreviewingForAlbumCell:(id)arg1 sourceView:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveLongPressAtIndex:(long long)arg2;
- (_Bool)mediaPickerAlbumTableViewCell:(id)arg1 didReceiveTapAtIndex:(long long)arg2;
- (void)reconfigureAllVisibleCells;
- (void)updateFooterText;
- (void)updateFooterTextIfNeeded;
- (_Bool)isFooterVisible;
- (void)updateFooter;
- (long long)assetsCountPerRow;
- (void)mediaPickerAlbumController:(id)arg1 didFinishLoadingAlbumWithOutcome:(_Bool)arg2;
- (void)mediaPickerAlbumControllerWillBeginLoadingAlbum:(id)arg1;
- (void)scrollToBottom;
- (struct CGPoint)maximumContentOffset;
- (void)scrollToAssetAtIndex:(long long)arg1;
- (long long)indexOfAssetAtCenterOfView;
- (_Bool)scrollEnabled;
- (void)reloadTable;
- (void)relayoutNoMediaViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateFonts;
- (void)wa_fontSizeDidChange;
- (id)initWithAlbumController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

