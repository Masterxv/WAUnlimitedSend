//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

@class NSDate, NSString, WAChatSession;

__attribute__((visibility("hidden")))
@interface WAChatProperties : WAChatStorageManagedObject
{
}

@property(retain, nonatomic) NSDate *muteDate; // @dynamic muteDate;

// Remaining properties
@property(nonatomic) _Bool alerts; // @dynamic alerts;
@property(retain, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(copy, nonatomic) NSString *soundName; // @dynamic soundName;

@end

