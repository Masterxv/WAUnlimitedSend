//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAHKDF : NSObject
{
}

+ (id)hkdfExpandFromPRK:(id)arg1 info:(id)arg2 withIterationStartOffset:(unsigned char)arg3 outputLength:(unsigned short)arg4;
+ (id)hkdfExtractFromKeyMaterial:(id)arg1 withSalt:(id)arg2;
+ (id)derivedSecretsOfLength:(unsigned short)arg1 fromInputKeyMaterial:(id)arg2 salt:(id)arg3 info:(id)arg4;
+ (id)deriveSecretsFromInputKeyMaterial:(id)arg1 salt:(id)arg2 info:(id)arg3 outputLength:(unsigned short)arg4 withMessageVersion:(unsigned char)arg5;

@end
