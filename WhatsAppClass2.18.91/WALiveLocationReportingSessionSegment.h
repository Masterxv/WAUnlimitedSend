//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WALiveLocationReportingSessionSegment : NSObject
{
    _Bool _chargingDetected;
    long long _numberOfUpdates;
    long long _backoffStage;
    NSString *_userDefaultsKey;
    NSDate *_startTime;
    NSDate *_endTime;
    double _startBatteryLevel;
    double _endBatteryLevel;
    long long _segmentNumber;
}

+ (id)wholeSessionSegment;
+ (void)deleteSavedWholeSessionSegment;
+ (id)savedWholeSessionSegment;
+ (id)savedSegment;
@property(nonatomic) _Bool chargingDetected; // @synthesize chargingDetected=_chargingDetected;
@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) double endBatteryLevel; // @synthesize endBatteryLevel=_endBatteryLevel;
@property(nonatomic) double startBatteryLevel; // @synthesize startBatteryLevel=_startBatteryLevel;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(nonatomic) long long backoffStage; // @synthesize backoffStage=_backoffStage;
@property(nonatomic) long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)save;
- (void)didSendUpdate;
- (id)successor;
- (void)stop;
@property(readonly, nonatomic) double age;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSegmentNumber:(long long)arg1;
- (id)init;

@end
