//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

__attribute__((visibility("hidden")))
@interface WamEventDeepLinkClick : WamEvent
{
    double _deep_link_has_text;
    double _deep_link_has_phone_number;
}

@property(nonatomic) double deep_link_has_phone_number; // @synthesize deep_link_has_phone_number=_deep_link_has_phone_number;
@property(nonatomic) double deep_link_has_text; // @synthesize deep_link_has_text=_deep_link_has_text;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

