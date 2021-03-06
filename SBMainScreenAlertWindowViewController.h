//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertWindowViewController.h"

@class SBAppStatusBarSettingsAssertion;

@interface SBMainScreenAlertWindowViewController : SBAlertWindowViewController
{
    SBAppStatusBarSettingsAssertion *_activeAlertStatusBarAssertion;
}

- (void).cxx_destruct;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)_updateActiveAlertAssertionWithStyle:(long long)arg1 visibility:(int)arg2 styleAnimations:(id)arg3 styleOverridesToCancel:(int)arg4;
- (void)updateStatusBarForAlerts:(id)arg1;
- (id)styleViewControllerForAlertStack:(id)arg1;
- (id)hiddenViewControllerForAlertStack:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2;
- (void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(CDUnknownBlockType)arg2;

@end

