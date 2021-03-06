//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface XMPPStatusAdsPolicy : NSObject
{
    NSString *_policyID;
    unsigned long long _minimumMedia;
    unsigned long long _minimumRows;
    unsigned long long _viewSlot;
    double _timeGap;
    long long _errorCode;
    NSError *_error;
}

+ (id)statusAdsPolicyFromStatusAdsPolicyElement:(id)arg1;
+ (id)defaultStatusAdsPolicy;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) double timeGap; // @synthesize timeGap=_timeGap;
@property(nonatomic) unsigned long long viewSlot; // @synthesize viewSlot=_viewSlot;
@property(nonatomic) unsigned long long minimumRows; // @synthesize minimumRows=_minimumRows;
@property(nonatomic) unsigned long long minimumMedia; // @synthesize minimumMedia=_minimumMedia;
@property(copy, nonatomic) NSString *policyID; // @synthesize policyID=_policyID;
- (void).cxx_destruct;

@end

