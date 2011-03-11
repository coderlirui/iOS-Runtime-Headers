/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIImageView, NSString;

@interface PreferencesTableCell : UITableViewCell  {
    id _value;
    UIImageView *_checkedImageView;
    BOOL _checked;
    BOOL _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    BOOL _cellEnabled;
}

+ (void)_initializeSafeCategory;

- (void)setCellEnabled:(BOOL)arg1;
- (id)valueLabel;
- (BOOL)canReload;
- (void)setIcon:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)titleLabel;
- (id)value;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void)setChecked:(BOOL)arg1;
- (id)target;
- (void)setValue:(id)arg1;
- (id)iconImageView;
- (void)setAlignment:(int)arg1;
- (void)layoutSubviews;
- (id)title;
- (void)dealloc;
- (void)setTarget:(id)arg1;
- (BOOL)isChecked;
- (void)setTitle:(id)arg1;
- (void)setShouldHideTitle:(BOOL)arg1;
- (BOOL)cellEnabled;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1;
- (id)accessibilityTableViewCellText;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end