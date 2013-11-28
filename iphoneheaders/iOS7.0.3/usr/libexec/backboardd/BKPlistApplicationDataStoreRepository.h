/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <backboardd/BKApplicationDataStoreRepository.h>

@protocol BKApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSMutableDictionary, NSObject;

@interface BKPlistApplicationDataStoreRepository : NSObject <BKApplicationDataStoreRepository> {

	NSURL* _storeURL;
	NSMutableDictionary* _state;
	BOOL _dirty;
	unsigned _batchCount;
	int _autoFlushDuration;
	<BKApplicationDataStoreRepositoryDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _stateQueue;
	NSObject<OS_dispatch_queue>* _writeQueue;

}

@property (assign,nonatomic) <BKApplicationDataStoreRepositoryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)objectForKeys:(id)arg1 forAllApplicationsWithResult:(/*^block*/ id)arg2 ;
-(void)flushSynchronously;
-(id)applicationIdentifiersWithState;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(id)initWithStorePath:(id)arg1 ;
-(void)beginBatchedUpdate;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(void)endBatchedUpdate;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id)_stateQueue_storeForIdentifier:(id)arg1 ;
-(id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_stateQueue_objectsForKeys:(id)arg1 ;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1 ;
-(void)_stateQueue_markDirty;
-(void)_stateQueue_removeStoreForIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)_writeQueue_flushSynchronously;
-(void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
-(id)keysForApplication:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)location;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/ id)arg3 ;
-(BOOL)isDirty;
-(void)_load;
@end
