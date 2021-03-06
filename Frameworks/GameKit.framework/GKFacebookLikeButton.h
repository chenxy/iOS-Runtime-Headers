/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKOpenGraphNode, GKUITheme, NSURL, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface GKFacebookLikeButton : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UIButton *_button;
    } _cachedButtonSize;
    BOOL _connectionError;
    UILabel *_labelView;
    BOOL _liked;
    int _loading;
    UIImageView *_logoImageView;
    unsigned int _numberOfFriendLikes;
    unsigned int _numberOfLikes;
    int _numberOfLines;
    GKOpenGraphNode *_openGraphNode;
    float _paddingBetweenButtonAndLabel;
    UIActivityIndicatorView *_spinner;
    GKUITheme *_theme;
}

@property(retain) UIButton * button;
@property struct CGSize { float x1; float x2; } cachedButtonSize;
@property BOOL connectionError;
@property(retain) UILabel * labelView;
@property BOOL liked;
@property int loading;
@property(retain) UIImageView * logoImageView;
@property unsigned int numberOfFriendLikes;
@property unsigned int numberOfLikes;
@property int numberOfLines;
@property(retain) GKOpenGraphNode * openGraphNode;
@property(retain) NSURL * openGraphURL;
@property float paddingBetweenButtonAndLabel;
@property(retain) UIActivityIndicatorView * spinner;
@property(retain) GKUITheme * theme;

- (id)backgroundImageNamed:(id)arg1;
- (void)beginLoading;
- (id)button;
- (void)buttonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })buttonRect;
- (struct CGSize { float x1; float x2; })buttonSizeForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })cachedButtonSize;
- (BOOL)connectionError;
- (void)dealloc;
- (void)endLoadingWithError:(id)arg1;
- (void)fetchLikeStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isLoading;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelRect;
- (id)labelView;
- (void)layoutSubviews;
- (id)letterpressStyleForState:(unsigned int)arg1;
- (void)likeRequestCompletedWithError:(id)arg1;
- (BOOL)liked;
- (int)loading;
- (id)logoImageView;
- (unsigned int)numberOfFriendLikes;
- (unsigned int)numberOfLikes;
- (int)numberOfLines;
- (id)openGraphNode;
- (id)openGraphURL;
- (float)paddingBetweenButtonAndLabel;
- (void)sendDislikeRequest;
- (void)sendLikeRequest;
- (void)setButton:(id)arg1;
- (void)setCachedButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setConnectionError:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelView:(id)arg1;
- (void)setLiked:(BOOL)arg1;
- (void)setLoading:(int)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setNumberOfFriendLikes:(unsigned int)arg1;
- (void)setNumberOfLikes:(unsigned int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setOpenGraphNode:(id)arg1;
- (void)setOpenGraphURL:(id)arg1;
- (void)setPaddingBetweenButtonAndLabel:(float)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTheme:(id)arg1;
- (BOOL)shouldShowLogo;
- (id)spinner;
- (id)theme;
- (id)titleColorForState:(unsigned int)arg1;
- (void)updateLabelText;

@end
