/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspectorLoader : AVAssetInspectorLoader  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    struct OpaqueFigFormatReaderLoader { } *_formatReaderLoader;
}

@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;


- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)_addFigObjectNotifications;
- (void)_removeFigObjectNotifications;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (id)assetInspector;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)cancelLoading;

@end