/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (assign,nonatomic) id changeListener; 
@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)stopAudioSession;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)currentInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(void)initializeAudioSessionQ;
-(void)dealloc;
-(id)init;
-(id)deviceList;
-(void)setChangeListener:(/*^block*/ id)arg1 ;
-(/*^block*/ id)changeListener;
-(id)devices;
-(id)inputDevices;
-(id)outputDevices;
-(void)setDeviceList:(id)arg1 ;
@end
