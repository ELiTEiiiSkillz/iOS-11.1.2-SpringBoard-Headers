//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimerProviding.h"

@class NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBFAuthenticationAssertion;

@interface SBSyncController : NSObject <SBIdleTimerProviding>
{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    _Bool _showingResetUI;
    _Bool _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _isAppSyncing;
    _Bool _inExtendedAppSyncCoalescePeriod;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

+ (id)sharedInstance;
@property(nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
- (void).cxx_destruct;
- (id)_idleTimerDescriptor;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
- (void)_appInstallationNotification;
- (void)_setupRestoreTimer;
- (void)_restoreTimerFired:(id)arg1;
- (_Bool)_isBackupAgentRunning;
- (void)_invalidateRestoreTimer;
- (void)_didEndResetting;
- (void)_delayedBeginReset;
- (void)_updateProgress;
- (void)_delayedQuitApplications;
- (void)_didEndRestoring:(int)arg1;
- (void)_rebootNow;
- (void)_killApplicationsIfNecessary;
- (void)_notifyRestoreCanProceed;
- (void)_syncSessionDidEnd;
- (void)_syncSessionDidBegin;
- (void)_setRestoreState:(int)arg1;
- (void)_resetEnded:(id)arg1;
- (void)_resetStarted:(id)arg1;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)_wirelessSyncBegan:(id)arg1;
- (_Bool)isInUse;
- (void)beginResetting:(_Bool)arg1;
- (int)resetState;
- (_Bool)isResetting;
- (void)cancelRestoring;
- (void)beginRestoring;
- (int)restoreState;
- (_Bool)isRestoring;
- (void)finishedTerminatingApplications;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

