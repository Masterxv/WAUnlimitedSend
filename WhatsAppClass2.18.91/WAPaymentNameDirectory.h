//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAPaymentNameDirectory : NSObject
{
    // Error parsing type: , name: nameDirectory
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)bestSenderNameForTransaction:(id)arg1 prefersFirstName:(_Bool)arg2 allowsPushName:(_Bool)arg3 useNotificationTitleFormat:(_Bool)arg4;
- (id)bestReceiverNameForTransaction:(id)arg1 prefersFirstName:(_Bool)arg2 allowsPushName:(_Bool)arg3 useNotificationTitleFormat:(_Bool)arg4;
- (id)bestNameForJID:(id)arg1 prefersFirstName:(_Bool)arg2 allowsPushName:(_Bool)arg3 useNotificationTitleFormat:(_Bool)arg4;
- (id)initWithNameDirectory:(id)arg1;

@end

