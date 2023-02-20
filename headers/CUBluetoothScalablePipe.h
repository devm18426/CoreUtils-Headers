/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUBluetoothScalablePipe : NSObject <CUReadWriteRequestable> {
    struct channel { } * _btChannel;
    BOOL  _btEndpointRegistered;
    BOOL  _btEndpointRegistering;
    int  _btPeerHostState;
    BOOL  _btPeerKVORegistered;
    CBScalablePipe * _btPipe;
    CBScalablePipeManager * _btPipeManager;
    char * _btReadLeftoverBuf;
    char * _btReadLeftoverEnd;
    unsigned long long  _btReadLeftoverMaxLen;
    char * _btReadLeftoverPtr;
    struct channel_ring_desc { } * _btReadRing;
    struct channel_ring_desc { } * _btWriteRing;
    int  _channelFD;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    int  _peerHostState;
    id  _peerHostStateChangedHandler;
    NSUUID * _peerIdentifier;
    int  _priority;
    CUReadRequest * _readRequestCurrent;
    NSMutableArray * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    BOOL  _readSuspended;
    int  _state;
    id  _stateChangedHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWriteRequest * _writeRequestCurrent;
    NSMutableArray * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    BOOL  _writeSuspended;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) int peerHostState;
@property (nonatomic, copy) id peerHostStateChangedHandler;
@property (nonatomic, copy) NSUUID *peerIdentifier;
@property (nonatomic) int priority;
@property (nonatomic, readonly) int state;
@property (nonatomic, copy) id stateChangedHandler;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_prepareReadRequest:(id)arg1;
- (BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (void)_processReads;
- (void)_processWrites;
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4;
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_writeIOArray:(struct iovec {}**)arg1 ioCount:(int*)arg2;
- (void)activateWithCompletion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (int)peerHostState;
- (id)peerHostStateChangedHandler;
- (id)peerIdentifier;
- (int)priority;
- (void)readWithRequest:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerHostStateChangedHandler:(id)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setStateChangedHandler:(id)arg1;
- (int)state;
- (id)stateChangedHandler;
- (void)writeWithRequest:(id)arg1;

@end
