//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventQrScannerUsage : WamEvent
{
    NSNumber *_scan_type_number;
    double _scan_time_t;
    double _scan_read_count;
    double _scan_valid_count;
}

@property(nonatomic) double scan_valid_count; // @synthesize scan_valid_count=_scan_valid_count;
@property(nonatomic) double scan_read_count; // @synthesize scan_read_count=_scan_read_count;
@property(nonatomic) double scan_time_t_milliseconds; // @synthesize scan_time_t_milliseconds=_scan_time_t;
- (void).cxx_destruct;
@property(nonatomic) double scan_time_t_seconds;
@property(nonatomic) long long scan_type;
- (_Bool)is_scan_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
