/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUSleepWakeMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    struct __IOPMConnection { } * _powerCnx;
    unsigned int  _sleepWakeFlags;
    id  _sleepWakeHandler;
    int  _sleepWakeState;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id sleepWakeHandler;

- (void).cxx_destruct;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_invalidate;
- (void)_invalidated;
- (void)_sleepWakeHandler:(unsigned int)arg1 cnx:(const struct __IOPMConnection { }*)arg2 token:(unsigned int)arg3;
- (void)activateWithCompletion:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSleepWakeHandler:(id)arg1;
- (id)sleepWakeHandler;

@end