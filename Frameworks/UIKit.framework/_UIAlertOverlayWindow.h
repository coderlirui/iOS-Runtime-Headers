/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertOverlayWindow : UIWindow  {
    BOOL _shouldDeferDisplay;
}

@property BOOL shouldDeferDisplay;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (float)_contentScaleFactor;
- (void)setShouldDeferDisplay:(BOOL)arg1;
- (BOOL)shouldDeferDisplay;
- (BOOL)_shouldUseKeyWindowStack;
- (void)setContentScaleFactor:(float)arg1;
- (void)_handleMouseUp:(struct __GSEvent { }*)arg1;
- (id)representation;
- (BOOL)isInternalWindow;

@end