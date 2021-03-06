//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "WAStreamingMediaDownloadTaskDelegate-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSMutableData, NSNumber, NSString, NSURLSessionTaskMetrics, WAMMSTaskDescription, WAMMSTaskSession, WAMediaKey, WAMediaSidecarDecryptor, WAStreamingMediaDownloadTask;
@protocol OS_dispatch_queue, WAStreamingMediaLoaderTaskDelegate;

__attribute__((visibility("hidden")))
@interface WAStreamingMediaLoaderTask : NSObject <NSURLSessionDataDelegate, WAStreamingMediaDownloadTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_sidecar;
    unsigned long long _dataTaskOffset;
    unsigned long long _encFileSize;
    float _priority;
    unsigned long long _retryCount;
    WAMMSTaskSession *_taskSession;
    WAMMSTaskDescription *_taskDescription;
    unsigned long long _currentRetryCount;
    WAMediaSidecarDecryptor *_decryptor;
    WAMediaKey *_mediaKey;
    NSMutableData *_ivBuffer;
    unsigned long long _startingChunkIndex;
    NSMutableData *_plaintextBuffer;
    WAStreamingMediaDownloadTask *_currentDownloadTask;
    _Bool _complete;
    _Bool _cancelled;
    _Bool _cancelledInvalidResponse;
    NSMutableArray *_requests;
    _Bool _retryWithDelay;
    _Bool _allowsCellularAccess;
    id <WAStreamingMediaLoaderTaskDelegate> _delegate;
    unsigned long long _requestedOffset;
    unsigned long long _requestedLength;
    unsigned long long _currentOffset;
    unsigned long long _encOffset;
    unsigned long long _encLength;
    unsigned long long _bytesReceived;
    NSString *_identifier;
    NSString *_domain;
    NSString *_ip;
    NSURLSessionTaskMetrics *_metrics;
    double _timeToFirstByte;
    double _networkDownloadTime;
    NSNumber *_routeSelectionDelayInterval;
    double _networkDownloadRequestStart;
}

+ (struct _NSRange)requestRangeForOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 outChunkIndex:(out unsigned long long *)arg3 outOffset:(out unsigned long long *)arg4 outLocation:(out unsigned long long *)arg5;
+ (struct _NSRange)requestRangeForOffset:(unsigned long long)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) double networkDownloadRequestStart; // @synthesize networkDownloadRequestStart=_networkDownloadRequestStart;
@property(readonly, nonatomic) NSNumber *routeSelectionDelayInterval; // @synthesize routeSelectionDelayInterval=_routeSelectionDelayInterval;
@property(readonly, nonatomic) double networkDownloadTime; // @synthesize networkDownloadTime=_networkDownloadTime;
@property(readonly, nonatomic) double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) _Bool retryWithDelay; // @synthesize retryWithDelay=_retryWithDelay;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long encLength; // @synthesize encLength=_encLength;
@property(readonly, nonatomic) unsigned long long encOffset; // @synthesize encOffset=_encOffset;
@property(readonly, nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) unsigned long long requestedLength; // @synthesize requestedLength=_requestedLength;
@property(readonly, nonatomic) unsigned long long requestedOffset; // @synthesize requestedOffset=_requestedOffset;
@property(readonly, nonatomic) __weak id <WAStreamingMediaLoaderTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)willRetryForError:(id)arg1;
- (void)updateMetrics;
- (void)completeWithError:(id)arg1;
- (void)streamingMediaDownloadTask:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)streamingMediaDownloadTask:(id)arg1 didCompleteWithError:(id)arg2 response:(id)arg3 bytesReceived:(long long)arg4;
- (void)streamingMediaDownloadTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)streamingMediaDownloadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)removeRequests:(id)arg1;
- (void)addRequests:(id)arg1;
- (struct _NSRange)requestRangeForInitialOffset:(unsigned long long)arg1 length:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool requestToEndOfFile;
- (void)cancelIfNotFinished;
- (void)cancel;
- (void)resumeWithRequestRange:(struct _NSRange)arg1;
- (void)resume;
- (void)setPriority:(float)arg1;
- (id)initWithDelegate:(id)arg1 messageInfo:(id)arg2 queue:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 allowsCellularAccess:(_Bool)arg6 retryCount:(unsigned long long)arg7 mmsTaskSession:(id)arg8 taskDescription:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

