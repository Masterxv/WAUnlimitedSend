//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAPrivacyPolicy : NSObject
{
    unsigned long long _privacySetting[3];
    long long _pendingRequestId[3];
    _Bool _needRefetch;
}

+ (id)stringForSetting:(unsigned long long)arg1;
+ (void)resetPolicy;
+ (id)sharedPolicy;
- (void)setPrivacy:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (unsigned long long)settingForCategory:(unsigned long long)arg1;
- (void)loadPrivacySettingsIfNeeded;
- (void)ignoreResultsOfPendingRequests;
- (void)resetValues;
- (id)init;

@end

