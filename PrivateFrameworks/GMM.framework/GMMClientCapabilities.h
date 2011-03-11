/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMClientCapabilities : PBCodable  {
    int _maxImageWidth;
    BOOL _hasMaxImageWidth;
    int _maxImageHeight;
    BOOL _hasMaxImageHeight;
    int _availableImageMemory;
    BOOL _hasAvailableImageMemory;
    NSMutableArray *_preferredImageFormats;
    BOOL _htmlBodyOnly;
    BOOL _hasHtmlBodyOnly;
    BOOL _embedImages;
    BOOL _hasEmbedImages;
}

@property(readonly) int preferredImageFormatsCount;
@property(readonly) BOOL hasEmbedImages;
@property BOOL embedImages;
@property(readonly) BOOL hasHtmlBodyOnly;
@property BOOL htmlBodyOnly;
@property(retain) NSMutableArray * preferredImageFormats;
@property(readonly) BOOL hasAvailableImageMemory;
@property int availableImageMemory;
@property(readonly) BOOL hasMaxImageHeight;
@property int maxImageHeight;
@property(readonly) BOOL hasMaxImageWidth;
@property int maxImageWidth;

+ (id)standardCapabilities;
+ (id)searchCapabilities;

- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)preferredImageFormats;
- (BOOL)hasHtmlBodyOnly;
- (BOOL)hasEmbedImages;
- (int)preferredImageFormatsCount;
- (void)setAvailableImageMemory:(int)arg1;
- (void)setPreferredImageFormat:(int)arg1 atIndex:(unsigned int)arg2;
- (int)preferredImageFormatAtIndex:(unsigned int)arg1;
- (BOOL)htmlBodyOnly;
- (void)setPreferredImageFormats:(id)arg1;
- (BOOL)hasAvailableImageMemory;
- (BOOL)hasMaxImageHeight;
- (BOOL)hasMaxImageWidth;
- (int)maxImageWidth;
- (BOOL)embedImages;
- (int)availableImageMemory;
- (int)maxImageHeight;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setMaxImageWidth:(int)arg1;
- (void)setMaxImageHeight:(int)arg1;
- (void)addPreferredImageFormat:(int)arg1;
- (void)setEmbedImages:(BOOL)arg1;
- (void)setHtmlBodyOnly:(BOOL)arg1;

@end