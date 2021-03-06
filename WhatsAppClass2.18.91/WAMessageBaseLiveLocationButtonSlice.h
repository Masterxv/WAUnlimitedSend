//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSString, WAWeakTimer;
@protocol WAMessageLiveLocationSliceDelegate;

__attribute__((visibility("hidden")))
@interface WAMessageBaseLiveLocationButtonSlice : WAMessageContainerSlice
{
    WAWeakTimer *_timer;
    NSString *_chatJID;
    NSString *_sender;
    NSString *_messageUniqueID;
    _Bool _invalidated;
    _Bool _divider;
    id <WAMessageLiveLocationSliceDelegate> _delegate;
    NSString *_contactJID;
}

@property(readonly, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
@property(nonatomic) _Bool divider; // @synthesize divider=_divider;
@property(readonly, nonatomic) NSString *contactJID; // @synthesize contactJID=_contactJID;
@property(nonatomic) __weak id <WAMessageLiveLocationSliceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateStatusIfNeeded;
- (void)locationSharingEndDateDidChange:(id)arg1;
- (void)internalFitToWidth:(double)arg1;
- (void)scheduleExpirationTimerForMessage:(id)arg1 now:(id)arg2;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end

