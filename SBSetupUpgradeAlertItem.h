//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBSetupUpgradeAlertItem : SBAlertItem
{
    _Bool _goingToSetup;
}

- (_Bool)allowLockScreenDismissal;
- (void)performUnlockAction;
- (int)alertPriority;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowInSetup;
- (_Bool)unlocksScreen;
- (_Bool)allowAutoUnlock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithGoingToSetup:(_Bool)arg1;

@end

