//
//  AppDelegate.h
//  BankLoansButler
//
//  Created by ZWS on 14-10-20.
//  Copyright (c) 2014年 FTSafe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <BOCOPPaySDK/BOCOPPay.h>

//分行测试环境
//#define kAppKey             @"138"
//#define kAppSecret          @"07e2af31b5a1190ffc794893a1d175079f1ecba9145b4ccea1"
//#define kAppURL @"http://22.188.12.161:8080/"

//组装测试环境
//#define kAppKey             @"1143"
//#define kAppSecret          @"0476df4a215987a94fd4b22ba3477c34fefbb867101da32cf4"
//#define kAppURL @"http://22.188.12.165:8080/"

//组装测试环境
//#define kAppKey             @"319"
//#define kAppSecret          @"1780581e6069cb94432568acc795791a9f363da347becd20fc"
//#define kAppURL @"http://22.188.36.194:8080/"

//7.2新环境 --除了商业贷款 其他都能查
//#define kAppKey             @"143"
//#define kAppSecret          @"00fd9afa2a2012af558457b57a6cf72277ef7cf39f065a1ef4"
//#define kAppURL @"http://22.188.12.161:8080/"

//7月17日环境 --只能查商业贷款
//#define kAppKey             @"379"
//#define kAppSecret          @"1780599515d76eec06324514c1bd95c2602ebb9fe4f1d44972"
//#define kAppURL @"http://22.188.36.194:8080/"

//注:第一版本使用地址 SMS短信发送到开放平台
#define kAppKey             @"378"
#define kAppSecret          @"a17001ccf418404b109f7a4bdbcd9c084292b0355e10f69555"
#define kAppURL @"https://openapi.boc.cn:443/"

//2016.3.14 总行后台P603变动
//#define kAppKey             @"378"
//#define kAppSecret          @"a17001ccf418404b109f7a4bdbcd9c084292b0355e10f69555"
//#define kAppURL @"http://22.188.36.180:8080/"

//2016.3.22 APS修改在PushManager.m修改
//#define kAppKey             @"1449"
//#define kAppSecret          @"055fc5a28d6e3e3741bb484982afb9044a62e06b6c56bd20df"
//#define kAppURL @"http://22.188.36.180:8080/"

#define kAppUpdataUrl @"http://open.boc.cn"

@interface AppDelegate : UIResponder <UIApplicationDelegate,UIAlertViewDelegate>
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@property (strong, nonatomic) UIWindow *window;

-(void)startLocation;
//@property (readonly, nonatomic) BOCOPPayAuthorizeInfo * bocInfo;
@property (readonly, nonatomic) BOCOPPay *bocPay;
+ (AppDelegate*)appDelegate;

@end

