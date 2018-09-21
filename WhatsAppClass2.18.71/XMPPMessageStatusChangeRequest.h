//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPMessageStatusChangeRequest : NSObject
{
    int _status;
    NSString *_stanzaID;
    NSString *_fromJID;
    NSString *_participantJID;
    long long _editVersion;
}

@property(readonly, nonatomic) long long editVersion; // @synthesize editVersion=_editVersion;
@property(readonly, nonatomic) NSString *participantJID; // @synthesize participantJID=_participantJID;
@property(readonly, nonatomic) NSString *fromJID; // @synthesize fromJID=_fromJID;
@property(readonly, nonatomic) NSString *stanzaID; // @synthesize stanzaID=_stanzaID;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithMessageStatus:(int)arg1 stanzaID:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 editVersion:(long long)arg5;

@end
