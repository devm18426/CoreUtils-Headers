/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUWiFiManager : NSObject <CWEventDelegate, CWInternalEventDelegate> {
    BOOL  _activateCalled;
    BOOL  _activated;
    unsigned int  _controlFlags;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _infraDisabled;
    BOOL  _infraDisabledChanged;
    id  _interruptionHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    BOOL  _trafficPeerChanged;
    NSArray * _trafficPeers;
    NSArray * _trafficPeersCurrent;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    BOOL  _updating;
    BOOL  _wakeOnWirelessEnabled;
    BOOL  _wakeOnWirelessEnabledChanged;
    BOOL  _wifiAutoJoinDisabled;
    BOOL  _wifiCriticalSetup;
    BOOL  _wifiCriticalState;
    void * _wifiDevice;
    BOOL  _wifiDeviceSetup;
    unsigned int  _wifiFlags;
    CWWiFiClient * _wifiMacClient;
    void * _wifiManager;
    BOOL  _wifiManagerSetup;
    void * _wifiNetworkDisabled;
    CURetrier * _wifiRetrier;
    int  _wifiState;
    id  _wifiStateChangedHandler;
    BOOL  _wifiStateMonitorSetup;
}

@property (nonatomic) unsigned int controlFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL infraDisabled;
@property (nonatomic, copy) id interruptionHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *trafficPeers;
@property (nonatomic) BOOL wakeOnWirelessEnabled;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (nonatomic, copy) id wifiStateChangedHandler;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(id)arg1;
- (void)_interrupted;
- (void)_invalidated;
- (void)_update;
- (void)_updateInfraDisabled;
- (void)_updateTrafficPeers;
- (void)_updateTrafficPeersWithService:(unsigned int)arg1;
- (void)_updateWakeOnWireless;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (unsigned int)_wifiFlagsUncached;
- (void)_wifiStateChanged;
- (int)_wifiStateUncached;
- (void)activate;
- (void)activateWithCompletion:(id)arg1;
- (void)clientConnectionInterrupted;
- (unsigned int)controlFlags;
- (void)dealloc;
- (id)dispatchQueue;
- (BOOL)infraDisabled;
- (id)init;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (void)joinDidCompleteForWiFiInterfaceWithName:(id)arg1 error:(id)arg2;
- (void)joinDidStartForWiFiInterfaceWithName:(id)arg1 ssid:(id)arg2;
- (id)label;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)performUpdate:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)setControlFlags:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInfraDisabled:(BOOL)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTrafficPeers:(id)arg1;
- (void)setWakeOnWirelessEnabled:(BOOL)arg1;
- (void)setWifiStateChangedHandler:(id)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (id)trafficPeers;
- (BOOL)wakeOnWirelessEnabled;
- (unsigned int)wifiFlags;
- (int)wifiState;
- (id)wifiStateChangedHandler;

@end
