//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimatableProperty.h"

__attribute__((visibility("hidden")))
@interface POPStaticAnimatableProperty : POPAnimatableProperty
{
    struct {
        id _field1;
        CDUnknownBlockType _field2;
        CDUnknownBlockType _field3;
        double _field4;
    } *_state;
}

- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)name;

@end
