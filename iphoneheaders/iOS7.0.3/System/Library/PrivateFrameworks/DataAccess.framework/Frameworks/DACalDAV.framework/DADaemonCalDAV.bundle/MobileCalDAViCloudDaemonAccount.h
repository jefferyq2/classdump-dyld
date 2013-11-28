/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	int _port;

}
-(void)setPort:(int)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)dealloc;
-(id)host;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)additionalHeaderValues;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(BOOL)supportsReminders;
-(BOOL)shouldUseCalendarHomeSyncReport;
-(BOOL)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setUseSSL:(BOOL)arg1 ;
-(id)principalURL;
-(int)port;
@end
