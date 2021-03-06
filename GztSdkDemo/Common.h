//
//  Common.h
//
//  Created by neng on 14-6-19.
//  Copyright (c) 2014年 neng. All rights reserved.
//

//只在debug下才输出日志, 在程序运行时取消log
#ifdef DEBUG
#define MyLog(...)  NSLog(__VA_ARGS__)
#else
#define MyLog(...)
#endif

//调用函数
#define LogFun  MyLog(@"%s",__func__);

//输出视图的frame边界
#define LogFrame(view)  MyLog(@"%@",NSStringFromCGRect(view.frame) );

//输出所有子视图
#define LogSubviews(view)  MyLog(@"%@",view.subviews);

#define iOS7   ([UIDevice currentDevice].systemVersion.floatValue>=7.0)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)