//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WAPaymentUPICoordinator;

@protocol WAPaymentUPICoordinatorDelegate <NSObject>
- (void)paymentUPICoordinatorDidEndLoading:(WAPaymentUPICoordinator *)arg1;
- (_Bool)paymentUPICoordinatorDidBeginLoading:(WAPaymentUPICoordinator *)arg1;
- (void)paymentUPICoordinatorDidUserCancel:(WAPaymentUPICoordinator *)arg1;
- (void)paymentUPICoordinatorDidFail:(WAPaymentUPICoordinator *)arg1 error:(NSError *)arg2;
- (void)paymentUPICoordinatorDidComplete:(WAPaymentUPICoordinator *)arg1 result:(id)arg2;
@end

