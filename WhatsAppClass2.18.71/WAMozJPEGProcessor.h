//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAMozJPEGProcessor : NSObject
{
}

+ (id)decodeImageFromData:(id)arg1;
+ (id)imageFromBitmapPixelDataBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)decodeImageFromFileURL:(id)arg1;
+ (_Bool)encodeImage:(id)arg1 quality:(double)arg2 toFileURL:(id)arg3;
+ (id)encodeImage:(id)arg1 quality:(double)arg2;

@end

