//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SBDashBoardIdleTimerProvider, SBIdleTimerDescriptor;

@protocol SBDashBoardIdleTimerProviderDelegate
- (void)idleTimerWillRefresh:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidChange:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidWarn:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidExpire:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidRefresh:(SBDashBoardIdleTimerProvider *)arg1;
- (id <SBIdleTimer>)dashBoardIdleTimerProvider:(SBDashBoardIdleTimerProvider *)arg1 didProposeDescriptor:(SBIdleTimerDescriptor *)arg2 reason:(NSString *)arg3;
@end

