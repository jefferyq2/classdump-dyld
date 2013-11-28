/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface XPCRequest : NSObject {

	/*^block*/ id _handler;
	unsigned long _sequence;
	NSObject<OS_xpc_object>* _message;
	NSObject<OS_xpc_object>* _reply;

}

@property (nonatomic,readonly) unsigned long sequence;                         //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * reply;                //@synthesize reply=_reply - In the implementation block
-(unsigned long)sequence;
-(id)message;
-(id)reply;
-(void)sendReply;
-(void).cxx_destruct;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long)arg2 connection:(id)arg3 ;
@end
