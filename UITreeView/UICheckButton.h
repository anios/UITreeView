//
//  UICheckButton.h
//  MyTreeViewPrototype
//
//  Created by Varun Naharia on 26/08/15.
//

#import <UIKit/UIKit.h>

@interface UICheckableButton : UIButton
@property(nonatomic, assign) BOOL checked;
@property(nonatomic, strong) UIImage *checkedImage;
@property(nonatomic, strong) UIImage *uncheckedImage;
@property(nonatomic, strong) void(^onCheckedChanged)(BOOL checked);
- (instancetype) initWithFrame:(CGRect)frame;
@end