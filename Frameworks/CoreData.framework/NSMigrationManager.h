/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMigrationContext, NSError, NSMappingModel, NSDictionary, NSManagedObjectContext, NSManagedObjectModel;

@interface NSMigrationManager : NSObject  {
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags { 
        unsigned int _migrationWasCancelled : 1; 
        unsigned int _usesStoreSpecificMigrationManager : 1; 
        unsigned int _reservedMigrationManager : 30; 
    } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

+ (BOOL)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)setUserInfo:(id)arg1;
- (void)reset;
- (id)userInfo;
- (void)dealloc;
- (BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (id)destinationContext;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (void)cancelMigrationWithError:(id)arg1;
- (void)setUsesStoreSpecificMigrationManager:(BOOL)arg1;
- (BOOL)usesStoreSpecificMigrationManager;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(BOOL)arg3;
- (id)_mappingNamed:(id)arg1;
- (id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2;
- (BOOL)_doFirstPassForMapping:(id)arg1 error:(id*)arg2;
- (BOOL)_doSecondPassForMapping:(id)arg1 error:(id*)arg2;
- (BOOL)_doThirdPassForMapping:(id)arg1 error:(id*)arg2;
- (void)_doCleanupOnFailure:(id)arg1;
- (BOOL)_validateAllObjectsAfterMigration:(id*)arg1;
- (id)mappingModel;
- (id)destinationModel;
- (id)sourceModel;
- (id)currentPropertyMapping;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (id)currentEntityMapping;
- (float)migrationProgress;
- (id)_migrationContext;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)sourceContext;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;

@end