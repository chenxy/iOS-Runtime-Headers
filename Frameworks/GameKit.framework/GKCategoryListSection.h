/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameRecord, GKLeaderboardCategory, GKPlayer, NSOrderedSet;

@interface GKCategoryListSection : GKTableSection {
    GKLeaderboardCategory *_aggregateCategory;
    GKGameRecord *_gameDetails;
    BOOL _hasAggregate;
    GKPlayer *_player;
    BOOL _shouldShowTitle;
    BOOL _showDisclosureIndicator;
}

@property(retain) GKLeaderboardCategory * aggregateCategory;
@property(retain) NSOrderedSet * categories;
@property(retain) GKGameRecord * gameDetails;
@property BOOL hasAggregate;
@property(retain) GKPlayer * player;
@property BOOL shouldShowTitle;
@property BOOL showDisclosureIndicator;

- (id)aggregateCategory;
- (id)categories;
- (void)configureCellContents:(id)arg1 category:(id)arg2;
- (void)dealloc;
- (id)gameDetails;
- (BOOL)hasAggregate;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)init;
- (id)player;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)setAggregateCategory:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setGameDetails:(id)arg1;
- (void)setHasAggregate:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setShouldShowTitle:(BOOL)arg1;
- (void)setShowDisclosureIndicator:(BOOL)arg1;
- (BOOL)shouldShowTitle;
- (BOOL)showDisclosureIndicator;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)titleForHeaderInTableView:(id)arg1;
- (id)tokenImageCategory:(id)arg1 withCompletionHandler:(id)arg2;

@end
