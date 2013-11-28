/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@class GEOTileKeyList;

@interface CLMapDataCacheHint : NSObject {

	GEOTileKeyList* _tileKeys;
	int _policy;
	double _priority;

}

@property (nonatomic,retain) GEOTileKeyList * tileKeys;              //@synthesize tileKeys=_tileKeys - In the implementation block
@property (assign,nonatomic) int policy;                             //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) double priority;                        //@synthesize priority=_priority - In the implementation block
-(void)setTileKeys:(id)arg1 ;
-(void)cacheTilesForCenter:(SCD_Struct_CL33)arg1 radius:(double)arg2 forTileSetStyle:(int)arg3 atZoomLevel:(int)arg4 ;
-(void)setPolicy:(int)arg1 ;
-(int)policy;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(id)tileKeys;
@end
