//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WACachedCopyMutableArray.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WACallLoggerAggregateEventMutableArray : WACachedCopyMutableArray
{
    NSArray *_missedCallEvents;
    NSArray *_unmissedCallIndexPaths;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *unmissedCallIndexPaths; // @synthesize unmissedCallIndexPaths=_unmissedCallIndexPaths;
@property(readonly, copy, nonatomic) NSArray *missedCallEvents; // @synthesize missedCallEvents=_missedCallEvents;
- (void)buildMissedCallArrays;
- (void)mutateArray:(CDUnknownBlockType)arg1;

@end

