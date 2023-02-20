/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding> {
    BOOL  _activateCalled;
    int  _dataLinkType;
    BOOL  _directedOnly;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _endpointFoundHandler;
    id  _endpointLostHandler;
    NSMutableSet * _endpoints;
    id  _interruptionHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    BOOL  _passive;
    NSString * _serviceType;
    unsigned long long  _tdsHashProvide;
    unsigned long long  _tdsHashSeek;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
    NSString * _xpcServiceName;
}

@property (nonatomic) int dataLinkType;
@property (nonatomic) BOOL directedOnly;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id endpointFoundHandler;
@property (nonatomic, copy) id endpointLostHandler;
@property (nonatomic, retain) NSMutableSet *endpoints;
@property (nonatomic, copy) id interruptionHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) BOOL passive;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic) unsigned long long tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek;
@property (nonatomic, copy) NSString *xpcServiceName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateDirectWithCompletion:(id)arg1;
- (void)_activateXPCWithCompletion:(id)arg1 reactivate:(BOOL)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id)arg1;
- (int)dataLinkType;
- (void)dealloc;
- (BOOL)directedOnly;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointFoundHandler;
- (id)endpointLostHandler;
- (id)endpoints;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (BOOL)passive;
- (id)serviceType;
- (void)setDataLinkType:(int)arg1;
- (void)setDirectedOnly:(BOOL)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointFoundHandler:(id)arg1;
- (void)setEndpointLostHandler:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPassive:(BOOL)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTdsHashProvide:(unsigned long long)arg1;
- (void)setTdsHashSeek:(unsigned long long)arg1;
- (void)setXpcServiceName:(id)arg1;
- (unsigned long long)tdsHashProvide;
- (unsigned long long)tdsHashSeek;
- (void)updateEndpointsForDevices:(id)arg1;
- (id)xpcServiceName;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;

@end