/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CULiveAudioServerSession : NSObject {
    AVAudioConverter * _audioConverter;
    AVAudioEngine * _audioEngine;
    AVAudioFormat * _audioInputFormat;
    AVAudioFormat * _audioOutputFormat;
    AVAudioPlayerNode * _audioPlayerNode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _playbackStarted;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (BOOL)activateAndReturnError:(id*)arg1;
- (id)dispatchQueue;
- (void)handleDataEvent:(id)arg1;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;

@end
