//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL, PKPass;

__attribute__((visibility("hidden")))
@interface WADocumentAttachment : NSObject <QLPreviewItem>
{
    _Bool _ownsFile;
    _Bool _ownsSendableFile;
    _Bool _metadataProcessed;
    PKPass *_pass;
    NSURL *_fileURL;
    NSString *_MIMEType;
    NSString *_originalFilename;
    NSString *_name;
    NSURL *_sendableFileURL;
    long long _pageCount;
}

+ (_Bool)isArchivedPackageAtURL:(id)arg1;
+ (_Bool)validatePackageMetaComment:(id)arg1;
+ (id)packageMetaComment;
+ (id)thumbnailForMicrosoftXMLDocumentAtURL:(id)arg1 MIMEType:(id)arg2 preferredWidth:(double)arg3;
+ (id)temporaryFileURL;
+ (id)thumbnailForPDF:(struct CGPDFDocument *)arg1 preferredWidth:(double)arg2;
+ (id)thumbnailForPDFAtURL:(id)arg1 preferredWidth:(double)arg2;
+ (id)thumbnailForDocumentAtURL:(id)arg1 MIMEType:(id)arg2 preferredWidth:(double)arg3;
+ (_Bool)likelyToProvideThumbnailForMIMEType:(id)arg1;
+ (double)preferredThumbnailWidthInPixelsForChat;
@property(readonly, nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(readonly, nonatomic) NSURL *sendableFileURL; // @synthesize sendableFileURL=_sendableFileURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)processMSFTDocXWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processPDFWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareToSendWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 transferOwnership:(_Bool)arg2;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

