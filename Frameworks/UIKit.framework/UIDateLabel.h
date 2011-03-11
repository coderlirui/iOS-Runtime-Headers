/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDateLabel : UILabel  {
    double _date;
    int _dateKey;
    BOOL _boldForAllLocales;
}

@property BOOL boldForAllLocales;

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (void)setTimeInterval:(double)arg1;
- (void)_invalidateDateKey;
- (void)setFontWithoutInvalidation:(id)arg1;
- (void)_updateDateStrings;
- (id)timeDesignator;
- (void)setDate:(id)arg1;
- (double)timeInterval;
- (id)timeDesignatorFont;
- (id)_dateLabelCache;
- (BOOL)boldForAllLocales;
- (void)setBoldForAllLocales:(BOOL)arg1;
- (int)_dateKey;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)text;
- (void)sizeToFit;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end