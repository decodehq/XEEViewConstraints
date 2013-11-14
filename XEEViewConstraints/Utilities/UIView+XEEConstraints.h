//
//  UIView+XEEConstraints.h
//  XEEViewConstraints
//
//  Created by Andrija Cajic on 14/11/13.
//  Copyright (c) 2013 Andrija Cajic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (XEEConstraints)


/** 
 Delegated to setViewsConsecutiveHorizontally:alignToStart:paddingFromStart:alignToEnd:paddingToEnd:paddingInBetween: like this
 <code>setViewsConsecutiveHorizontally:views alignToStart:alignToStart paddingFromStart:0 alignToEnd:alignToEnd paddingToEnd:0 paddingInBetween:0</code>
 */
+(NSArray*) setViewsConsecutiveHorizontally:(NSArray*)views alignToStart:(BOOL)alignToStart alignToEnd:(BOOL)alignToEnd;

/**
 @discussion Place views in sequence horizontally next to each other.
 @param views Array of UIView instances
 @param alignToStart First view in array is aligned to the leading edge of superview.
 @param paddingStart Space between superview's leading edge and the leading edge of the first view in array.
 @param alignToEnd Last view in array is aligned to the trailing edge of superview. If views are aligned to both begin and to the end, they will stretch/compress to fill superview
 @param paddingEnd Space between superview's trailing edge and the trailing edge of the last view in array.
 @param paddingBetween Space between each view's trailing edge and its successor view's leading edge.
 @return array of NSLayoutConstraint instances
 */
+(NSArray*) setViewsConsecutiveHorizontally:(NSArray*)views alignToStart:(BOOL)alignToStart paddingFromStart:(CGFloat)paddingStart alignToEnd:(BOOL)alignToEnd paddingToEnd:(CGFloat)paddingEnd paddingInBetween:(CGFloat)paddingBetween;

/**
 Delegated to setViewsConsecutiveVertically:alignToStart:paddingFromStart:alignToEnd:paddingToEnd:paddingInBetween: like this <code>setViewsConsecutiveVertically:views alignToStart:alignToStart paddingFromStart:0 alignToEnd:alignToEnd paddingToEnd:0 paddingInBetween:0</code>
 */
+(NSArray*) setViewsConsecutiveVertically:(NSArray*)views alignToStart:(BOOL)alignToStart alignToEnd:(BOOL)alignToEnd;


/**
 @discussion Place views in sequence horizontally next to each other.
 @param views Array of UIView instances
 @param alignToStart First view in array is aligned to the top edge of superview.
 @param paddingStart Space between superview's top edge and the top edge of the first view in array.
 @param alignToEnd Last view in array is aligned to the bottom edge of superview. If views are aligned to both top and to the bottom, they will stretch/compress to fill superview.
 @param paddingEnd Space between superview's bottom edge and the bottom edge of the last view in array.
 @param paddingBetween Space between each view's bottom edge and its successor view's top edge.
 @return array of NSLayoutConstraint instances
 */
+(NSArray*) setViewsConsecutiveVertically:(NSArray*)views alignToStart:(BOOL)alignToStart paddingFromStart:(CGFloat)paddingStart alignToEnd:(BOOL)alignToEnd paddingToEnd:(CGFloat)paddingEnd paddingInBetween:(CGFloat)paddingBetween;

/**
 @discussion Stretch/compress view to span across enitre superview's size. Method affects both positioning and size of the view. Method does not simply copy the size of the superview (for that purpose use setViewSizeToSizeOf:).
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillSuperview;

/**
 @discussion Delegated to setViewToFillSuperviewWidthWithLeadingMargin:trailingMargin: like this 
 <code>setViewToFillSuperviewWidthWithLeadingMargin:0 trailingMargin:0</code>
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillSuperviewWidth;

/**
 @discussion Stretch/compress view to span across enitre superview's width with given margins. Method affects both positioning and size of the view. Method does not simply copy the width of the superview (for that purpose use setViewWidthToWidthOf:).
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillSuperviewWidthWithLeadingMargin:(CGFloat)leadingMargin trailingMargin:(CGFloat)trailingMargin;

/**
 @discussion Delegated to setViewToFillSuperviewHeightWithTopMargin:bottomMargin: like this 
 <code>setViewToFillSuperviewHeightWithTopMargin:0 bottomMargin:0</code>
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillSuperviewHeight;

/**
 @discussion Stretch/compress view to span across enitre superview's height with given margins. Method affects both positioning and size of the view. Method does not simply copy the height of the superview (for that purpose use setViewHeightToHeightOf:).
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillSuperviewHeightWithTopMargin:(CGFloat)topMargin bottomMargin:(CGFloat)bottomMargin;

/**
 @discussion Constrain a view to maintain certain aspect ratio.
 @param aspectRatio is ratio calculated as width/height (like 16/9 or 4/3)
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAspectRatio:(CGFloat)aspectRatio;

/**
 @param otherView view whose size is to be applied to the method calling view
 @return Array of 2 NSLayoutConstraint instances. First is setViewWidthToWidthOf:, second is setViewHeightToHeightOf:.
 */
