/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UIMovieScrubberTrackViewDelegate <NSObject>
@optional
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(float)arg2 actualSizeWidthDelta:(float)arg3 originXDelta:(float)arg4 minimumVisibleValue:(float)arg5 maximumVisibleValue:(float)arg6;
-(void)movieScrubberTrackViewDidExpand:(id)arg1;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
@end
