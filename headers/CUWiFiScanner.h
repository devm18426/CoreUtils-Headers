/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUWiFiScanner : NSObject {
    BOOL  _activateCalled;
    unsigned int  _changeFlags;
    id  _deviceChangedHandler;
    id  _deviceFoundHandler;
    id  _deviceLostHandler;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _errorHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    unsigned int  _scanFlags;
    NSObject<OS_dispatch_source> * _scanTimer;
    BOOL  _scanning;
    NSString * _ssid;
    BOOL  _suspended;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic, copy) id deviceChangedHandler;
@property (nonatomic, copy) id deviceFoundHandler;
@property (nonatomic, copy) id deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id errorHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int scanFlags;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_invalidated;
- (void)_scanWiFiFinished:(id)arg1 status:(int)arg2;
- (void)_scanWiFiProcessResult:(id)arg1;
- (void)_scanWiFiStart;
- (void)activate;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)deviceChangedHandler;
- (id)deviceFoundHandler;
- (id)deviceLostHandler;
- (id)dispatchQueue;
- (id)errorHandler;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (void)resume;
- (unsigned int)scanFlags;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id)arg1;
- (void)setDeviceFoundHandler:(id)arg1;
- (void)setDeviceLostHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setScanFlags:(unsigned int)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;
- (void)suspend;

@end