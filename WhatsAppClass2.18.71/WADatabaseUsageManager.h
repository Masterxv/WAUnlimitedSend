//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSByteCountFormatter, WAChatStorage;

__attribute__((visibility("hidden")))
@interface WADatabaseUsageManager : NSObject
{
    // Error parsing type: AQ, name: _loadingIndex
    NSByteCountFormatter *_formatter;
    WAChatStorage *_chatStorage;
}

+ (id)currentMessageTypes;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
- (void).cxx_destruct;
- (id)localizedStringForByteCount:(unsigned long long)arg1;
- (void)cancel;
- (id)fileSizeForChatSession:(id)arg1 ofType:(int)arg2 context:(id)arg3;
- (unsigned long long)messageCountForChatSession:(id)arg1 ofType:(int)arg2 context:(id)arg3;
- (void)loadForChatSession:(id)arg1 withUpdateInterval:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithChatStorage:(id)arg1;

@end

