//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPPaymentTOSResponse : NSObject
{
    NSString *_accepted;
    NSString *_outage;
    NSString *_sandbox;
}

+ (id)responseFromStanza:(id)arg1;
@property(copy, nonatomic) NSString *sandbox; // @synthesize sandbox=_sandbox;
@property(copy, nonatomic) NSString *outage; // @synthesize outage=_outage;
@property(copy, nonatomic) NSString *accepted; // @synthesize accepted=_accepted;
- (void).cxx_destruct;
- (id)description;

@end
