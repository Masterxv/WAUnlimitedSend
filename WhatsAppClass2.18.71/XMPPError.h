//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMPPError : NSObject
{
}

+ (id)errorWithCodeImpl:(long long)arg1 backoff:(id)arg2 text:(id)arg3;
+ (id)errorWithCode:(long long)arg1 backoff:(double)arg2 text:(id)arg3;
+ (id)errorWithCode:(long long)arg1 text:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorAborted;
+ (id)errorCancelled;
+ (id)errorUnknown;
+ (id)errorNotConnected;
+ (id)errorTimeout;

@end

