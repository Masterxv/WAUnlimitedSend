//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WAExactTimer : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    double _delay;
    _Bool _didInvalidateTimer;
    _Bool _useWalltime;
}

+ (id)performBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 afterDelay:(double)arg3;
@property(nonatomic) _Bool useWalltime; // @synthesize useWalltime=_useWalltime;
- (void).cxx_destruct;
- (void)internalFire;
- (void)fireImmediately;
- (void)fire;
- (void)internalInvalidate;
- (void)invalidate;
- (void)internalCancel;
- (void)internalStart;
- (unsigned long long)time;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 afterDelay:(double)arg3;

@end

