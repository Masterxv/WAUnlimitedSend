//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class WATableRow;

__attribute__((visibility("hidden")))
@interface WAAllowedNetworkInterfacesPicker : WAStaticTableViewController
{
    WATableRow *_neverRow;
    WATableRow *_wifiRow;
    WATableRow *_cellularRow;
    unsigned long long _mediaType;
}

- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)updateCheckMarks;
- (void)selectInterface:(long long)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;
- (id)initForMediaType:(unsigned long long)arg1 title:(id)arg2;

@end

