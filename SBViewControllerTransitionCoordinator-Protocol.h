//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerTransitionCoordinatorContext.h"
#import "UIViewControllerTransitionCoordinator.h"

@class UIView;

@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator, SBViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1;
- (_Bool)animateAlongsideTransitionInView:(UIView *)arg1 animation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg3;
- (_Bool)animateAlongsideTransition:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2;
- (void)addTransitionContinuation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>, void (^)(void)))arg1;
- (_Bool)requiresRestartableAnimations;
- (_Bool)requiresInteractiveAnimations;
- (_Bool)requiresCancellableAnimations;
@end

