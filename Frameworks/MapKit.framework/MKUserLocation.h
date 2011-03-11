/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSString, MKUserLocationInternal;

@interface MKUserLocation : NSObject <MKAnnotation> {
    MKUserLocationInternal *_internal;
}

@property(getter=isUpdating,readonly) BOOL updating;
@property(readonly) CLLocation * location;
@property(retain) NSString * title;
@property(retain) NSString * subtitle;
@property(readonly) struct { double latitude; double longitude; } coordinate;


- (void)setUpdating:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)reset;
- (void)setTimestamp:(double)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (double)timestamp;
- (void)setLocation:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)init;
- (void)dealloc;
- (id)location;
- (void)setTitle:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)_updateCoordinate;
- (id)searchResult;
- (BOOL)isUpdating;
- (id)predictedLocation;
- (id)fixedLocation;
- (void)setFixedLocation:(id)arg1;
- (BOOL)isEqualToLocation:(id)arg1;
- (void)setHeading:(id)arg1;
- (id)shortDescription;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)heading;
- (struct { double x1; double x2; })coordinate;

@end