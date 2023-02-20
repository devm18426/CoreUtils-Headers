/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CULiveAudioServer : NSObject {
    NSMutableSet * _audioSessionClients;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    RPCompanionLinkClient * _messenger;
    BOOL  _prefSiriLED;
    BOOL  _prefSiriVOX;
    NSMutableDictionary * _sessionMap;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (void)liveActionPerformRequest:(id)arg1 completion:(id)arg2;
+ (void)liveActionSetupRequest:(id)arg1 completion:(id)arg2;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id)arg1;
- (void)_audioSessionEnd:(id)arg1;
- (void)_audioSessionStart:(id)arg1;
- (void)_handleActionPlayAlert:(int)arg1 senderID:(id)arg2 completion:(id)arg3;
- (void)_handleActionPrepare:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_handleActionRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_handleActionSpeakText:(id)arg1 senderID:(id)arg2 completion:(id)arg3;
- (void)_handleDataEvent:(id)arg1 options:(id)arg2;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_prepareAlert:(long long)arg1 senderID:(id)arg2 completion:(id)arg3;
- (void)_prepareSpeakText:(id)arg1 senderID:(id)arg2 completion:(id)arg3;
- (void)activateWithCompletion:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)peerDisconnected:(id)arg1;
- (void)setDispatchQueue:(id)arg1;

@end