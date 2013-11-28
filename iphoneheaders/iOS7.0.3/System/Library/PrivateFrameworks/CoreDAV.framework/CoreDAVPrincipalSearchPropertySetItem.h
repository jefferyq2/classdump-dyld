/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {

	NSMutableSet* _principalSearchProperties;

}

@property (retain) NSMutableSet * principalSearchProperties;              //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)principalSearchProperties;
-(void)addPrincipalSearchProperty:(id)arg1 ;
-(void)setPrincipalSearchProperties:(id)arg1 ;
@end
