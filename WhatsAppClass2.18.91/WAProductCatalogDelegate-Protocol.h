//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, WAProductCatalog;

@protocol WAProductCatalogDelegate
- (void)productCatalog:(WAProductCatalog *)arg1 didFailToFetchProductsWithError:(NSError *)arg2;
- (void)productCatalog:(WAProductCatalog *)arg1 didFetchProductsInRange:(struct _NSRange)arg2;
@end
