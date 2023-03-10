/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CULiveAudioPeerSession : NSObject <CUActivatable> {
    RPCompanionLinkClient * _clinkClient;
    RPCompanionLinkDevice * _destinationDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _invalidationHandler;
}

@property (nonatomic, retain) RPCompanionLinkDevice *destinationDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id invalidationHandler;

- (void).cxx_destruct;
- (void)_activateCompleted:(id)arg1;
- (void)activateWithCompletion:(id)arg1;
- (id)destinationDevice;
- (id)dispatchQueue;
- (void)invalidate;
- (id)invalidationHandler;
- (void)sendAudioDataEvent:(id)arg1;
- (void)setDestinationDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;

@end
