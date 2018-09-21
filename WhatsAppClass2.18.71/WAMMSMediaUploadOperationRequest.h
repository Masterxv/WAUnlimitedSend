//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WAMMSMediaTransferOperationAsset;

__attribute__((visibility("hidden")))
@interface WAMMSMediaUploadOperationRequest : NSObject
{
    _Bool _skipResumeCheck;
    _Bool _cellularAllowed;
    _Bool _isForward;
    _Bool _userInitiated;
    _Bool _isImageLikeDocument;
    NSString *_identifier;
    WAMMSMediaTransferOperationAsset *_asset;
    NSString *_uploaderJID;
    NSMutableDictionary *_userInfo;
    unsigned long long _retryCount;
}

@property(nonatomic) _Bool isImageLikeDocument; // @synthesize isImageLikeDocument=_isImageLikeDocument;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) _Bool cellularAllowed; // @synthesize cellularAllowed=_cellularAllowed;
@property(readonly, nonatomic) _Bool skipResumeCheck; // @synthesize skipResumeCheck=_skipResumeCheck;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *uploaderJID; // @synthesize uploaderJID=_uploaderJID;
@property(readonly, nonatomic) WAMMSMediaTransferOperationAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 uploaderJID:(id)arg2 asset:(id)arg3 skipResumeCheck:(_Bool)arg4 cellularAllowed:(_Bool)arg5;

@end
