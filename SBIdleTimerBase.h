//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimer.h"
#import "SBIdleTimerActivation.h"

@class NSHashTable, NSString;

@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer>
{
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_makeObserversPerformSelector:(SEL)arg1;
@property(nonatomic, getter=isActivated) _Bool activated;
- (void)removeIdleTimerObserver:(id)arg1;
- (void)addIdleTimerObserver:(id)arg1;
- (_Bool)isEqualToTimer:(id)arg1;
- (void)removeAllIdleTimerObservers;
- (void)reset;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

