//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, UIScreenEdgePanGestureRecognizer, UITapGestureRecognizer;

@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_bounceTapRecognizer;
    UITapGestureRecognizer *_revealTapRecognizer;
    UITapGestureRecognizer *_revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer *_revealEdgePanRecognizer;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSHashTable *_registeredGrabbers;
    _Bool _gestureEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_edgePanChanged:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)unregisterGrabber:(id)arg1;
- (void)registerGrabber:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

