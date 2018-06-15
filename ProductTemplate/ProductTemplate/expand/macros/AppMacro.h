//
//  AppMacro.h
//  ProductTemplate
//
//  Created by Nongmuren075 on 2018/6/15.
//  Copyright © 2018年 JeffWang. All rights reserved.
//

#ifndef AppMacro_h
#define AppMacro_h


#ifdef DEBUG
#define LRString [NSString stringWithFormat:@"%s", __FILE__].lastPathComponent
#define NSLog(...) printf("%s: %s 第%d行: %s\n\n",[[AppUtil lr_stringDate] UTF8String], [LRString UTF8String] ,__LINE__, [[NSString stringWithFormat:__VA_ARGS__] UTF8String]);
#else
#define NSLog(...){}
#endif




/**
 状态栏高度
 */
#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height

// navgation 高度44
#define kNavBarHeight 44.0

//总体导航栏高度
#define KNavgationHight (kStatusBarHeight + kNavBarHeight)

//tabbar高度, 根据状态栏高度动态计算
#define kTabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)



#define kFrameWidth  self.view.frame.size.width
#define kFrameHeight self.view.frame.size.height

#define kScreemWidth  [UIScreen mainScreen].bounds.size.width
#define kScreenHeight  [UIScreen mainScreen].bounds.size.height




#undef    RGB
#define RGB(R,G,B)        [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:1.0f]

#undef    RGBA
#define RGBA(R,G,B,A)    [UIColor colorWithRed:R/255.0f green:G/255.0f blue:B/255.0f alpha:A]

//16进制转色值
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//16进制转色值带透明度
#define UIColorFromRGBA(rgbValue, alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 blue:((float)(rgbValue & 0x0000FF))/255.0 alpha:alphaValue]


//随机颜色
#define JWRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]



/**
 *
 *
 *  @param weakSelf
 *
 *  @return
 */
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;


/**
 定义基本数据类型
 */
#define kPS @property(nonatomic,copy)NSString*
#define kPN @property(nonatomic,copy)NSNumber*
#define kPA @property(nonatomic,copy)NSArray*
#define kPD @property(nonatomic,copy)NSDictionary*
#define kPINT  @property (nonatomic,assign) NSInteger
#define kPFLOAT @property (nonatomic,assign) CGFloat

/**
 判断设备尺寸
 */
#define IS_SCREEN_X_INCH    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_SCREEN_55_INCH    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1080, 1920), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_SCREEN_47_INCH    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_SCREEN_4_INCH    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define IS_SCREEN_35_INCH    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)



#endif /* AppMacro_h */
