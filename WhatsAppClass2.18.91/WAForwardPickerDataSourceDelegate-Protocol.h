//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UITableView, UITableViewCell, WAContact, WAContactTableViewCell, WAForwardPickerDataSource;

@protocol WAForwardPickerDataSourceDelegate <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForStatusAtIndexPath:(NSIndexPath *)arg2;
- (WAContactTableViewCell *)tableView:(UITableView *)arg1 cellForContact:(WAContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)forwardPickerDataSourceDidChangeContent:(WAForwardPickerDataSource *)arg1;
@end
