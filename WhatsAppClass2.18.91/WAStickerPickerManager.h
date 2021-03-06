//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WAGimmickPickerViewConfiguring-Protocol.h"
#import "WAStickerCategoriesFlowLayoutDelegate-Protocol.h"
#import "WAStickerEventCategoryManagerDelegate-Protocol.h"
#import "WAStickerPackProgressViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UICollectionView, WAFetchedResultsController;
@protocol WAStickerPickerManagerDelegate><UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface WAStickerPickerManager : NSObject <NSFetchedResultsControllerDelegate, WAStickerEventCategoryManagerDelegate, WAStickerPackProgressViewDelegate, WAGimmickPickerViewConfiguring, WAStickerCategoriesFlowLayoutDelegate>
{
    NSMutableDictionary *_categoryManagerMap;
    WAFetchedResultsController *_categoryFetchedResultsController;
    NSMutableDictionary *_contentCollectionViewMap;
    UICollectionView *_categoryCollectionView;
    NSArray *_fixedCategories;
    NSIndexPath *_currentCategory;
    NSMutableDictionary *_backgroundViewMap;
    _Bool _canChangeLayout;
    _Bool _emotionCategoriesExpanded;
    unsigned long long _emotionCategoriesChangedCount;
    _Bool _loadingMoreStickers;
    NSArray *_downloadingStickerPacks;
    id <WAStickerPickerManagerDelegate><UIScrollViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAStickerPickerManagerDelegate><UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)categoryIsEmotion:(id)arg1;
- (id)accessibilityLabelForDownloadingSection;
- (id)accessibilityLabelForFixedSectionRow:(long long)arg1;
- (id)contentBackgroundViewForCategory:(id)arg1;
- (id)currentStickerPack;
- (void)stickerPackProgressViewDidCancel:(id)arg1;
- (void)stickerEventCategoryManagerUpdatedStickers:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)contentCollectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)contentCollectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInContentCollectionView;
- (void)contentCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)categoryCollectionViewCellForItemAtIndexPath:(id)arg1;
- (long long)categoryCollectionViewNumberOfItemsInSection:(long long)arg1;
- (long long)numberOfSectionsInCategoryCollectionView;
- (void)categoryCollectionViewWillDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)categoryCollectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)stickerCategoriesFlowLayoutTriggeringXCenter:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutNonExpandedDecorationFrame:(id)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutExpandedDecorationFrame:(id)arg1;
- (id)stickerCategoriesFlowLayoutTriggeringIndexPath:(id)arg1;
- (void)stickerCategoriesFlowLayoutFinalizedUpdates:(id)arg1;
- (_Bool)stickerCategoriesFlowLayoutShouldShowDecoration:(id)arg1;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldStartEmotionContractionWithIndexPath:(id)arg2;
- (_Bool)stickerCategoriesFlowLayout:(id)arg1 shouldStartEmotionExpansionWithIndexPath:(id)arg2;
- (long long)numberOfItemsInPagingCollectionViewSection:(long long)arg1;
- (long long)numberOfSectionsInPagingCollectionView;
- (id)currentCategory;
- (_Bool)userScrolledToCategory:(id)arg1;
- (void)registerReuseIdentifersForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didLongPressAtIndexPath:(id)arg2;
- (id)currentContentBackgroundViewForCategory:(id)arg1;
- (id)contentCollectionViewLayoutForCollectionView:(id)arg1;
- (id)categoryCollectionViewLayoutForCollectionView:(id)arg1;
- (long long)categorySections;
- (id)GIFButtonTintColor;
- (id)stickerButtonTintColor;
- (id)accessibilityLabelForLeftButton;
- (id)accessibilityLabelForRightButton;
- (_Bool)shouldShowLeftButton;
- (_Bool)shouldShowRightButtonUpdateIndicator;
- (_Bool)shouldShowRightButton;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)contractEmotionCategories;
- (void)expandEmotionCategories;
- (id)downloadProgressView;
- (id)placeholderLabel;
- (id)placeholderViewWithImage:(id)arg1 withText:(id)arg2;
- (id)placeholderViewForFixedCategoryRow:(unsigned long long)arg1;
- (id)loadingView;
@property(readonly, nonatomic) _Bool canChangeLayout;
- (void)downloadProgress:(id)arg1;
- (void)downloadStateDidUpdate:(id)arg1;
- (id)categoryForCollectionView:(id)arg1;
- (void)markCategoryAsSeenByUserForIndexPath:(id)arg1;
- (void)setCurrentCategory:(id)arg1;
- (void)setCurrentCategoryAndUpdateFetchedResultsControllers:(id)arg1;
- (id)categoryManagerForCategory:(id)arg1;
- (id)stickerPackCategoryManagerForRow:(long long)arg1;
- (id)fixedCategoryManagerForRow:(long long)arg1;
- (id)categoryManagerForEmotion:(unsigned long long)arg1;
- (id)starredCategoryManager;
- (id)recentCategoryManager;
- (id)categoryFetchedResultsController;
- (id)categoryCollectionIndexPathFromIndex:(long long)arg1;
- (id)categoryFetchedResultsIndexPathFromIndex:(long long)arg1;
- (void)showStarredCategory;
- (void)setStickerCategoryForStickerPack:(id)arg1;
- (void)dealloc;
- (void)viewDidMoveToSuperview:(id)arg1;
- (void)initializeCategories;
- (id)defaultCategory;
- (id)initWithCategoryCollectionView:(id)arg1 contentCollectionViewMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

