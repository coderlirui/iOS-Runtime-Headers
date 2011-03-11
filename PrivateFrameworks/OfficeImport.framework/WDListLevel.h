/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDOfficeArt, NSMutableString, WDParagraphProperties, WDCharacterProperties;

@interface WDListLevel : NSObject  {
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    int mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    int mLegacySpace;
    int mLegacyIndent;
    int mJustification;
}


- (id)image;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)setLegal:(BOOL)arg1;
- (void)setLegacy:(BOOL)arg1;
- (id)paragraphProperties;
- (BOOL)startNumberOverridden;
- (BOOL)numberFormatOverridden;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (BOOL)legal;
- (BOOL)legalOverridden;
- (int)suffix;
- (BOOL)suffixOverridden;
- (BOOL)textOverridden;
- (BOOL)justificationOverridden;
- (id)initWithDocument:(id)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (void)setStartNumber:(long)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setSuffix:(int)arg1;
- (void)setLegacySpace:(long)arg1;
- (void)setLegacyIndent:(long)arg1;
- (void)setJustification:(int)arg1;
- (long)legacyIndent;
- (long)legacySpace;
- (BOOL)legacy;
- (id)characterProperties;
- (long)startNumber;
- (int)numberFormat;
- (int)justification;

@end