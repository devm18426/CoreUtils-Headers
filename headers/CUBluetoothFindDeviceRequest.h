/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUBluetoothFindDeviceRequest : NSObject {
    struct { 
        unsigned char bytes[6]; 
    }  _address;
    id  _completion;
}

@property (nonatomic) struct { unsigned char x1[6]; } address;
@property (nonatomic, copy) id completion;

- (void).cxx_destruct;
- (struct { unsigned char x1[6]; })address;
- (id)completion;
- (void)setAddress:(struct { unsigned char x1[6]; })arg1;
- (void)setCompletion:(id)arg1;

@end