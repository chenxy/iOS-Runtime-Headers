/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
    ML3MusicLibrary *_library;
    long long _persistentID;
}

@property(readonly) BOOL existsInLibrary;
@property ML3MusicLibrary * library;
@property(readonly) long long persistentID;

+ (BOOL)_deleteRowForPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5;
+ (id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2;
+ (id)allProperties;
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)countedPropertyForMPMediaEntityProperty:(id)arg1;
+ (id)countingQueryForMPMediaEntityProperty:(id)arg1 library:(id)arg2 identifier:(long long)arg3;
+ (id)defaultOrderingProperties;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (id)directCollectionQueryWithAggregateQuery:(id)arg1 predicate:(id)arg2 usingSections:(BOOL)arg3;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(id)arg3;
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long*)arg4 count:(unsigned int)arg5 usingBlock:(id)arg6;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (BOOL)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4;
+ (id)indexableSQLForProperties:(id)arg1;
+ (BOOL)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4;
+ (BOOL)insertionChangesLibraryContents;
+ (id)joinClausesForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (id)newSelectSQLForProperties:(const id*)arg1 count:(unsigned int)arg2 predicate:(id)arg3;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;
+ (id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2;
+ (id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2;
+ (id)predisambiguatedProperties;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(BOOL)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(BOOL)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2;
+ (id)replacerWithProperties:(id)arg1 databaseConnection:(id)arg2;
+ (int)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)unsettableProperties;

- (void).cxx_destruct;
- (id)copyInLibrary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)deleteFromLibrary;
- (id)description;
- (void)didChangeValueForProperties:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)existsInLibrary;
- (void)getValues:(id*)arg1 forProperties:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)hash;
- (void)incrementRevision;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (BOOL)matchesPredicate:(id)arg1;
- (long long)persistentID;
- (void)setLibrary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValues:(const id*)arg1 forProperties:(const id*)arg2 count:(unsigned int)arg3;
- (BOOL)setValuesForPropertiesWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
