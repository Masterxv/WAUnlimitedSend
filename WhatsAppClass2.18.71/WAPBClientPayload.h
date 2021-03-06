//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBInt32Array, NSData, NSString, WAPBClientPayload_UserAgent, WAPBClientPayload_WebInfo;

__attribute__((visibility("hidden")))
@interface WAPBClientPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *clientFeaturesArray; // @dynamic clientFeaturesArray;
@property(readonly, nonatomic) unsigned long long clientFeaturesArray_Count; // @dynamic clientFeaturesArray_Count;
@property(nonatomic) int connectReason; // @dynamic connectReason;
@property(nonatomic) int connectType; // @dynamic connectType;
@property(nonatomic) _Bool hasConnectReason; // @dynamic hasConnectReason;
@property(nonatomic) _Bool hasConnectType; // @dynamic hasConnectType;
@property(nonatomic) _Bool hasIosAppExtension; // @dynamic hasIosAppExtension;
@property(nonatomic) _Bool hasLegacyPassword; // @dynamic hasLegacyPassword;
@property(nonatomic) _Bool hasPassive; // @dynamic hasPassive;
@property(nonatomic) _Bool hasPushName; // @dynamic hasPushName;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasShortConnect; // @dynamic hasShortConnect;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) _Bool hasUsername; // @dynamic hasUsername;
@property(nonatomic) _Bool hasWebInfo; // @dynamic hasWebInfo;
@property(nonatomic) int iosAppExtension; // @dynamic iosAppExtension;
@property(copy, nonatomic) NSData *legacyPassword; // @dynamic legacyPassword;
@property(nonatomic) _Bool passive; // @dynamic passive;
@property(copy, nonatomic) NSString *pushName; // @dynamic pushName;
@property(nonatomic) int sessionId; // @dynamic sessionId;
@property(retain, nonatomic) GPBInt32Array *shardsArray; // @dynamic shardsArray;
@property(readonly, nonatomic) unsigned long long shardsArray_Count; // @dynamic shardsArray_Count;
@property(nonatomic) _Bool shortConnect; // @dynamic shortConnect;
@property(retain, nonatomic) WAPBClientPayload_UserAgent *userAgent; // @dynamic userAgent;
@property(nonatomic) unsigned long long username; // @dynamic username;
@property(retain, nonatomic) WAPBClientPayload_WebInfo *webInfo; // @dynamic webInfo;

@end

