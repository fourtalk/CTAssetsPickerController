/*
 
 MIT License (MIT)
 
 Copyright (c) 2013 Clement CN Tsang
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import <UIKit/UIKit.h>

@interface CTAssetsGridSelectedView : UIView

@property (nonatomic, assign) BOOL showsSelectionIndex;
@property (nonatomic, assign) NSUInteger selectionIndex;

@property (nonatomic, weak, nullable) UIColor *selectedBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat borderWidth UI_APPEARANCE_SELECTOR;

@property (nonatomic, weak, nullable) UIFont *font UI_APPEARANCE_SELECTOR DEPRECATED_MSG_ATTRIBUTE("Use setTextAttributes: of CTAssetSelectionLabel instead.");
@property (nonatomic, weak, nullable) UIColor *textColor UI_APPEARANCE_SELECTOR DEPRECATED_MSG_ATTRIBUTE("Use setTextAttributes: of CTAssetSelectionLabel instead.");

/**
 *  To set the outer corner radius of label.
 *
 *  @param cornerRadius The radius to use when drawing outer rounded corners for selection border.
 */
- (void)setOuterCornerRadius:(CGFloat)cornerRadius UI_APPEARANCE_SELECTOR;

/**
 *  To set the inner corner radius of label.
 *
 *  @param cornerRadius The radius to use when drawing outer inner corners for selection border.
 */
- (void)setInnerCornerRadius:(CGFloat)cornerRadius UI_APPEARANCE_SELECTOR;
@end
