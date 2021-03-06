//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAActionSheetPresenter : NSObject
{
    _Bool _presentsInWindow;
    _Bool _showsCancelButton;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) _Bool presentsInWindow; // @synthesize presentsInWindow=_presentsInWindow;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)addCancelButton;
- (void)addButtonWithTitle:(id)arg1 image:(id)arg2 useBoldText:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDetailButtonWithTitle:(id)arg1 detailImage:(id)arg2 image:(id)arg3 useBoldText:(_Bool)arg4 smallFont:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addDetailButtonWithTitle:(id)arg1 detailImage:(id)arg2 jid:(id)arg3 useBoldText:(_Bool)arg4 smallFont:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)didDismissByCancelling:(_Bool)arg1;
- (void)dismissByCancellingWithAnimation:(_Bool)arg1;
- (void)presentFromViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (void)applicationWillResetUserInterface:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

