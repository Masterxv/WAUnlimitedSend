//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAGIFAsset.h>

@interface WAGIFAsset (GIPHY)
+ (struct CGSize)sizeFromGIPHYDictionary:(id)arg1;
+ (id)thumbnailPreviewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)smallPreviewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)previewURLFromGIPHYDictionary:(id)arg1 size:(struct CGSize)arg2;
+ (id)stillPathForPath:(id)arg1;
+ (id)smallPathForPath:(id)arg1;
+ (id)notPreferredPreviewStringForSize:(struct CGSize)arg1;
+ (id)preferredPreviewStringForSize:(struct CGSize)arg1;
- (id)initWithGIPHYJSON:(id)arg1;
@end

