//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACDSticker, WAGIFAssetCollection, WAGimmickPickerView, WAMultiSendMediaItem;

@protocol WAGimmickPickerViewDelegate <NSObject>
- (void)didRightButtonTappedWithGimmickPickerView:(WAGimmickPickerView *)arg1;
- (void)didBeginGIFSearchWithGimmickPickerView:(WAGimmickPickerView *)arg1 preloadedGIFs:(WAGIFAssetCollection *)arg2;
- (void)didBeginStickerSearchWithGimmickPickerView:(WAGimmickPickerView *)arg1;
- (void)gimmickPickerView:(WAGimmickPickerView *)arg1 didSelectGIFMediaItem:(WAMultiSendMediaItem *)arg2;
- (void)gimmickPickerView:(WAGimmickPickerView *)arg1 didSelectManagedSticker:(WACDSticker *)arg2;
@end

