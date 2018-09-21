//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionTask, NSUUID, WAMMSTaskMetrics, WAMMSTaskSession;

__attribute__((visibility("hidden")))
@interface WAMMSBaseTask : NSObject
{
    WAMMSTaskSession *_session;
    NSURLSessionTask *_sessionTask;
    NSString *_uploadToken;
    unsigned long long _taskType;
    NSString *_directPath;
    WAMMSTaskMetrics *_taskMetric;
    unsigned long long _state;
    unsigned long long _mediaType;
    NSString *_encHash;
    NSOperationQueue *_sessionOperationQueue;
    NSUUID *_connUUID;
}

+ (void)addCategorySelector:(SEL)arg1 toClass:(Class)arg2;
+ (void)installCategoryMethodsIfNeeded;
+ (id)relativeMediaEndpointForType:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
+ (id)absoluteURLToMediaObjectWithHostname:(id)arg1 mediaType:(unsigned long long)arg2 encHash:(id)arg3 directPath:(id)arg4 uploadToken:(id)arg5 authToken:(id)arg6 allowsDirectIP:(_Bool)arg7 taskType:(unsigned long long)arg8 additionalQueryItems:(id)arg9;
+ (void)initialize;
@property(readonly, nonatomic) NSUUID *connUUID; // @synthesize connUUID=_connUUID;
@property(retain) NSOperationQueue *sessionOperationQueue; // @synthesize sessionOperationQueue=_sessionOperationQueue;
@property(readonly, nonatomic) NSString *encHash; // @synthesize encHash=_encHash;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)additionalQueryItems;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (void)finish;
- (id)taskMetrics;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)cancel;
- (void)resumeWithPolicy:(id)arg1;
- (void)resume;
@property(readonly, nonatomic) _Bool upload;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2;

@end
