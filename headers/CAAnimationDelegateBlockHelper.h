/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate> {
    id  _animationDidStartBlock;
    id  _animationDidStopBlock;
}

@property (nonatomic, copy) id animationDidStartBlock;
@property (nonatomic, copy) id animationDidStopBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (id)animationDidStartBlock;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationDidStopBlock;
- (void)dealloc;
- (void)setAnimationDidStartBlock:(id)arg1;
- (void)setAnimationDidStopBlock:(id)arg1;

@end
