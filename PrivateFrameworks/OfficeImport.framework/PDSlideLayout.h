/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild  {
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}


- (void)dealloc;
- (id)slideMaster;
- (void)setSlideLayoutType:(int)arg1;
- (id)initWithSlideMaster:(id)arg1;
- (int)slideLayoutType;
- (void)setSlideMaster:(id)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)defaultTheme;

@end