/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMAnnotationProperties : PBCodable {
    NSInteger _annotationHeightFractionE6;
    BOOL _hasAnnotationHeightFractionE6;
    BOOL _hasHorizonHeightFractionE6;
    NSInteger _horizonHeightFractionE6;
    NSMutableArray *_links;
}

@property(retain) NSMutableArray *links;
@property NSInteger annotationHeightFractionE6;
@property(readonly) BOOL hasAnnotationHeightFractionE6;
@property(readonly) BOOL hasHorizonHeightFractionE6;
@property NSInteger horizonHeightFractionE6;
@property(readonly) NSInteger linksCount;

- (void)addLink:(id)arg1;
- (NSInteger)annotationHeightFractionE6;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAnnotationHeightFractionE6;
- (BOOL)hasHorizonHeightFractionE6;
- (NSInteger)horizonHeightFractionE6;
- (id)init;
- (id)linkAtIndex:(NSUInteger)arg1;
- (id)links;
- (NSInteger)linksCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAnnotationHeightFractionE6:(NSInteger)arg1;
- (void)setHorizonHeightFractionE6:(NSInteger)arg1;
- (void)setLink:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setLinks:(id)arg1;
- (void)writeTo:(id)arg1;

@end