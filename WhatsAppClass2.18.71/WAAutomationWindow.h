//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface WAAutomationWindow : UIWindow
{
    UIButton *_screenshotButton;
    UIButton *_showFormButton;
    UIButton *_saveDataButton;
    UIButton *_showTOSScreenButton;
    UIButton *_codeButton;
    NSString *_currentSeriesName;
    int _screenshotCounter;
    NSMutableArray *_allLabelInfos;
    NSMutableSet *_allSeriesNames;
    _Bool _isShowingForm;
    unsigned long long _tosStage;
    NSMutableDictionary *_tooltipStrings;
    NSMutableDictionary *_alertStrings;
    NSDictionary *_codeMap;
}

- (void).cxx_destruct;
- (void)showTOSScreen:(id)arg1;
- (void)alertStringWasChanged:(id)arg1 isVisible:(_Bool)arg2 isTruncated:(_Bool)arg3 currentSize:(struct CGSize)arg4 idealSize:(struct CGSize)arg5;
- (void)tooltipStringWasChanged:(id)arg1 isVisible:(_Bool)arg2 isTruncated:(_Bool)arg3 currentSize:(struct CGSize)arg4 idealSize:(struct CGSize)arg5;
- (id)allLabelsInView:(id)arg1;
- (id)allVisibleLabels;
- (id)jsonArrayForCaptureDict:(id)arg1;
- (id)jsonArrayForLabel:(id)arg1;
- (void)saveLabelInfo;
- (void)snapshot;
- (void)saveData:(id)arg1;
- (void)detectTruncations;
- (void)showCodeDialog:(id)arg1;
- (void)showForm:(id)arg1;
- (id)filePathForJSONData;
- (id)filePathForScreenshot;
- (id)currentIdentifierWithPrefix:(id)arg1;
- (void)takeScreenshot:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
