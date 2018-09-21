//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAMMSPersistentExistCheckMetrics : NSObject
{
    _Bool _isForward;
    _Bool _isManual;
    unsigned long long _attemptCount;
    unsigned long long _reuseReason;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long reuseReason; // @synthesize reuseReason=_reuseReason;
@property(readonly, nonatomic) _Bool isManual; // @synthesize isManual=_isManual;
@property(readonly, nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(readonly, nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttemptCount:(unsigned long long)arg1 isForward:(_Bool)arg2 isManual:(_Bool)arg3 reuseReason:(unsigned long long)arg4;

@end
