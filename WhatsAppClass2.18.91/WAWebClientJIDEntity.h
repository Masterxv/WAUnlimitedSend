//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WABizVerifiedNameInfo;

__attribute__((visibility("hidden")))
@interface WAWebClientJIDEntity : NSObject
{
    _Bool _statusMute;
    NSString *_jid;
    NSString *_fullName;
    NSString *_shortName;
    NSString *_sectionTitle;
    NSString *_pushName;
    WABizVerifiedNameInfo *_verifiedNameInfo;
}

@property(nonatomic) _Bool statusMute; // @synthesize statusMute=_statusMute;
@property(retain, nonatomic) WABizVerifiedNameInfo *verifiedNameInfo; // @synthesize verifiedNameInfo=_verifiedNameInfo;
@property(copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (id)initWithJID:(id)arg1;

@end

