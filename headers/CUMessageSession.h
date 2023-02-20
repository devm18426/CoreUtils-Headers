/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUMessageSession : NSObject <CUMessageSessionXPCClientInterface, NSSecureCoding> {
    BOOL  _activateCalled;
    id  _activateHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidateHandler;
    id  _invalidationHandler;
    NSString * _label;
    NSXPCListenerEndpoint * _listenerEndpoint;
    id  _registerRequestHandler;
    NSMutableDictionary * _requestMap;
    id  _sendRequestHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) id activateHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id invalidateHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) id registerRequestHandler;
@property (nonatomic, copy) id sendRequestHandler;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(id)arg3;
- (void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id)arg4;
- (void)activate;
- (id)activateHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1;
- (void)invalidate;
- (id)invalidateHandler;
- (id)invalidationHandler;
- (id)label;
- (id)listenerEndpoint;
- (id)registerRequestHandler;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id)arg3;
- (void)remoteRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id)arg4;
- (id)sendRequestHandler;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id)arg4;
- (void)setActivateHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidateHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setRegisterRequestHandler:(id)arg1;
- (void)setSendRequestHandler:(id)arg1;

@end