-(NSArray*) setViewSizeToSizeOf:(UIView*)otherView;

/**
 @param otherView view whose height is to be applied to the method calling view
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewHeightToHeightOf:(UIView*)otherView;

/**
 @param otherView view whose width is to be applied to the method calling view
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewWidthToWidthOf:(UIView*)otherView;

/**
 @discussion Delegated to setViewRightToRightSideOf:withMargin: like this
 <code>setViewRightToRightSideOf:self.superview withMargin:margin</code>
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsRightWithMargin:(CGFloat)margin;

/**
 @discussion Delegated to setViewLeftToLeftSideOf:withMargin: like this
 <code>setViewLeftToLeftSideOf:self.superview withMargin:margin</code>
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsLeftWithMargin:(CGFloat)margin;

/**
 @discussion Delegated to setViewBottomToBottomOf:withMargin: like this
 <code>setViewBottomToBottomOf:self.superview withMargin:margin</code>
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsBottomWithMargin:(CGFloat)margin;

/**
 @discussion Delegated to setViewTopToTopOf:withMargin: like this
 <code>setViewTopToTopOf:self.superview withMargin:margin</code>
 @return array of NSLayoutConstraint instances
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsTopWithMargin:(CGFloat)margin;

/**
 @return Array of 2 NSLayoutConstraint instances. First is setViewAlignToSuperviewsHorizontalCenter, second is setViewAlignToSuperviewsVerticalCenter.
 */
-(NSArray*) setViewAlignToSuperviewsCenter;

/**
 @discussion Delegated to setViewCenterXToCenterXOf: like this
 <code>setViewCenterXToCenterXOf:self.superview</code>
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsHorizontalCenter;

/**
 @discussion Delegated to setViewCenterYToCenterYOf: like this
 <code>setViewCenterYToCenterYOf:self.superview</code>
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewAlignToSuperviewsVerticalCenter;

/**
 @discussion Align view's bottom edge to other view's bottom edge with margin.
 @param otherView this view's bottom edge will be used in returned constraint
 @param margin Space between view's bottom edge and otherView's bottom edge. Negative value of margin becomes <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewBottomToBottomOf:(UIView*)otherView withMargin:(CGFloat)bottomMargin;

/**
 @discussion Align view's bottom edge to other view's centerY with margin.
 @param otherView this view's centerY will be used in returned constraint
 @param margin Space between view's bottom edge and otherView's centerY. Negative value of margin becomes <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewBottomToCenterOf:(UIView*)otherView withMargin:(CGFloat)bottomMargin;

/**
 @discussion Align view's bottom edge to other view's top edge with margin.
 @param otherView this view's top edge will be used in returned constraint
 @param margin Space between view's bottom edge and otherView's top edge. Negative value of margin becomes <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewBottomToTopOf:(UIView*)otherView withMargin:(CGFloat)bottomMargin;

/**
 @discussion Align view's top edge to other view's bottom edge with margin.
 @param otherView this view's bottom edge will be used in returned constraint
 @param margin Space between view's top edge and otherView's bottom edge. It is value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewTopToBottomOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's top edge to other view's top edge with margin.
 @param otherView this view's top edge will be used in returned constraint
 @param margin Space between view's top edge and otherView's top edge. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewTopToTopOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view'S right edge to other view's right edge with margin.
 @param otherView this view's right edge will be used in returned constraint
 @param margin Space between view's right edge and otherView's right edge. Negative value of margin becomes <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewRightToRightSideOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's right edge to other view's centerX with margin.
 @param otherView this view's centerX attribute will be used in returned constraint
 @param margin Space between view's right edge and otherView's centerX. Negative value of margin becomes <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewRightToCenterXOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's left edge to other view's centerX with margin.
 @param otherView this view's centerX attribute will be used in returned constraint
 @param margin Space between view's left edge and otherView's centerX. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*)setViewLeftToCenterXOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's right edge to other view's left edge with margin.
 @param otherView this view's left edge will be used in returned constraint
 @param margin Space between view's right edge and otherView's left edge. Negative value of margin becomes the value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewRightToLeftSideOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's left edge to other view's left edge with margin.
 @param otherView this view's left edge will be used in returned constraint
 @param margin Space between view's left edge and otherView's left edge. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewLeftToLeftSideOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view'S left edge to other view's right edge with margin.
 @param otherView this view's right edge will be used in returned constraint
 @param margin Space between view's left edge and otherView's right edge. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewLeftToRightSideOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @return Array of 2 NSLayoutConstraint instances. First is setViewCenterXToCenterXOf:withMargin:, second is setViewCenterYToCenterYOf:withMargin:.
 */
-(NSArray*) setViewCenterToCenterOf:(UIView*)otherView;

