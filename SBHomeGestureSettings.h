//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBHomeGestureSettings : SBUISettings
{
    _Bool _homeGestureEnabled;
    _Bool _allowGestureForAlertsNotInSwitcher;
    _Bool _recognizeAlongEdge;
    _Bool _prewarmSwitcherHaptic;
    _Bool _preventMultipleEdgesAfterAppInteraction;
    _Bool _resetSwitcherListAfterAppInteraction;
    _Bool _showExclusionTrapezoidDebugView;
    _Bool _landscapeTrapezoidEnabled;
    _Bool _allowHorizontalSwipesOutsideLandscapeTrapezoid;
    _Bool _portraitTrapezoidEnabled;
    _Bool _portraitTrapezoidEnabledOnlyForKeyboards;
    _Bool _allowHorizontalSwipesOutsidePortraitTrapezoid;
    double _hysteresis;
    double _secondsToAllowMultipleEdges;
    double _secondsToResetSwitcherListAfterTransition;
    double _landscapeTrapezoidHeight;
    double _landscapeTrapezoidBaseHeight;
    double _landscapeTrapezoidAdjacentXDistanceFromEdge;
    double _landscapeTrapezoidOpposingXDistanceFromEdge;
    double _portraitTrapezoidHeight;
    double _portraitTrapezoidBaseHeight;
    double _portraitTrapezoidAdjacentXDistanceFromEdge;
    double _portraitTrapezoidOpposingXDistanceFromEdge;
}

+ (id)settingsControllerModule;
@property(nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge; // @synthesize portraitTrapezoidOpposingXDistanceFromEdge=_portraitTrapezoidOpposingXDistanceFromEdge;
@property(nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge; // @synthesize portraitTrapezoidAdjacentXDistanceFromEdge=_portraitTrapezoidAdjacentXDistanceFromEdge;
@property(nonatomic) double portraitTrapezoidBaseHeight; // @synthesize portraitTrapezoidBaseHeight=_portraitTrapezoidBaseHeight;
@property(nonatomic) double portraitTrapezoidHeight; // @synthesize portraitTrapezoidHeight=_portraitTrapezoidHeight;
@property(nonatomic) _Bool allowHorizontalSwipesOutsidePortraitTrapezoid; // @synthesize allowHorizontalSwipesOutsidePortraitTrapezoid=_allowHorizontalSwipesOutsidePortraitTrapezoid;
@property(nonatomic) _Bool portraitTrapezoidEnabledOnlyForKeyboards; // @synthesize portraitTrapezoidEnabledOnlyForKeyboards=_portraitTrapezoidEnabledOnlyForKeyboards;
@property(nonatomic) _Bool portraitTrapezoidEnabled; // @synthesize portraitTrapezoidEnabled=_portraitTrapezoidEnabled;
@property(nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge; // @synthesize landscapeTrapezoidOpposingXDistanceFromEdge=_landscapeTrapezoidOpposingXDistanceFromEdge;
@property(nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge; // @synthesize landscapeTrapezoidAdjacentXDistanceFromEdge=_landscapeTrapezoidAdjacentXDistanceFromEdge;
@property(nonatomic) double landscapeTrapezoidBaseHeight; // @synthesize landscapeTrapezoidBaseHeight=_landscapeTrapezoidBaseHeight;
@property(nonatomic) double landscapeTrapezoidHeight; // @synthesize landscapeTrapezoidHeight=_landscapeTrapezoidHeight;
@property(nonatomic) _Bool allowHorizontalSwipesOutsideLandscapeTrapezoid; // @synthesize allowHorizontalSwipesOutsideLandscapeTrapezoid=_allowHorizontalSwipesOutsideLandscapeTrapezoid;
@property(nonatomic) _Bool landscapeTrapezoidEnabled; // @synthesize landscapeTrapezoidEnabled=_landscapeTrapezoidEnabled;
@property(nonatomic) _Bool showExclusionTrapezoidDebugView; // @synthesize showExclusionTrapezoidDebugView=_showExclusionTrapezoidDebugView;
@property(nonatomic) _Bool resetSwitcherListAfterAppInteraction; // @synthesize resetSwitcherListAfterAppInteraction=_resetSwitcherListAfterAppInteraction;
@property(nonatomic) double secondsToResetSwitcherListAfterTransition; // @synthesize secondsToResetSwitcherListAfterTransition=_secondsToResetSwitcherListAfterTransition;
@property(nonatomic) _Bool preventMultipleEdgesAfterAppInteraction; // @synthesize preventMultipleEdgesAfterAppInteraction=_preventMultipleEdgesAfterAppInteraction;
@property(nonatomic) double secondsToAllowMultipleEdges; // @synthesize secondsToAllowMultipleEdges=_secondsToAllowMultipleEdges;
@property(nonatomic) _Bool prewarmSwitcherHaptic; // @synthesize prewarmSwitcherHaptic=_prewarmSwitcherHaptic;
@property(nonatomic) _Bool recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) _Bool allowGestureForAlertsNotInSwitcher; // @synthesize allowGestureForAlertsNotInSwitcher=_allowGestureForAlertsNotInSwitcher;
@property(nonatomic, getter=isHomeGestureEnabled) _Bool homeGestureEnabled; // @synthesize homeGestureEnabled=_homeGestureEnabled;
- (void)setDefaultValues;

@end

