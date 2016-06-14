//
//  AppDelegate.hc795791a9f363da347becd20fc"
//#define kAppURL @"http://22.188.36.194:8080/"

//7.2新环境 --除了商业贷款 其他都能查
//#define kAppKey             @"143"
//#define kAppSecret          @"00fd9afa2a2012af558457b57a6cf72277ef7cf39f065a1ef4"
//#define kAppURL @"http://22.188.12.161:8080/"

//7月17日环境 --只能查商业贷款56bd20df"
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

