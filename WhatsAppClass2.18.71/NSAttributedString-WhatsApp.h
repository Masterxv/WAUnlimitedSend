//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (WhatsApp)
+ (id)wa_attributedStringFromStringWithLinks:(id)arg1 attributes:(id)arg2;
- (_Bool)wa_hasUniformFontSize;
- (id)wa_baseFont;
- (void)wa_rangesOfWordsThatAreIncludedInRange:(struct _NSRange)arg1 withWordRanges:(CDUnknownBlockType)arg2;
- (struct _NSRange)adjustedRange:(struct _NSRange)arg1 byRemovingFormattingSymbolsFromAttributedString:(id)arg2;
- (struct _NSRange)wa_formattingSymbolSuffixRange;
- (struct _NSRange)wa_formattingSymbolPrefixRange;
@end

