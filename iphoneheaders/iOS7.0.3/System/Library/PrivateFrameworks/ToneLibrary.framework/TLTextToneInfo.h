/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TLTextToneInfo : NSObject {

	unsigned long _previewSound;
	unsigned long _actualSound;
	NSString* _filePath;

}

@property (nonatomic,readonly) unsigned long previewSound;              //@synthesize previewSound=_previewSound - In the implementation block
@property (nonatomic,readonly) unsigned long actualSound;               //@synthesize actualSound=_actualSound - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                     //@synthesize filePath=_filePath - In the implementation block
-(void)dealloc;
-(id)filePath;
-(id)initWithPreviewSound:(unsigned long)arg1 actualSound:(unsigned long)arg2 filePath:(id)arg3 ;
-(unsigned long)previewSound;
-(unsigned long)actualSound;
@end
