/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLWStackedImageCache;

@interface PLWStackedImageCacheCreator : NSObject <PLStackViewDataSource> {
    PLWStackedImageCache *_stackedImageCache;
}

- (struct NSObject { Class x1; }*)_albumForStack:(id)arg1;
- (void)createStackedImageForAlbum:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)stackView:(id)arg1 collapsedIndexesForCount:(unsigned int)arg2;
- (id)stackView:(id)arg1 itemViewAtIndex:(int)arg2 loadImagesSynchronously:(BOOL)arg3;
- (void)stackView:(id)arg1 saveStackedImage:(id)arg2 options:(id)arg3;
- (id)stackView:(id)arg1 textBadgeStringForImageAtIndex:(int)arg2;
- (int)stackViewItemCount:(id)arg1;
- (int)stackViewPosterItemIndex:(id)arg1;
- (id)stackedImageForStackView:(id)arg1 options:(id*)arg2;

@end
