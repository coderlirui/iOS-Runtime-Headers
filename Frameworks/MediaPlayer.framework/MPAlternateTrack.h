/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAlternateTrack : NSObject  {
    int _trackID;
    NSString *_languageCode;
    NSString *_name;
}

+ (id)copyOffTrack;
+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;

- (int)compare:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)humanReadableLanguage;
- (int)trackID;
- (id)languageCode;

@end