//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebPageTask.h"

@class NSMutableDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface WAWebPageImageTask : WAWebPageTask
{
    unsigned long long _imageURLAttempt;
    NSOrderedSet *_fallbackImageURLs;
    NSMutableDictionary *_fieldStatsImageURLToImageType;
}

@property(retain, nonatomic) NSMutableDictionary *fieldStatsImageURLToImageType; // @synthesize fieldStatsImageURLToImageType=_fieldStatsImageURLToImageType;
@property(retain, nonatomic) NSOrderedSet *fallbackImageURLs; // @synthesize fallbackImageURLs=_fallbackImageURLs;
@property(nonatomic) unsigned long long imageURLAttempt; // @synthesize imageURLAttempt=_imageURLAttempt;
- (void).cxx_destruct;
- (id)init;

@end
