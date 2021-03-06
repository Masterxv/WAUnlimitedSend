//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WAPlaceIconCache : NSObject
{
    NSMutableDictionary *_iconsInProgress;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)placeIconImageForWAPlace:(id)arg1 style:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fsqCategoryIconFromImage:(id)arg1;
- (id)circleCategoryIconFromImage:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)categoryIconFromWhiteImage:(id)arg1;
- (void)saveImage:(id)arg1 withFilename:(id)arg2;
- (id)imageWithFilename:(id)arg1;
- (id)filenameForImageAtURLPath:(id)arg1 style:(unsigned long long)arg2;

@end

