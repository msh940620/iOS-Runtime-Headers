/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateScrollViewController, <UIKeyboardCandidateListDelegate>, UIKeyboardCandidateInlinePadBottomShadowView;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    NSArray *_candidates;
    BOOL _expanded;
    } _inlineRect;
    NSString *_inlineText;
    float _maxX;
    int _position;
    } _previousCollapsedFrame;
    BOOL _reducedWidth;
    UIKeyboardCandidateScrollViewController *_scrollViewController;
    UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;
    UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;
}

@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) NSArray * candidates;
@property(readonly) struct CGSize { float x1; float x2; } collapsedSize;
@property BOOL expanded;
@property(readonly) struct CGSize { float x1; float x2; } expandedSize;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inlineRect;
@property(copy) NSString * inlineText;
@property float maxX;
@property int position;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previousCollapsedFrame;
@property BOOL reducedWidth;
@property(readonly) UIKeyboardCandidateScrollViewController * scrollViewController;
@property(retain) UIKeyboardCandidateInlinePadBottomShadowView * shadowView;
@property(readonly) UIKeyboardCandidateSortSelectionBar * sortSelectionBar;

- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maxX:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidates;
- (void)collapse;
- (struct CGSize { float x1; float x2; })collapsedSize;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (void)expand;
- (BOOL)expanded;
- (struct CGSize { float x1; float x2; })expandedSize;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inlineRect;
- (id)inlineText;
- (BOOL)isAcceptableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (void)layout;
- (void)layoutShadow;
- (float)maxX;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (int)position;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousCollapsedFrame;
- (BOOL)reducedWidth;
- (id)scrollViewController;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCandidates:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInlineText:(id)arg1;
- (void)setMaxX:(float)arg1;
- (void)setPosition:(int)arg1;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setReducedWidth:(BOOL)arg1;
- (void)setShadowView:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (id)shadowView;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (id)sortSelectionBar;
- (void)sortSelectionBarAction;

@end