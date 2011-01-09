/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPCluster, CPZone, NSMutableArray;



@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    NSUInteger countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    struct { float x1; float x2; float x3; float x4; NSInteger x5; NSInteger *x6; struct CPPDFStyle {} *x7; } *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    float medianFontSizeOfFirstCharacter;
    float medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (void)reclusterBetweenGuides:(id)arg1;

- (id)initWithContentZone:(id)arg1;
- (void)getWordEdges;
- (void)addStripTo:(id)arg1 bottom:(float)arg2 left:(float)arg3 top:(float)arg4 right:(float)arg5;
- (void)setAlignForWordWithExtent:(struct { float x1; float x2; float x3; float x4; NSInteger x5; NSInteger *x6; struct CPPDFStyle {} *x7; }*)arg1 stripArray:(id)arg2 stripMax:(float)arg3;
- (void)subdivideStripInto:(id)arg1 from:(float)arg2 to:(float)arg3 borderedBy:(struct { float x1; float x2; float x3; float x4; NSInteger x5; NSInteger *x6; struct CPPDFStyle {} *x7; }*)arg4 ofCount:(NSUInteger)arg5 crossedBy:(struct { float x1; float x2; float x3; float x4; NSInteger x5; NSInteger *x6; struct CPPDFStyle {} *x7; }*)arg6 ofCount:(NSUInteger)arg7;
- (void)subdivideGutterFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (void)subdivideLeftGuideAt:(NSUInteger)arg1;
- (void)subdivideRightGuideAt:(NSUInteger)arg1;
- (void)findWordEdgeClusters;
- (void)findGutters;
- (void)findGuides;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLines;
- (void)markTextLines;
- (BOOL)hasGutters;
- (BOOL)hasLeftGuides;
- (BOOL)hasRightGuides;
- (float)medianFontSizeOfLastCharacter;
- (float)medianFontSizeOfFirstCharacter;
- (id)gutters;
- (id)rightGuides;
- (id)leftGuides;
- (void)dispose;
- (void)finalize;
- (void)dealloc;

@end