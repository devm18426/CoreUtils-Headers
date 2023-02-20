/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUNetInterfaceMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    id  _flagsChangedHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateDone;
    id  _invalidationHandler;
    NSString * _label;
    id  _primaryIPChangedHandler;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv4Addr;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv6Addr;
    id  _primaryNetworkChangedHandler;
    NSString * _primaryNetworkSignature;
    struct __SCDynamicStore { } * _scStore;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) id flagsChangedHandler;
@property (nonatomic, copy) id invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) id primaryIPChangedHandler;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } primaryIPv4Addr;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } primaryIPv6Addr;
@property (nonatomic, copy) id primaryNetworkChangedHandler;
@property (nonatomic, readonly, copy) NSString *primaryNetworkSignature;

- (void).cxx_destruct;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_invalidate;
- (void)_invalidated;
- (void)_networkInterfacesChanged:(BOOL)arg1;
- (void)_primaryIPChanged:(BOOL)arg1;
- (void)activateWithCompletion:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)flagsChangedHandler;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (id)label;
- (id)primaryIPChangedHandler;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })primaryIPv4Addr;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })primaryIPv6Addr;
- (id)primaryNetworkChangedHandler;
- (id)primaryNetworkSignature;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlagsChangedHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPrimaryIPChangedHandler:(id)arg1;
- (void)setPrimaryNetworkChangedHandler:(id)arg1;

@end
