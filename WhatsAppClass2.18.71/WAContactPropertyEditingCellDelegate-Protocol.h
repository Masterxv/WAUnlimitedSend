//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAContactPropertyEditingCell;

@protocol WAContactPropertyEditingCellDelegate <NSObject>

@optional
- (void)contactPropertyEditingCellValueChanged:(WAContactPropertyEditingCell *)arg1;
- (_Bool)contactPropertyEditingCellShouldReturn:(WAContactPropertyEditingCell *)arg1;
- (void)contactPropertyEditingCellDidEndEditing:(WAContactPropertyEditingCell *)arg1;
- (_Bool)contactPropertyEditingCellShouldEndEditing:(WAContactPropertyEditingCell *)arg1;
- (void)contactPropertyEditingCellDidBeginEditing:(WAContactPropertyEditingCell *)arg1;
- (_Bool)contactPropertyEditingCellShouldBeginEditing:(WAContactPropertyEditingCell *)arg1;
@end

