//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableViewCell, UIViewController;
@protocol UIViewControllerPreviewing;

@protocol WATableViewCellPreviewingDelegate <NSObject>
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 inTableViewCell:(UITableViewCell *)arg2 commitViewController:(UIViewController *)arg3;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForData:(id)arg2 inTableViewCell:(UITableViewCell *)arg3;
@end

