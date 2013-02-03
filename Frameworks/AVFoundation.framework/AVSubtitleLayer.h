/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVSubtitleLayerInternal, AVPlayer, CADisplay;

@interface AVSubtitleLayer : CALayer {
    AVSubtitleLayerInternal *_subtitleLayer;
}

@property(getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;
@property(retain) AVPlayer * player;
@property(readonly) CADisplay * subtitleLayerDisplay;

+ (id)subtitleLayerWithPlayer:(id)arg1;

- (void)_invalidateBoundaryTimeObserver;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (id)subtitleLayerDisplay;
- (void)subtitlesDidChange:(id)arg1;

@end