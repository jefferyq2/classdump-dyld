/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCategoryAxisLabelsLayoutItem.h>

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned)arg2 ;
-(unsigned)numberOfLabelsForAxis:(id)arg1 ;
-(unsigned)selectionPathLabelIndexForIndex:(unsigned)arg1 axis:(id)arg2 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned)arg2 ;
-(CGSize)calcMinSize;
-(BOOL)showLabelsForAxis:(id)arg1 ;
-(unsigned)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(id)initWithParent:(id)arg1 ;
@end
