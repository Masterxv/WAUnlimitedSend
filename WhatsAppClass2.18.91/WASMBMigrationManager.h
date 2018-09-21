//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WASMBMigrationManager : NSObject
{
    NSString *_possibleMigrationTargetJID;
}

+ (id)userDefaultsToMigrate;
+ (id)directoriesToMigrate;
+ (id)dbFilesToMigrate;
@property(readonly, copy, nonatomic) NSString *possibleMigrationTargetJID; // @synthesize possibleMigrationTargetJID=_possibleMigrationTargetJID;
- (void).cxx_destruct;
- (unsigned long long)checkIfStorageIsEnoughForMigration;
- (void)cleanupWithOperations:(id)arg1;
- (void)rollbackWithOperations:(id)arg1;
- (unsigned long long)migrateFromConsumerToSMB;
@property(readonly, nonatomic, getter=isEligibleForMigration) _Bool eligibleForMigration;
- (id)init;

@end
