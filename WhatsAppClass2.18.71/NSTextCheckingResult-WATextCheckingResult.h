//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSTextCheckingResult (WATextCheckingResult)
+ (id)wa_paymentUPIHandleLink;
+ (id)wa_updateAppLink;
+ (id)wa_learnMoreLink;
+ (id)wa_readMoreLink;
+ (id)mentionCheckingResultWithRange:(struct _NSRange)arg1 jid:(id)arg2;
- (void)setJid:(id)arg1;
@property(readonly, copy) NSString *jid;
@end
