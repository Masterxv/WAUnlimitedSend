//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAOperation.h"

#import "WABackupOperation-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WASynchronousBackupOperation : WAOperation <WABackupOperation>
{
    _Bool _dependencyResult;
    _Bool _requireDependencies;
}

@property(readonly) _Bool requireDependencies; // @synthesize requireDependencies=_requireDependencies;
- (void)run;
- (void)main;
@property(readonly) unsigned long long totalSteps;
@property(readonly) unsigned long long completedSteps;
@property(readonly) _Bool succeeded;
- (id)initWithDependenciesRequired:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

