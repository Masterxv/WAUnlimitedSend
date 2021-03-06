//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventGifSearchNoResults : WamEvent
{
    NSNumber *_gif_search_provider_number;
    NSString *_input_language_code;
    NSString *_language_code;
}

@property(copy, nonatomic) NSString *language_code; // @synthesize language_code=_language_code;
@property(copy, nonatomic) NSString *input_language_code; // @synthesize input_language_code=_input_language_code;
- (void).cxx_destruct;
@property(nonatomic) long long gif_search_provider;
- (_Bool)is_gif_search_provider_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

