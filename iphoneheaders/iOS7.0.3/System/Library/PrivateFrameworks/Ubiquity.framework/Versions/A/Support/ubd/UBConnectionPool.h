/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Versions/A/Support/ubd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSMutableSet;

@interface UBConnectionPool : NSObject {

	NSURL* _endpoint;
	NSMutableSet* _connections;
	BOOL _allowCellular;
	double _httpTimeout;

}

@property (assign) BOOL allowCellular;              //@synthesize allowCellular=_allowCellular - In the implementation block
@property (assign) double HTTPTimeout;              //@synthesize httpTimeout=_httpTimeout - In the implementation block
@property (copy) NSURL * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
-(void)cancelAllConnections;
-(void)setAllowCellular:(BOOL)arg1 ;
-(void)setHTTPTimeout:(double)arg1 ;
-(void)loadRelativeURL:(id)arg1 asynchronously:(BOOL)arg2 data:(id)arg3 headers:(id)arg4 dataHandler:(/*^block*/ id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(BOOL)allowCellular;
-(int)optionsForURLConnection;
-(double)HTTPTimeout;
-(void)removeConnection:(id)arg1 ;
-(BOOL)addConnection:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)endpoint;
-(void)setEndpoint:(id)arg1 ;
@end
