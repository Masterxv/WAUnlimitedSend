//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAFuture : NSObject
{
    // Error parsing type: Ai, name: _state
}

- (_Bool)cancel;
- (id)resolve;
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isDone) _Bool done;

@end

