//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATarSearch.h"

@class WAOffsetsFile;

__attribute__((visibility("hidden")))
@interface WABinaryTarSearch : WATarSearch
{
    WAOffsetsFile *_offsets;
}

- (void).cxx_destruct;
- (unsigned long long)seekToFindIndexWithCancellationBlock:(CDUnknownBlockType)arg1;
- (id)initWithFile:(id)arg1 offsets:(id)arg2;
- (id)initWithFile:(id)arg1;

@end