/**
 @discussion Align view's centerY to other view's centerY with margin.
 @param otherView this view's centerY attribute will be used in returned constraint
 @param margin Space between view's centerY and otherView's centerY. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewCenterYToCenterYOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @discussion Align view's centerX to other view's centerX with margin.
 @param otherView this view's centerX attribute will be used in returned constraint
 @param margin Space between view's centerX and otherView's centerX. It is a value of <code>constant</code> property inside returned NSLayoutConstraint object.
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewCenterXToCenterXOf:(UIView*)otherView withMargin:(CGFloat)margin;

/**
 @return Array of 2 NSLayoutConstraint instances. First is setViewCenterX:, second is setViewCenterY:.
 */
-(NSArray*) setViewCenter:(CGPoint)center;

/**
 @param centerX view's centerX is set to this value
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewCenterX:(CGFloat)centerX;

/**
 @param centerY view's centerY is set to this value
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewCenterY:(CGFloat)centerY;

/**
 @return Array of 2 NSLayoutConstraint instances. First is setViewWidth:, second is setViewHeight:.
 */
-(NSArray*) setViewWidth:(CGFloat)width height:(CGFloat)height;

/**
 @param width view's width is set to this value
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewWidth:(CGFloat)width;

/**
 @param height view's height is set to this value
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewHeight:(CGFloat)height;

/**
 @return Array of 0, 1, 2, 3 or 4 NSLayoutConstraint instances. Array is consisted of elements from 2 arrays: setViewMinimumSize:, setViewMaximumSize:.
 */
-(NSArray*) setViewMinimumSize:(CGSize)minimumSize maximumSize:(CGSize)maximumSize;

/**
 @return Array of 0, 1 or 2 NSLayoutConstraint instances. If minimumSize.width is not 0, setViewMinimumWidth: is added to the returned array. If minimumSize.height is not 0, setViewMinimumHeight: is added to the returned array.
 */
-(NSArray*) setViewMinimumSize:(CGSize)minimumSize;

/**
 @return Array of 0, 1 or 2 NSLayoutConstraint instances. If maximumSize.width is not 0, setViewMaximumWidth: is added to the returned array. If maximumSize.height is not 0, setViewMaximumHeight: is added to the returned array.
 */
-(NSArray*) setViewMaximumSize:(CGSize)maximumSize;

/**
 @param minimumWidth value set as view's minimum width
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewMinimumWidth:(CGFloat)minimumWidth;

/**
 @param minimumHeight value set as view's minimum height
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewMinimumHeight:(CGFloat)minimumHeight;

/**
 @param maximumWidth value set as view's maximum width
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewMaximumWidth:(CGFloat)maximumWidth;

/**
 @param maximumHeight value set as view's maximum height
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewMaximumHeight:(CGFloat)maximumHeight;

/**
 @param percentageOfSuperviewHeight recommended values are those within range [0,1]
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewHeightToPercentageOfSuperviewHeight:(CGFloat)percentageOfSuperviewHeight;

/**
 @param percentageOfSuperviewWidth recommended values are those within range [0,1]
 @return NSLayoutConstraint instance
 */
-(NSLayoutConstraint*) setViewWidthToPercentageOfSuperviewWidth:(CGFloat)percentageOfSuperviewWidth;

/**
 @discussion The method links the width of the scroll view's outer "face" (the one it shows to its parent view) with scroll view's subview.
 For more details see setViewToFillScrollViewPage:.
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillScrollViewPageHorizontally:(UIScrollView*)scrollView leadingMargin:(CGFloat)leadingMargin trailingMargin:(CGFloat)trailingMargin;

/**
 @discussion The method links the height of the scroll view's outer "face" (the one it shows to its parent view) with scroll view's subview.<br/>
 <br/>
 For more details see setViewToFillScrollViewPage:.
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillScrollViewPageVertically:(UIScrollView*)scrollView leadingMargin:(CGFloat)leadingMargin trailingMargin:(CGFloat)trailingMargin;

/**
 @discussion Autolayout combined with UIScrollView instances operates differently that with ordinary UIViews instances.
 Scroll views have two "faces". One they show to their parent view and another they show to their child views. <br/>
 
 To the parent view, they appear as an ordinary view. The parent view does not know and does not care what scroll view does with its own child views. <br/>
 As far as child views are concerned, their parent view has the size of the scroll view's property <code>contentSize</code>. There is no way to explicitly set the value for the scroll view's <code>contentSize</code> property. Instead, <code>contentSize</code> is calculated from the constraints imposed on scroll view's child views. Using constraints, child views should be sufficiently linked with eachother and with their superview to enable unambiguous determination of the scroll view's content size. <br/>
 If contraints used on child views are insufficient, this can cause unexpected values to appear in scroll view's <code>contentSize</code> and scroll view will demostrate strange behaviour (e.g. scrolling disabled). <br/>
 <br/>
 The method links the size of the scroll view's outer "face" (the one it shows to its parent view) with scroll view's subview.
 @return array of NSLayoutConstraint instances
 */
-(NSArray*) setViewToFillScrollViewPage:(UIScrollView*)scrollView;


@end
