/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUSystemMonitor : NSObject {
    BOOL  _activateCalled;
    BOOL  _activateCompleted;
    id  _bluetoothAddressChangedHandler;
    id  _callChangedHandler;
    id  _clamshellModeChangedHandler;
    id  _consoleUserChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id  _familyUpdatedHandler;
    id  _firstUnlockHandler;
    BOOL  _invalidateCalled;
    BOOL  _invalidateCalled2;
    id  _invalidationHandler;
    id  _manateeChangedHandler;
    id  _meDeviceChangedHandler;
    id  _netFlagsChangedHandler;
    id  _netInterfacesChangedHandler;
    id  _powerUnlimitedChangedHandler;
    id  _primaryAppleIDChangedHandler;
    id  _primaryIPChangedHandler;
    id  _primaryNetworkChangedHandler;
    id  _regionChangedHandler;
    id  _rotatingIdentifierChangedHandler;
    id  _screenLockedChangedHandler;
    id  _screenOnChangedHandler;
    id  _screenSaverChangedHandler;
    id  _systemLockStateChangedHandler;
    id  _systemNameChangedHandler;
    id  _wifiStateChangedHandler;
}

@property (readonly) int activeCallCount;
@property (readonly) struct { unsigned char x1[6]; } bluetoothAddress48;
@property (copy) id bluetoothAddressChangedHandler;
@property (readonly, copy) NSData *bluetoothAddressData;
@property (copy) id callChangedHandler;
@property (readonly) unsigned int callFlags;
@property (readonly) BOOL clamshellMode;
@property (copy) id clamshellModeChangedHandler;
@property (readonly) int connectedCallCount;
@property (copy) id consoleUserChangedHandler;
@property (readonly) unsigned int consoleUserID;
@property (readonly, copy) NSString *consoleUserName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy) NSArray *familyMembers;
@property (copy) id familyUpdatedHandler;
@property (copy) id firstUnlockHandler;
@property (nonatomic, readonly) BOOL firstUnlocked;
@property (nonatomic, readonly) BOOL firstUnlockedSync;
@property (nonatomic, copy) id invalidationHandler;
@property (readonly) BOOL manateeAvailable;
@property (copy) id manateeChangedHandler;
@property (copy) id meDeviceChangedHandler;
@property (readonly, copy) NSString *meDeviceFMFDeviceID;
@property (readonly, copy) NSString *meDeviceIDSDeviceID;
@property (readonly) BOOL meDeviceIsMe;
@property (readonly, copy) NSString *meDeviceName;
@property (readonly) BOOL meDeviceValid;
@property (readonly) unsigned int netFlags;
@property (copy) id netFlagsChangedHandler;
@property (copy) id netInterfacesChangedHandler;
@property (readonly) BOOL powerUnlimited;
@property (copy) id powerUnlimitedChangedHandler;
@property (readonly, copy) NSString *primaryAppleID;
@property (copy) id primaryAppleIDChangedHandler;
@property (readonly) BOOL primaryAppleIDIsHSA2;
@property (copy) id primaryIPChangedHandler;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } primaryIPv4Addr;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } primaryIPv6Addr;
@property (copy) id primaryNetworkChangedHandler;
@property (nonatomic, readonly, copy) NSString *primaryNetworkSignature;
@property (copy) id regionChangedHandler;
@property (readonly, copy) NSString *regionISOCountryCode;
@property (readonly, copy) NSString *regionMobileCountryCode;
@property (readonly, copy) NSString *regionRoutineCountry;
@property (readonly, copy) NSString *regionRoutineState;
@property (readonly) struct { unsigned char x1[6]; } rotatingIdentifier48;
@property (copy) id rotatingIdentifierChangedHandler;
@property (readonly, copy) NSData *rotatingIdentifierData;
@property (readonly) BOOL screenLocked;
@property (copy) id screenLockedChangedHandler;
@property (readonly) BOOL screenLockedSync;
@property (readonly) BOOL screenOn;
@property (copy) id screenOnChangedHandler;
@property (readonly) BOOL screenSaverActive;
@property (copy) id screenSaverChangedHandler;
@property (nonatomic, readonly) int systemLockState;
@property (copy) id systemLockStateChangedHandler;
@property (nonatomic, readonly) int systemLockStateSync;
@property (readonly, copy) NSString *systemName;
@property (copy) id systemNameChangedHandler;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (copy) id wifiStateChangedHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id)arg1;
- (int)activeCallCount;
- (struct { unsigned char x1[6]; })bluetoothAddress48;
- (id)bluetoothAddressChangedHandler;
- (id)bluetoothAddressData;
- (id)callChangedHandler;
- (unsigned int)callFlags;
- (BOOL)clamshellMode;
- (id)clamshellModeChangedHandler;
- (int)connectedCallCount;
- (id)consoleUserChangedHandler;
- (unsigned int)consoleUserID;
- (id)consoleUserName;
- (id)dispatchQueue;
- (id)familyMembers;
- (id)familyUpdatedHandler;
- (id)firstUnlockHandler;
- (BOOL)firstUnlocked;
- (BOOL)firstUnlockedSync;
- (id)init;
- (void)invalidate;
- (id)invalidationHandler;
- (BOOL)manateeAvailable;
- (id)manateeChangedHandler;
- (id)meDeviceChangedHandler;
- (id)meDeviceFMFDeviceID;
- (id)meDeviceIDSDeviceID;
- (BOOL)meDeviceIsMe;
- (id)meDeviceName;
- (BOOL)meDeviceValid;
- (unsigned int)netFlags;
- (id)netFlagsChangedHandler;
- (id)netInterfacesChangedHandler;
- (BOOL)powerUnlimited;
- (id)powerUnlimitedChangedHandler;
- (id)primaryAppleID;
- (id)primaryAppleIDChangedHandler;
- (BOOL)primaryAppleIDIsHSA2;
- (id)primaryIPChangedHandler;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })primaryIPv4Addr;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })primaryIPv6Addr;
- (id)primaryNetworkChangedHandler;
- (id)primaryNetworkSignature;
- (id)regionChangedHandler;
- (id)regionISOCountryCode;
- (id)regionMobileCountryCode;
- (id)regionRoutineCountry;
- (id)regionRoutineState;
- (struct { unsigned char x1[6]; })rotatingIdentifier48;
- (id)rotatingIdentifierChangedHandler;
- (id)rotatingIdentifierData;
- (BOOL)screenLocked;
- (id)screenLockedChangedHandler;
- (BOOL)screenLockedSync;
- (BOOL)screenOn;
- (id)screenOnChangedHandler;
- (BOOL)screenSaverActive;
- (id)screenSaverChangedHandler;
- (void)setBluetoothAddressChangedHandler:(id)arg1;
- (void)setCallChangedHandler:(id)arg1;
- (void)setClamshellModeChangedHandler:(id)arg1;
- (void)setConsoleUserChangedHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFamilyUpdatedHandler:(id)arg1;
- (void)setFirstUnlockHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setManateeChangedHandler:(id)arg1;
- (void)setMeDeviceChangedHandler:(id)arg1;
- (void)setNetFlagsChangedHandler:(id)arg1;
- (void)setNetInterfacesChangedHandler:(id)arg1;
- (void)setPowerUnlimitedChangedHandler:(id)arg1;
- (void)setPrimaryAppleIDChangedHandler:(id)arg1;
- (void)setPrimaryIPChangedHandler:(id)arg1;
- (void)setPrimaryNetworkChangedHandler:(id)arg1;
- (void)setRegionChangedHandler:(id)arg1;
- (void)setRotatingIdentifierChangedHandler:(id)arg1;
- (void)setScreenLockedChangedHandler:(id)arg1;
- (void)setScreenOnChangedHandler:(id)arg1;
- (void)setScreenSaverChangedHandler:(id)arg1;
- (void)setSystemLockStateChangedHandler:(id)arg1;
- (void)setSystemNameChangedHandler:(id)arg1;
- (void)setWifiStateChangedHandler:(id)arg1;
- (int)systemLockState;
- (id)systemLockStateChangedHandler;
- (int)systemLockStateSync;
- (id)systemName;
- (id)systemNameChangedHandler;
- (unsigned int)wifiFlags;
- (int)wifiState;
- (id)wifiStateChangedHandler;

@end