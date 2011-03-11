/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage;

@interface SUArrayCellConfiguration : SUCellConfiguration  {
    unsigned int _numberOfStrings;
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
        } x2; } *_stringFrames;
    NSString **_strings;
    unsigned int _numberOfImages;
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
        } x2; } *_imageFrames;
    UIImage **_images;
    UIImage **_selectedImages;
}


- (void)reloadData;
- (void)dealloc;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (id)_accessibilityStringsArrayPointer;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)numberOfLabels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfImages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;

@end