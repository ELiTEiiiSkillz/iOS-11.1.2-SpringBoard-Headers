//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBApplicationSceneHandle, SBLayoutState, SBSceneManager;

@protocol SBSceneManagerObserver <NSObject>

@optional
- (void)sceneManager:(SBSceneManager *)arg1 didChangeFromLayoutState:(SBLayoutState *)arg2 toLayoutState:(SBLayoutState *)arg3;
- (void)sceneManagerDidInvalidate:(SBSceneManager *)arg1;
- (void)sceneManager:(SBSceneManager *)arg1 didRemoveExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
- (void)sceneManager:(SBSceneManager *)arg1 didAddExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
@end

