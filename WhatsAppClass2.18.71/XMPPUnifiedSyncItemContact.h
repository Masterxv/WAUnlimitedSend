//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPUnifiedSyncItemBase.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPUnifiedSyncItemContact : XMPPUnifiedSyncItemBase
{
    _Bool _deleted;
    NSString *_phoneNumber;
}

@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithPhoneNumber:(id)arg1 deleted:(_Bool)arg2;

@end

