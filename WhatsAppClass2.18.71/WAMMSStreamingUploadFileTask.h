//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSAbstractUploadFileTask.h"

@class NSObject, WAMMSFileReader;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WAMMSStreamingUploadFileTask : WAMMSAbstractUploadFileTask
{
    _Bool _streamingFinished;
    NSObject<OS_dispatch_source> *_fileSource;
    WAMMSFileReader *_fileReader;
}

- (void).cxx_destruct;
- (id)additionalQueryItems;
- (void)didFinish;
- (id)createNewFileReader;
- (void)finishStreaming;

@end

