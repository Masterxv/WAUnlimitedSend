//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WAGimmickPickerViewConfiguring-Protocol.h"
#import "WAStickerCategoriesFlowLayoutDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UIActivityIndicatorView, UICollectionView, UILabel, WAFetchedResultsController;
@protocol WAStickerPickerManagerDelegate><UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WAStickerPickerManager : NSObject <NSFetchedResultsControllerDelegate, WAGimmickPickerViewConfiguring, UICollectionViewDelegate, UICollectionViewDataSource, WAStickerCategoriesFlowLayoutDelegate>
{
    WAFetchedResultsController *_contentFetchedResultsController;
    WAFetchedResultsController *_categoryFetchedResultsController;
    WAFetchedResultsController *_starredFetchedResultsController;
    UICollectionView *_contentCollectionView;
    UICollectionView *_categoryCollectionView;
    NSArray *_fixedCategories;
    NSIndexPath *_currentCategory;
    NSMutableDictionary *_categoryToScrollOffsetMap;
    _Bool _animationIsReloading;
    _Bool _emotionCategoriesExpanded;
    unsigned long long _emotionCategoriesChangedCount;
    id <WAStickerPickerManagerDelegate><UIScrollViewDelegate> _delegate;
    UIActivityIndicatorView *_loadingView;
    UILabel *_placeholderView;
}

@property(retain, nonatomic) UILabel *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <WAStickerPickerManagerDelegate><UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)categoryIsEmotion:(id)arg1;
- (id)accessibilityLabelForFixedSectionRow:(long long)arg1;
- (id)contentBackgroundViewForCategory:(id)arg1;
- (id)currentStickerPack;
- (id)currentStickerWithIndex:(unsigned long long)arg1;
- (id)currentStickers;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 displayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)stickerCategoriesFlowLayoutCategoriesCount:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutNonExpandedDecorationFrame:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutExpandedDecorationFrame:(id)arg1;
- (id)stickerCategoriesFlowLayoutTriggeringIndexPath:(id)arg1;
- (void)stickerCategoriesFlowLayoutFinalizedUpdates:(id)arg1;
- (_Bool)stickerCategoriesFlowLayoutShouldAddDecoration:(id)arg1;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldProcessFinalLayoutWithIndexPath:(id)arg2;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldProcessInitialLayoutWithIndexPath:(id)arg2;
- (id)currentContentBackgroundView;
- (id)contentCollectionViewLayoutForCollectionView:(id)arg1;
- (id)categoryCollectionViewLayoutForCollectionView:(id)arg1;
- (id)GIFButtonTintColor;
- (id)stickerButtonTintColor;
- (id)accessibilityLabelForLeftButton;
- (id)accessibilityLabelForRightButton;
- (_Bool)shouldShowLeftButton;
- (_Bool)shouldShowRightButtonUpdateIndicator;
- (_Bool)shouldShowRightButton;
- (void)markCategoryAsSeenByUserForIndexPath:(id)arg1;
- (void)setCurrentCategoryAndUpdateFetchedResultsControllers:(id)arg1;
- (id)stickerPackContentFetchedResultsControllerForRow:(long long)arg1;
- (id)fixedContentFetchedResultsControllerForRow:(long long)arg1;
- (void)updateContentFetchedResultsControllerForCategory:(id)arg1;
- (id)contentFetchedResultsControllerForEmotion:(unsigned long long)arg1;
- (id)starredFetchedResultsController;
- (id)recentFetchedResultsController;
- (id)categoryFetchedResultsController;
- (void)dealloc;
- (void)viewDidMoveToSuperview:(id)arg1;
- (void)initializeCategories;
- (id)initWithContentCollectionView:(id)arg1 categoryCollectionView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

