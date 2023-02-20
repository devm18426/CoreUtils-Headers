/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUTDSAgent : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {
    unsigned char  _advertiseBytes;
    unsigned long long  _advertiseLen;
    unsigned long long  _advertiseProviderCount;
    unsigned long long  _advertiseSeekerCount;
    unsigned long long  _advertiseTriggerCount;
    unsigned long long  _advertiserCount;
    BOOL  _advertisingStartCalled;
    struct { 
        unsigned char bytes[6]; 
    }  _bleAddress48;
    CUSystemMonitor * _bleAddressMonitor;
    BOOL  _bleAddressOverride;
    BOOL  _bleAddressValid;
    CBCentralManager * _centralManager;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _lingerTimer;
    CBPeripheralManager * _peripheralManager;
    NSMutableSet * _providers;
    BOOL  _scannerStartCalled;
    NSMutableSet * _seekers;
    NSMutableSet * _sessions;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned int  _updateIDLast;
    BOOL  _updatePending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedTDSAgent;

- (void).cxx_destruct;
- (void)_advertiserEnsureStarted;
- (void)_advertiserEnsureStopped;
- (void)_bleAddressChanged;
- (void)_bleAddressMonitorEnsureStarted;
- (void)_bleAddressMonitorEnsureStopped;
- (void)_cancelLingerTimer;
- (void)_processChanges;
- (void)_scannerEnsureStarted;
- (void)_scannerEnsureStopped;
- (void)_scheduleUpdate;
- (void)_startLingerTimer;
- (void)_update;
- (void)addProvider:(id)arg1;
- (void)addSeeker:(id)arg1;
- (void)addSession:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)init;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)removeSeeker:(id)arg1;
- (void)removeSession:(id)arg1;

@end
