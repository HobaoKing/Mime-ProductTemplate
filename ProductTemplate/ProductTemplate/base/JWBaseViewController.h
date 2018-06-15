//
//  JWBaseViewController.h
//  ProductTemplate
//
//  Created by Nongmuren075 on 2018/6/15.
//  Copyright © 2018年 JeffWang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JWBaseViewController : UIViewController

//标题文字
@property (copy, nonatomic) NSString *navigationTitle;


// 该页面是否可以需要DISS
@property(nonatomic,assign) BOOL isDissMiss;


// 创建返回按钮 pop上一页面, 不支持返回时间自定义,默认POP
-(void)createBackButton;

/**
 自定义左边按钮, 可自定义点击事件, 默认返回箭头(→),
 如diss, 点击左边按钮 触发的事件
 */
-(void)createLeftButton;
/**
 改变导航栏颜色
 @param color 色值
 */
-(void)chageNavColorAndBackItemWithColor:(UIColor *) color;

/**
 改变导航栏颜色并自定义左边返回按钮
 
 @param color 导航颜色
 @param leftImagename 左边按钮图片名称
 */
-(void)chageNavColorAndLeftItemImage:(UIColor *) color leftimage:(NSString *) leftImagename ;
/**
 是否需要返回手势
 @param color 导航颜色
 @param leftImagename 返回按钮图标
 @param pop 是否需要手势返回
 */
-(void) chageNavColorAndLeftItemImage:(UIColor *) color leftimage:(NSString *) leftImagename taptouchpop:(BOOL) pop;
//根据图片自定义导航左边 按钮
-(void)createLeftButtonWithImage:(NSString *)leftImagename;
//自定义导航按钮事件 默认返回上一级
-(void)onLeftGoBackTouchClick;


/**
 根据图片名称创建导航右边按钮
 @param rightImagename 图片名称
 */
-(void)createRightButtonWithImage:(NSString *) rightImagename;
/**
 导航右边按钮文字
 @param rightstring 文字内容
 */
-(void)createRightButtonWithText:(NSString *) rightstring;
/**
 右边文字
 @param rightstring 右边按钮文字
 @param textColor 右边文字色值
 */
-(void)createRightButtonWithText:(NSString *) rightstring color :(UIColor *) textColor;
/**
 右边导航按钮事件
 */
-(void)onRightTouchClick;





@end
