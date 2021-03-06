//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, XMPPAttributes;
@protocol WAServerDate;

__attribute__((visibility("hidden")))
@interface XMPPGroupNotification : NSObject
{
    _Bool _offlineStorage;
    _Bool _receivedWithActiveWebClientSession;
    NSString *_groupJID;
    NSString *_participantJID;
    NSString *_participantName;
    NSDate<WAServerDate> *_timestamp;
    XMPPAttributes *_stanzaAttributes;
}

@property(readonly, nonatomic, getter=isReceivedWithActiveWebClientSession) _Bool receivedWithActiveWebClientSession; // @synthesize receivedWithActiveWebClientSession=_receivedWithActiveWebClientSession;
@property(copy, nonatomic) XMPPAttributes *stanzaAttributes; // @synthesize stanzaAttributes=_stanzaAttributes;
@property(readonly, nonatomic) _Bool offlineStorage; // @synthesize offlineStorage=_offlineStorage;
@property(readonly, nonatomic) NSDate<WAServerDate> *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *participantName; // @synthesize participantName=_participantName;
@property(copy, nonatomic) NSString *participantJID; // @synthesize participantJID=_participantJID;
@property(readonly, copy, nonatomic) NSString *groupJID; // @synthesize groupJID=_groupJID;
- (void).cxx_destruct;
- (id)initWithGroupNotificationStanza:(id)arg1;

@end

