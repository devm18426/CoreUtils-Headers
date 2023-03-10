/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUMobileDevice : NSObject <NSCopying> {
    BOOL  _connected;
    NSUUID * _identifier;
    NSString * _internalModel;
    struct _AMDevice { } * _mdDevice;
    struct _AMDServiceConnection { } * _mdNotificationService;
    struct _AMDevice { } * _mdPlaceholderDevice;
    BOOL  _mdStartedListener;
    BOOL  _mdStartedService;
    NSString * _name;
    BOOL  _paired;
    BOOL  _placeholder;
    NSString * _udid;
    NSString * _wifiAddress;
}

@property (nonatomic) BOOL connected;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *internalModel;
@property (nonatomic) struct _AMDevice { }*mdDevice;
@property (nonatomic) struct _AMDServiceConnection { }*mdNotificationService;
@property (nonatomic) struct _AMDevice { }*mdPlaceholderDevice;
@property (nonatomic) BOOL mdStartedListener;
@property (nonatomic) BOOL mdStartedService;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL paired;
@property (nonatomic) BOOL placeholder;
@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *wifiAddress;

- (void).cxx_destruct;
- (BOOL)connected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)internalModel;
- (struct _AMDevice { }*)mdDevice;
- (struct _AMDServiceConnection { }*)mdNotificationService;
- (struct _AMDevice { }*)mdPlaceholderDevice;
- (BOOL)mdStartedListener;
- (BOOL)mdStartedService;
- (id)name;
- (BOOL)paired;
- (BOOL)placeholder;
- (BOOL)removeAMDevice:(struct _AMDevice { }*)arg1 changes:(unsigned int*)arg2;
- (void)setConnected:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalModel:(id)arg1;
- (void)setMdDevice:(struct _AMDevice { }*)arg1;
- (void)setMdNotificationService:(struct _AMDServiceConnection { }*)arg1;
- (void)setMdPlaceholderDevice:(struct _AMDevice { }*)arg1;
- (void)setMdStartedListener:(BOOL)arg1;
- (void)setMdStartedService:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(BOOL)arg1;
- (void)setPlaceholder:(BOOL)arg1;
- (void)setUdid:(id)arg1;
- (void)setWifiAddress:(id)arg1;
- (id)udid;
- (unsigned int)updateWithAMDevice:(struct _AMDevice { }*)arg1 connect:(BOOL)arg2 paired:(int)arg3;
- (id)wifiAddress;

@end
