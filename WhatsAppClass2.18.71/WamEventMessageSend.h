//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventMessageSend : WamEvent
{
    NSNumber *_message_send_result_number;
    NSNumber *_message_type_number;
    NSNumber *_message_media_type_number;
    NSNumber *_e2e_ciphertext_type_number;
    double _message_forward_age_t;
    double _message_send_t;
    double _message_is_forward;
    double _message_is_fast_forward;
    double _fast_forward_enabled;
    double _message_is_fanout;
    double _retry_count;
    double _resend_count;
    double _message_is_international;
    double _media_caption_present;
    double _e2e_ciphertext_version;
    double _message_send_opt_upload_enabled;
}

@property(nonatomic) double message_send_opt_upload_enabled; // @synthesize message_send_opt_upload_enabled=_message_send_opt_upload_enabled;
@property(nonatomic) double e2e_ciphertext_version; // @synthesize e2e_ciphertext_version=_e2e_ciphertext_version;
@property(nonatomic) double media_caption_present; // @synthesize media_caption_present=_media_caption_present;
@property(nonatomic) double message_is_international; // @synthesize message_is_international=_message_is_international;
@property(nonatomic) double resend_count; // @synthesize resend_count=_resend_count;
@property(nonatomic) double retry_count; // @synthesize retry_count=_retry_count;
@property(nonatomic) double message_is_fanout; // @synthesize message_is_fanout=_message_is_fanout;
@property(nonatomic) double fast_forward_enabled; // @synthesize fast_forward_enabled=_fast_forward_enabled;
@property(nonatomic) double message_is_fast_forward; // @synthesize message_is_fast_forward=_message_is_fast_forward;
@property(nonatomic) double message_is_forward; // @synthesize message_is_forward=_message_is_forward;
@property(nonatomic) double message_send_t_milliseconds; // @synthesize message_send_t_milliseconds=_message_send_t;
@property(nonatomic) double message_forward_age_t_milliseconds; // @synthesize message_forward_age_t_milliseconds=_message_forward_age_t;
- (void).cxx_destruct;
@property(nonatomic) double message_send_t_seconds;
@property(nonatomic) long long e2e_ciphertext_type;
- (_Bool)is_e2e_ciphertext_type_set;
@property(nonatomic) double message_forward_age_t_seconds;
@property(nonatomic) long long message_media_type;
- (_Bool)is_message_media_type_set;
@property(nonatomic) long long message_type;
- (_Bool)is_message_type_set;
@property(nonatomic) long long message_send_result;
- (_Bool)is_message_send_result_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

