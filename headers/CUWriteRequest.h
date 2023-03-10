/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUWriteRequest : NSObject {
    struct iovec { void *x1; unsigned long long x2; } * _bytesIOArray;
    unsigned long long  _bytesIOCount;
    unsigned long long  _bytesIOMaxCount;
    id  _completion;
    NSArray * _dataArray;
    BOOL  _endOfData;
    NSError * _error;
    BOOL  _hasMessageUUID;
    int  _ion;
    struct iovec { void *x1; unsigned long long x2; } * _iop;
    struct iovec { 
        void *iov_base; 
        unsigned long long iov_len; 
    }  _iov;
    unsigned char  _messageUUID;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) struct iovec { void *x1; unsigned long long x2; }*bytesIOArray;
@property (nonatomic) unsigned long long bytesIOCount;
@property (nonatomic, readonly) unsigned long long bytesIOMaxCount;
@property (nonatomic, copy) id completion;
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic) BOOL endOfData;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) BOOL hasMessageUUID;
@property (nonatomic, readonly) char *messageUUID;

- (void).cxx_destruct;
- (struct iovec { void *x1; unsigned long long x2; }*)bytesIOArray;
- (unsigned long long)bytesIOCount;
- (unsigned long long)bytesIOMaxCount;
- (id)completion;
- (id)dataArray;
- (BOOL)endOfData;
- (id)error;
- (BOOL)hasMessageUUID;
- (id)init;
- (char *)messageUUID;
- (void)setBytesIOCount:(unsigned long long)arg1;
- (void)setCompletion:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setEndOfData:(BOOL)arg1;
- (void)setHasMessageUUID:(BOOL)arg1;

@end
