#import <Flutter/Flutter.h>
#import "WXApi.h"

@interface SyFlutterWechatPlugin : NSObject<FlutterPlugin,WXApiDelegate>

+(BOOL)handleOpenURL:(NSURL*)url;

@end
