//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class WAPBGroupRankingMetricSet, WAPBIndividualRankingMetricSet;

__attribute__((visibility("hidden")))
@interface WAPBRankingMetricSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WAPBGroupRankingMetricSet *groupRankingMetricSet; // @dynamic groupRankingMetricSet;
@property(nonatomic) _Bool hasGroupRankingMetricSet; // @dynamic hasGroupRankingMetricSet;
@property(nonatomic) _Bool hasIndividualRankingMetricSet; // @dynamic hasIndividualRankingMetricSet;
@property(retain, nonatomic) WAPBIndividualRankingMetricSet *individualRankingMetricSet; // @dynamic individualRankingMetricSet;

@end
