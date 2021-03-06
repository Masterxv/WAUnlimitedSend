//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventIphoneChatSocketConnect : WamEvent
{
    NSNumber *_iphone_socket_connection_state_type_number;
    NSNumber *_dns_resolution_type_number;
    double _iphone_socket_connection_t;
    double _iphone_socket_connect_duration_t;
    double _tcp_handshake_t;
    double _dns_resolution_t;
    double _iphone_socket_disconnect_is_external;
    double _iphone_socket_port;
    NSString *_iphone_socket_hostname;
    NSString *_iphone_socket_ip;
    double _iphone_socket_is_http;
    double _iphone_socket_is_hint;
    double _iphone_socket_is_fallback;
    double _dns_resolution_parallel;
}

@property(nonatomic) double dns_resolution_parallel; // @synthesize dns_resolution_parallel=_dns_resolution_parallel;
@property(nonatomic) double iphone_socket_is_fallback; // @synthesize iphone_socket_is_fallback=_iphone_socket_is_fallback;
@property(nonatomic) double iphone_socket_is_hint; // @synthesize iphone_socket_is_hint=_iphone_socket_is_hint;
@property(nonatomic) double iphone_socket_is_http; // @synthesize iphone_socket_is_http=_iphone_socket_is_http;
@property(copy, nonatomic) NSString *iphone_socket_ip; // @synthesize iphone_socket_ip=_iphone_socket_ip;
@property(copy, nonatomic) NSString *iphone_socket_hostname; // @synthesize iphone_socket_hostname=_iphone_socket_hostname;
@property(nonatomic) double iphone_socket_port; // @synthesize iphone_socket_port=_iphone_socket_port;
@property(nonatomic) double iphone_socket_disconnect_is_external; // @synthesize iphone_socket_disconnect_is_external=_iphone_socket_disconnect_is_external;
@property(nonatomic) double dns_resolution_t_milliseconds; // @synthesize dns_resolution_t_milliseconds=_dns_resolution_t;
@property(nonatomic) double tcp_handshake_t_milliseconds; // @synthesize tcp_handshake_t_milliseconds=_tcp_handshake_t;
@property(nonatomic) double iphone_socket_connect_duration_t_milliseconds; // @synthesize iphone_socket_connect_duration_t_milliseconds=_iphone_socket_connect_duration_t;
@property(nonatomic) double iphone_socket_connection_t_milliseconds; // @synthesize iphone_socket_connection_t_milliseconds=_iphone_socket_connection_t;
- (void).cxx_destruct;
@property(nonatomic) double dns_resolution_t_seconds;
@property(nonatomic) long long dns_resolution_type;
- (_Bool)is_dns_resolution_type_set;
@property(nonatomic) double tcp_handshake_t_seconds;
@property(nonatomic) double iphone_socket_connect_duration_t_seconds;
@property(nonatomic) double iphone_socket_connection_t_seconds;
@property(nonatomic) long long iphone_socket_connection_state_type;
- (_Bool)is_iphone_socket_connection_state_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

