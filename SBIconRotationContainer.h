//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBIcon, SBIconView, SBIconViewMap;

@interface SBIconRotationContainer : UIView
{
    struct SBIconCoordinate _coordinate;
    SBIconViewMap *_viewMap;
    SBIconView *_startView;
    SBIconView *_endView;
    struct CGPoint _wallpaperRelativeImageCenter;
    long long _location;
}

@property(readonly, nonatomic) long long location; // @synthesize location=_location;
@property(nonatomic) struct CGPoint wallpaperRelativeImageCenter; // @synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter;
@property(readonly, nonatomic) struct SBIconCoordinate coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)crossfadeWithDuration:(double)arg1;
- (void)prepareToCrossfade;
@property(readonly, nonatomic) struct CGPoint iconImageCenter;
@property(readonly, nonatomic) SBIcon *endIcon;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 viewMap:(id)arg4 coordinate:(struct SBIconCoordinate)arg5 location:(long long)arg6;

@end

