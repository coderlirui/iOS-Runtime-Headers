/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@class <FudConnection>, <MobileAccessoryUpdaterDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface MobileAccessoryUpdater : NSObject {
    NSString *_activeFilter;
    NSString *_bundleIdentifier;
    char *_cClientIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_clientIdentifier;
    <FudConnection> *_connection;
    <MobileAccessoryUpdaterDelegate> *_delegate;
    BOOL _didUnregister;
    BOOL _isInternalClient;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

- (id)activeFilter;
- (id)bundleIdentifier;
- (id)clientIdentifier;
- (void)createConnection;
- (void)dealloc;
- (BOOL)doesOperationCodeRequireFilter:(int)arg1;
- (id)getActiveDeviceClass;
- (const char *)getActiveDeviceClassCString;
- (int)getOperationCodeFromName:(id)arg1;
- (void)handleInboundEvent:(id)arg1;
- (id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 isInternalClient:(BOOL)arg4 options:(id)arg5 error:(id*)arg6;
- (void)performNextStepWithOptions:(id)arg1;
- (void)performStep:(id)arg1 withOptions:(id)arg2;
- (id)queryNextStep:(id*)arg1;
- (BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2;
- (BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 replyHandler:(id)arg4;
- (BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3;
- (BOOL)setActiveDeviceClass:(id)arg1;
- (BOOL)setLastRemoteFindDate:(id)arg1;
- (void)unregister;

@end
